package toolbus.process;

import java.util.Vector;

import toolbus.ToolBusException;
import toolbus.atom.*;

public class Disrupt extends AbstractProcessExpression {
  private ProcessExpression left, right;

  public Disrupt(ProcessExpression left, ProcessExpression right) {
    this.left = left;
    this.right = right;
  }

  public ProcessExpression copy() {
    return new Disrupt(left, right);
  }

  public void extendFollow(AtomSet f) {
    left.extendFollow(f);
    right.extendFollow(f);
    if (getFollow().size() == 0) {
      addToFollow(f);
    }
  }

  public void compile(ProcessInstance P, AtomSet follow) throws ToolBusException {
    left.compile(P, follow);
    right.compile(P, follow);

    AtomSet rightFirst = right.getFirst();
    setFirst(left.getFirst().union(rightFirst));
    setFollow(follow);

    Vector atoms = left.getAtoms().getAtomsAsVector();
    for (int i = 0; i < atoms.size(); i++) {
      Atom at = (Atom) atoms.get(i);
      if(at.getFollow().size() != 0){
        at.addToFollow(rightFirst);
      }
    }
  }

  public AtomSet getAtoms() {
    return left.getAtoms().union(right.getAtoms());
  }

}
