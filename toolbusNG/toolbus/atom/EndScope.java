package toolbus.atom;

import toolbus.Environment;
import toolbus.TBTermFactory;
import toolbus.ToolBusException;
import toolbus.process.ProcessExpression;
import aterm.ATermList;

public class EndScope extends Atom {
	private Ref refformals;

	public EndScope(ATermList formals, TBTermFactory tbfactory) {
		super(tbfactory);
		refformals = new Ref(formals);
		setAtomArgs(this.refformals);
	}

	public ProcessExpression copy() {
		Atom a = new EndScope((ATermList) refformals.value, tbfactory);
		 a.copyAtomAttributes(this);
		 return a;
	}
	
	 public void replaceFormals(Environment env) throws ToolBusException{
		 return;
	 }

	public boolean execute() throws ToolBusException {
		if (isEnabled()) {
			Environment env = getEnv();
			env.removeBindings(((ATermList) refformals.value));
			return true;
		} else
			return false;
	}
}