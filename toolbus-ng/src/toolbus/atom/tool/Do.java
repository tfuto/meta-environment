package toolbus.atom.tool;

import toolbus.TBTermFactory;
import toolbus.TBTermVar;
import toolbus.atom.Atom;
import toolbus.atom.Ref;
import toolbus.exceptions.ToolBusException;
import toolbus.parsercup.PositionInformation;
import toolbus.process.ProcessExpression;
import toolbus.tool.ToolInstance;
import aterm.ATerm;

/**
 * @author paulk, Aug 7, 2002
 */
public class Do extends Atom{
	private final Ref toolId;
	private final Ref request;
	private ToolInstance toolInstance;
	
	public Do(ATerm toolId, ATerm request, TBTermFactory tbfactory, PositionInformation posInfo){
		super(tbfactory, posInfo);
		
		this.toolId = new Ref(toolId);
		this.request = new Ref(request);
		setAtomArgs(new Ref[]{this.toolId, this.request});
		externalNameAsReceivedByTool = "rec-do";
	}
	
	public ProcessExpression copy(){
		Atom a = new Do(toolId.value, request.value, tbfactory, getPosInfo());
		a.copyAtomAttributes(this);
		
		return a;
	}
	
	public void activate(){
		toolInstance = null;
		super.activate();
	}
	
	public boolean execute() throws ToolBusException{
		if(!isEnabled()) return false;
		
		if(toolInstance == null){
			ATerm tid = getEnv().getValue((TBTermVar) toolId.value);
			toolInstance = getToolBus().getToolInstanceManager().get(tid);
			if(toolInstance == null) return false;
		}
		
		if(toolInstance.tryDoEval()){
			ATerm req = tbfactory.fullSubstitute(request.value, getEnv());
			if(req == null) throw new ToolBusException("Illegal do request pattern: "+request.value+".");
			
			toolInstance.sendDo(req);
			//LoggerFactory.log(this.getProcess().getProcessName(), "Do " + request.value, IToolBusLoggerConstants.TOOLCOM);
			return true;
		}
		return false;
	}
}
