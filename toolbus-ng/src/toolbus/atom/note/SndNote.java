/*
 * Created on Jun 25, 2005 @author paulk
 */
package toolbus.atom.note;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import toolbus.AtomSet;
import toolbus.TBTermFactory;
import toolbus.atom.Atom;
import toolbus.atom.Ref;
import toolbus.exceptions.ToolBusException;
import toolbus.parsercup.PositionInformation;
import toolbus.process.ProcessExpression;
import toolbus.process.ProcessInstance;
import aterm.ATerm;

public class SndNote extends Atom{
	private final Ref note;
	
	private List<ProcessInstance> notePartners = new ArrayList<ProcessInstance>();
	
	public SndNote(ATerm note, TBTermFactory tbfactory, PositionInformation posInfo){
		super(tbfactory, posInfo);
		this.note = new Ref(note);
		setAtomArgs(this.note);
	}
	
	public ProcessExpression copy(){
		Atom a = new SndNote(note.value, tbfactory, getPosInfo());
		a.copyAtomAttributes(this);
		return a;
	}
	
	void addPartnerIfMatch(Subscribe subs){
		ATerm subscribeValue = tbfactory.fullSubstitute(subs.getMatchPattern(), subs.getEnv());
		if(subscribeValue == null){
			//LoggerFactory.log(this.getProcess().getProcessName(), "Illegal subscription pattern: "+subs.getMatchPattern()+".", IToolBusLoggerConstants.NOTES);
			return;
		}
		
		if(tbfactory.mightMatch(subscribeValue, note.value)){
			ProcessInstance pi = subs.getProcess();
			if(!notePartners.contains(pi)) notePartners.add(pi);
		}
	}
	
	public void addPartners(AtomSet atoms){
		Iterator<Atom> atomSetIterator = atoms.iterator();
		
		while(atomSetIterator.hasNext()){
			Atom b = atomSetIterator.next();
			
			if(b instanceof Subscribe){
				Subscribe subs = (Subscribe) b;
				addPartnerIfMatch(subs);
			}
		}
	}
	
	public ProcessInstance[] getNotePartners(){
		ProcessInstance[] partners = new ProcessInstance[notePartners.size()];
		return notePartners.toArray(partners);
	}
	
	public boolean execute() throws ToolBusException{
		if(isEnabled()){
			ATerm theNote = tbfactory.fullSubstitute(note.value, getEnv());
			if(theNote == null) throw new ToolBusException("Illegal note pattern: "+theNote+".");
			
			Iterator<ProcessInstance> notePartnersIterator = notePartners.iterator();
			while(notePartnersIterator.hasNext()){
				ProcessInstance pi = notePartnersIterator.next();
				
				pi.putNoteInQueue(theNote);
			}
			return true;
		}
		return false;
	}
	
	public ProcessInstance[] debugExecute() throws ToolBusException{
		if(isEnabled()){
			ATerm theNote = tbfactory.fullSubstitute(note.value, getEnv());
			if(theNote == null) throw new ToolBusException("Illegal note pattern: "+theNote+".");
			
			List<ProcessInstance> subscribedPartners = new ArrayList<ProcessInstance>();
			Iterator<ProcessInstance> notePartnersIterator = notePartners.iterator();
			while(notePartnersIterator.hasNext()){
				ProcessInstance pi = notePartnersIterator.next();
				
				pi.putNoteInQueue(theNote);
				subscribedPartners.add(pi);
			}
			
			ProcessInstance[] partners = new ProcessInstance[subscribedPartners.size()];
			return subscribedPartners.toArray(partners);
		}
		return null;
	}
}
