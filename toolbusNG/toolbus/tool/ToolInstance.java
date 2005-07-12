 package toolbus.tool;

import java.util.LinkedList;

import toolbus.Environment;
import toolbus.TBTerm;
import toolbus.ToolBusException;
import aterm.AFun;
import aterm.ATerm;
import aterm.ATermAppl;
import aterm.ATermList;

/**
 * @author paulk, Jul 29, 2002
 * 
 * Tool Instance creates the environment for running a JavaTool.
 *
 * Next a ToolShield is created to run the actual tool class.
 */

public class ToolInstance {
 
  private static int toolCount = 0;
  private ATerm toolId;
  private Thread toolThread;
  private Object toolInstance;
  
  private LinkedList valuesFromTool;
  private LinkedList eventsFromTool;
  private LinkedList pendingEvents;
  private ToolShield toolShield;

  protected static final Integer EVAL = new Integer(1);
  protected static final Integer DO = new Integer(2);
  protected static final Integer TERMINATE = new Integer(3);
  public static final String[] OperatorForTool = {"dummy", "rec-eval", "rec-do", "rec-terminate"};

  /**
   * Construct a ToolInstance. 
   * 
   * @param toolDefinition definition of the tool
   */

  public ToolInstance(ToolDefinition toolDef) throws ToolBusException {
    System.err.println("ToolInstance");
    valuesFromTool = new LinkedList();
    eventsFromTool = new LinkedList();
    pendingEvents = new LinkedList();

    toolShield = toolDef.makeToolShield(this);
    toolShield.start();
    AFun afun = TBTerm.factory.makeAFun(toolDef.getName(), 1, false);
    toolId = TBTerm.factory.makeAppl(afun, TBTerm.factory.makeInt(toolCount++));
  }

  public ATerm getToolId(){
  	return toolId;
  }
  
  public int getToolCount(){
  	return toolCount;
  }
  
  /**
   * Send an evaluation request to the ToolShield.
   * (the answer will be returned by the ToolShield using addValue)
   */

  synchronized public void sndEvalToTool(ATermAppl call) {
    toolShield.sndRequestToTool(EVAL, call);
  }

  /**
   * Send a do request to the tool.
   */

  synchronized public void sndDoToTool(ATermAppl call) {
    toolShield.sndRequestToTool(DO, call);
  }
 
  /**
   * Send an acknowledgement to a previous event
   */

  synchronized public void sndAckToTool(ATerm eventTerm) throws ToolBusException {
    //System.err.println("sndAckToTool:" + eventTerm);
    int eventindex = pendingEvents.indexOf(eventTerm);
    if (eventindex < 0 ) {
      throw new ToolBusException("cannot acknowledge event: " + eventTerm);
    }
    AFun afun = TBTerm.factory.makeAFun("ackEvent", 1, false);
    ATermList args = TBTerm.factory.makeList(eventTerm);
    ATermAppl call = TBTerm.factory.makeAppl(afun, args);
    toolShield.sndRequestToTool(DO, call);
  }

  /**
   * addValueFromTool adds a value returned by the tool to valuesFromTool
   * @param res result returned by tool
   */

  synchronized public void addValueFromTool(Object res) {
    valuesFromTool.addLast(res);
    System.err.println("ToolInstance.addValue: " + toolId + " res = " + res);
  }

  /** 
   * addEventFromTool adds an event generated by the tool to eventsFromTool
   * @param obj generated by tool
   */

  synchronized public ATerm addEventFromTool(Object obj) {
    Object event[] = new Object[] { TBTerm.newTransactionId(), obj };
    eventsFromTool.addLast(event);
    System.err.println("JavaTool.addEvenFromTool: id = " + event[0] + " obj= = " + event[1]);
    return (ATerm) event[0];
  }

  /**
   * * Pass a value obtained from the ToolShield to the ToolBus
   * @see toolbus.tool.ToolInstance#getValueFromTool(ATerm, Environment)
   */

  synchronized public boolean getValueFromTool(ATerm trm, Environment env)
  throws ToolBusException {
  	//System.err.println("getValueFromTool " + toolId + ": " + trm);
  	if (valuesFromTool.isEmpty()) {
  		return false;
  	} else {
  		ATerm result = (ATerm) valuesFromTool.getFirst();
  		boolean matches = TBTerm.match(trm, env, result, new Environment());
  		if (matches) {
  			valuesFromTool.removeFirst();
  			return true;
  		} else {
  			return false;
  		}
  	}
  }

  /**
   * Pass an event obtained from the ToolShield to the ToolBus
   * 
   * @see toolbus.tool.ToolInstance#getEventFromTool(ATerm, Environment)
   */

  synchronized public boolean getEventFromTool(ATerm trm, Environment env) {
    //System.err.println("getEventFromTool: " + " " + trm);
    for (int i = 0; i < eventsFromTool.size(); i++) {
      try {
        Object event[] = (Object[]) eventsFromTool.get(i);
        //ATerm eventId = (ATerm) event[0];
        ATerm eventTerm = (ATerm) event[1];
        boolean matches = TBTerm.match(trm, env, eventTerm, new Environment());
        //System.err.println(matches + " " + eventId + eventTerm);
        if (matches) {
          //env.assignVar(id, eventId);
          eventsFromTool.remove(i);
          pendingEvents.addLast(eventTerm);
          return true;
        }
      } catch (ToolBusException e) {
        System.err.println("getEventFromTool: cannot happen :-)");
      }
    }
    //System.err.println("getEventFromTool returns false");
    return false;
  }

  /**
   * Terminate the execution of this tool.
   * @see toolbus.tool.ToolInstance#terminate(String)
   */
  public   void terminate(String msg){
  	System.err.println("ToolInstance.terminate: " + toolId);
	toolShield.terminate(msg);
  }
  
}
