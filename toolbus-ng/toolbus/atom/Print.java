/**
 * @author paulk
 */
package toolbus.atom;
import toolbus.*;
import toolbus.process.ProcessExpression;
import aterm.*;

public class Print extends Atom {
  private Ref arg;

  public Print(ATerm a) {
    super();
    arg = new Ref(a);
    setAtomArgs(arg);
  }
  
  public ProcessExpression copy(){
    return new Print(arg.value);
  }

  public boolean execute() throws ToolBusException {
    if (isEnabled()) {
      Environment e = getEnv();
      getToolBus().getPrintStream().println(TBTerm.substitute(arg.value, e));
      return nextState();
    } else {
      return false;
    }
  }
}
