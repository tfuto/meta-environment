package toolbus.tool.classic;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Vector;

import toolbus.TBTerm;
import toolbus.ToolBus;
import toolbus.tool.ToolDefinition;
import toolbus.tool.ToolInstance;
import toolbus.tool.ToolShield;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermFactory;

public class ClassicToolShield extends ToolShield {
	private final static int LENSPEC = 12;
	private final static int MAX_HANDSHAKE = 512;
	private final static int MIN_MSG_SIZE = 128;

	private Object lockObject;
	protected ATermFactory factory;
	private boolean verbose = true;
	private InputStream inputStream;
	private OutputStream outputStream;
	private Process toolProcess;

	private ToolDefinition toolDef;
	private String toolname;
	private InetAddress address;
	private int port = -1;
	private int toolid = -1;

	private Map queueMap;

	private ATerm termSndVoid;

	private boolean connected;
	
	/**
	   * The constructor for ClassicToolShield. 
	   * @param toolDef the definition of this tool
	   * @param toolInstance the tool instance that created this ClassicToolShield
	   */

	public ClassicToolShield(ToolDefinition toolDef, ToolInstance toolInstance) {
		super(toolInstance);
		this.toolDef = toolDef;
		this.factory = TBTerm.factory;
		this.lockObject = this;
		termSndVoid = factory.parse("snd-void");
		queueMap = new HashMap();
		executeTool();
	}
	
	void executeTool(){
		String cmd = toolDef.getCommand() + 
					//" -TB_HOST "      + toolDef.getHostName() +
					" -TB_HOST "      + "aarde" +
					" -TB_TOOL_NAME " + toolDef.getName() +
					" -TB_TOOL_ID "   + getToolInstance().getToolCount() +
					" -TB_PORT "      + ToolBus.getWellKnownSocketPort()
					;
		System.err.println("executeTool:" + cmd);
		/*			
		try {
			toolProcess = Runtime.getRuntime().exec(cmd);
		} catch (IOException e) {
			System.err.println(e);
		}
		*/
	}
	
	public void checkToolSignature() throws IOException {
		sendTerm(factory.make("snd-do(signature(<term>,<term>)", toolDef
				.getInputSignature(), toolDef.getOutputSignature()));
	}
	
	public void sndRequestToTool(/* ATerm id,*/ Integer operation, ATermAppl call) {
		System.err.println("sndRequestToTool(" + operation + ", " + call + ")");
		addRequestForTool(new Object[] {operation, call, null});
	}
	
	/*
	 * (non-Javadoc)
	 * 
	 * @see toolbus.tool.ToolShield#handleRequestForTool()
	 */
	protected void handleRequestForTool() {
		Object request[] = getNextRequestForTool();
		Integer operation = (Integer) request[0];
		ATermAppl call = (ATermAppl) request[1];
		try {
			sendTerm(call);
		} catch (IOException e) {
			System.err.println(e);
		}
	}
	
	public void handleIncomingTerm() throws IOException {
		ATerm t = readTerm();

		info("tool " + toolname + " handling term from toolbus: " + t);

		if (t.match("rec-terminate(<term>)") != null) {
			setRunning(false);
			connected = false;
		}

		handleIncomingTerm(t);
	}

	public void handleIncomingTerm(ATerm t) throws IOException {
		handleTerm(t);
	}

	protected void handleTerm(ATerm t) throws IOException {
		synchronized (getLockObject()) {
			ATerm result = handler(t);

			if (t.match("rec-do(<term>)") != null) {
				sendTerm(termSndVoid);
			}
			else if (result != null) {
				sendTerm(result);
			}

			List terms = t.match("rec-ack-event(<term>)");
			if (terms != null) {
				ackEvent((ATerm) terms.get(0));
			}
		}
	}

	public void sendEvent(ATerm term) {
		try {
			sendTerm(factory.make("snd-event(<term>)", term));
		}
		catch (IOException e) {
			throw new RuntimeException("cannot send event: " + e.getMessage());
		}
	}

	public void postEvent(ATerm term) {
		synchronized (getLockObject()) {
			ATermAppl appl = (ATermAppl) term;
			EventQueue queue = (EventQueue) queueMap.get(appl.getName());
			if (queue == null) {
				queue = new EventQueue();
				queueMap.put(appl.getName(), queue);
			}
			if (queue.ackWaiting()) {
				queue.addEvent(appl);
			}
			else {
				try {
					sendTerm(factory.make("snd-event(<term>)", appl));
				}
				catch (IOException e) {
					throw new RuntimeException("cannot post event: " + appl);
				}
				queue.setAckWaiting();
			}
		}
	}

	private void ackEvent(ATerm event) throws IOException {
		ATermAppl appl = (ATermAppl) event;
		EventQueue queue = (EventQueue) queueMap.get(appl.getName());
		if (queue != null && queue.ackWaiting()) {
			appl = queue.nextEvent();
			if (appl != null) {
				sendTerm(factory.make("snd-event(<term>)", appl));
				return;
			}
		}
	}
	
	/* (non-Javadoc)
	 * @see toolbus.tool.ToolShield#terminate(java.lang.String)
	 */
	public void terminate(String msg) {
		// TODO Auto-generated method stub
	}
	
	public void setLockObject(Object obj) {
		lockObject = obj;
	}

	public Object getLockObject() {
		return lockObject;
	}

	public void connect() throws IOException {
		Socket socket = new Socket(address, port);
		inputStream = new BufferedInputStream(socket.getInputStream());
		outputStream = new BufferedOutputStream(socket.getOutputStream());

		shakeHands();
		connected = true;
	}

	public void connect(String toolname, InetAddress address, int port) throws IOException {
		if (toolname != null) {
			this.toolname = toolname;
		}

		if (address != null) {
			this.address = address;
		}

		if (port != -1) {
			this.port = port;
		}

		this.toolid = -1;

		connect();
	}

	public void disconnect() {
		try {
			sendTerm(factory.parse("snd-disconnect"));
		}
		catch (IOException e) {
			throw new RuntimeException("cannot disconnect: " + e.getMessage());
		}
	}

	public boolean isConnected() {
		return connected;
	}

	public void setVerbose(boolean on) {
		verbose = on;
	}

	public boolean getVerbose() {
		return verbose;
	}

	private void shakeHands() throws IOException {
		String host = address.getHostName();
		info("host = " + host);
		if (host == null) {
			String pair = address.toString();
			host = pair.substring(0, pair.indexOf('/'));
			info("local host = " + host);
		}

		String myHand = toolname + " " + host + " " + toolid;
		byte[] hs = myHand.getBytes();
		byte[] handshake = new byte[MAX_HANDSHAKE];
		for (int i = 0; i < hs.length; i++) {
			handshake[i] = hs[i];
		}
		outputStream.write(handshake);
		outputStream.flush();

		int tid = readInt();
		if (tid < 0) {
			throw new RuntimeException("no tool-id assigned by ToolBus");
		}
		if (toolid < 0) {
			toolid = tid;
			info("got tool-id: " + toolid);
		}
		else if (toolid != tid) {
			throw new RuntimeException("tool-id out of phase");
		}

		ATerm term = readTerm();
		List matches = term.match("rec-do(signature([<list>],[<list>]))");
		if (matches != null) {
			info("checking input signature...");
			checkToolSignature();
			sendTerm(termSndVoid);
		}
		else {
			throw new RuntimeException("signature information garbled: " + term);
		}
	}

	void info(String msg) {
		if (verbose) {
			System.err.println("[TOOL: " + toolname + "] " + msg);
		}
	}

	private int readInt() throws IOException {
		byte[] buffer = new byte[MAX_HANDSHAKE];

		inputStream.read(buffer);

		String string = new String(buffer);

		int space = string.indexOf(' ');
		int end = string.indexOf(0);
		String toolname = string.substring(0, space);
		if (!toolname.equals(this.toolname)) {
			throw new RuntimeException("wrong toolname in readInt: " + toolname);
		}
		return Integer.parseInt(string.substring(space + 1, end));
	}

	public void sendTerm(ATerm term) throws IOException {
		synchronized (getLockObject()) {
			String unparsedTerm = term.toString();
			int size = unparsedTerm.length();
			String lenspec = "000000000000" + (size + LENSPEC) + ":";
			int len = lenspec.length();
			byte[] ls = new byte[LENSPEC];

			for (int i = 0; i < LENSPEC; i++) {
				ls[i] = (byte) lenspec.charAt(len + i - LENSPEC);
			}

			if (verbose) {
				System.out.print("tool " + toolname + " writes term:\n");
				System.out.print(new String(ls));
				System.out.println(term);
			}
			outputStream.write(ls);
			term.writeToTextFile(outputStream);
			if (LENSPEC + size < MIN_MSG_SIZE) {
				info("padding with " + (MIN_MSG_SIZE - (LENSPEC + size)) + " zero bytes.");
			}
			for (int i = LENSPEC + size; i < MIN_MSG_SIZE; i++) {
				outputStream.write(0);
			}
			outputStream.flush();
		}
	}

	public static ATerm readTerm(InputStream stream, ATermFactory factory) throws IOException {
		return readTerm(stream, factory, stream);
	}

	public static ATerm readTerm(InputStream inputStream, ATermFactory factory, Object lock) throws IOException {
		ATerm result;
		byte[] lspecBuf = new byte[LENSPEC];
		int index;

		index = 0;
		while (index != LENSPEC) {
			int bytes_read = inputStream.read(lspecBuf, index, LENSPEC - index);
			if (bytes_read <= 0) {
				throw new IOException("ToolBus connection terminated");
			}
			index += bytes_read;
		}

		String lspec = new String(lspecBuf);

		int bytesLeft = Integer.parseInt(lspec.substring(0, LENSPEC - 1));
		if (bytesLeft < MIN_MSG_SIZE) {
			bytesLeft = MIN_MSG_SIZE;
		}
		bytesLeft -= LENSPEC;

		byte[] data = new byte[bytesLeft];
		index = 0;
		while (index != bytesLeft) {
			int bytes_read = inputStream.read(data, index, bytesLeft - index);
			if (bytes_read <= 0) {
				throw new IOException("ToolBus connection terminated");
			}
			index += bytes_read;
		}

		String stringdata = new String(data);

		//info("data read (" + bytesLeft + " bytes): '" + stringdata + "'");

		result = factory.parse(stringdata);

		return result;
	}

	public ATerm readTerm(InputStream inputStream) throws IOException {
		return readTerm(inputStream, factory, getLockObject());
	}

	public ATerm readTerm() throws IOException {
		return readTerm(inputStream);
	}
	
	public void initRun() {
		System.err.println("ClassicToolShield.initRun");
		setRunning(true);
		ServerSocket server = ToolBus.getWellKnownSocket();
		
		try {
			System.err.println("ClassicToolShield.initRun trying to accept on " + server);
			Socket connection = server.accept();
			System.err.println("ClassicToolShield.initRun connected to " + connection);
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
	}


}

/**
 * The class EventQueue stores a queue of events, and their
 * acknowledgement status.
 *
 */

class EventQueue {
	private boolean ack = false;
	private List events = new Vector();

	public boolean ackWaiting() {
		return ack;
	}

	public void setAckWaiting() {
		ack = true;
	}

	public ATermAppl nextEvent() {
		if (events.size() == 0) {
			ack = false;
			return null;
		}

		ATermAppl event = (ATermAppl) events.get(0);
		events.remove(0);
		return event;
	}

	public void addEvent(ATermAppl event) {
		events.add(event);
	}
}
