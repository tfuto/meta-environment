/**
 * @author paulk, Jul 16, 2002
 */

package toolbus.atom;
import java.util.Vector;

import toolbus.*;
import toolbus.process.*;

import aterm.*;
import aterm.ATerm;

abstract class MsgAtom extends Atom {

  private State partners = new State(); // communication partners in other processes
  private Ref msg;
  private Ref id;

  private ATerm matchPattern;

  public MsgAtom(ATerm msg) {
    super();
    this.msg = new Ref(msg);
    this.id = new Ref(this instanceof RecMsg ? TBTerm.TransactionIdResVar : TBTerm.TransactionIdVar);
    setAtomArgs(this.msg, this.id);
  }

  public MsgAtom(ATerm msg, ATerm id) {
    super();
    this.msg = new Ref(msg);
    this.id = new Ref(id);
    setAtomArgs(this.msg, this.id);
  }

  public ATerm getMsg() {
    return msg.value;
  }

  public ATerm getId() {
    return id.value;
  }

  public ATerm getMatchPattern() {
    return matchPattern;
  }

  public boolean canCommunicate(MsgAtom a) {
    return ((this instanceof SndMsg && a instanceof RecMsg) || (this instanceof RecMsg && a instanceof SndMsg))
      && TBTerm.mightMatch(getMsg(), a.getMsg());
  }

  public void addMsgPartner(StateElement a) {
    partners.add(a);
  }

  public State getMsgPartners() {
    return partners;
  }

  public boolean hasMsgPartners() {
    return partners.size() > 0;
  }

  public boolean matchPartner(MsgAtom b) throws ToolBusException {
    return TBTerm.match(matchPattern, getEnv(), b.getMatchPattern(), b.getEnv());
  }

  public void compile(ProcessInstance processInstance, State follow) throws ToolBusException {
    super.compile(processInstance, follow);
    ATermFactory factory = getId().getFactory();
    matchPattern = factory.makeList(getMsg(), factory.makeList(getId()));

    System.err.println(matchPattern);
  }

  public boolean execute() throws ToolBusException {
    if (!isEnabled())
      return false;
    Vector partnervec = partners.getElementsAsVector();
    int psize = partnervec.size();

    if (psize > 0) {
      ProcessInstance pa = getProcess();
      for (int pindex = ToolBus.nextInt(psize), pleft = psize; pleft > 0; pindex = (pindex + 1) % psize, pleft--) {
        MsgAtom b = (MsgAtom) partnervec.elementAt(pindex);
        ProcessInstance pb = b.getProcess();
        if (pb.contains(b) && b.isEnabled()) {
          if (matchPartner(b)) {
            if (ToolBus.isVerbose()) {
              System.err.println(
                "--- " + pa.getProcessId() + "/" + pb.getProcessId() + ": " + this +" communicates with " + b);
            }
            this.nextState();
            b.nextState();
            return true;
          }
        }
      }
    }
    return false;
  }
}
