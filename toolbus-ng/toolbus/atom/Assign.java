/**
 * @author paulk, Jul 20, 2002
 */
package toolbus.atom;

import toolbus.*;
import toolbus.process.*;
import aterm.*;

public class Assign extends Atom {

	public Assign(ATerm var, ATerm exp) {
		super(var, exp);
	}
	
	public Assign(){
		super();
	}
	
	public void compile(ProcessInstance P, AtomSet follow)
	throws ToolBusException
	{
		super.compile(P, follow);
		
		ATerm var = this.getArgs().getFirst();
		if(!TBTerm.isVar(var))
			throw new ToolBusException("left-hand side of := should be a variable");
		ATerm vartype = TBTerm.getVarType(var);
		
		ATerm exp = this.getArgs().getLast();
		ATerm exptype = TBTerm.checkType(exp, this.getEnv());
		
		if(vartype != exptype)  // lhs = term!
			throw new ToolBusException(" wrong types in assignment: " + vartype + " := " + exptype);
	}

	public boolean execute() 
	throws ToolBusException
	{
		if(!isEnabled())
				return false;
		Environment e = this.getEnv();
		ATerm var = this.getArgs().getFirst();
		ATerm exp = this.getArgs().getLast();
		ATerm val = TBTerm.eval(exp, e);
		e.putVar(var, val);
		return true;
	}
}
