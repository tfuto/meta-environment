/*

    ToolBus -- The ToolBus Application Architecture
    Copyright (C) 1998-2000  Stichting Mathematisch Centrum, Amsterdam, 
                             The  Netherlands.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

package toolbus.aterm;
import toolbus.util.Writer;
import toolbus.util.PrintWriter;
import toolbus.util.*;
import java.io.*;

abstract public class ATerm implements Cloneable, Serializable
{
  abstract protected ATermImpl getATermImpl();
  public abstract void setAnno(ATerm anno);

  public static final int ATERMS        = ATermImpl.ATERMS;
  public static final int APPL          = ATermImpl.APPL;
  public static final int LIST          = ATermImpl.LIST;
  public static final int INT           = ATermImpl.INT;
  public static final int REAL          = ATermImpl.REAL;
  public static final int PLACEHOLDER   = ATermImpl.PLACEHOLDER;
  
  static public World the_world = new World(131071);
  protected World world;
 
  //{ public ATerm()

  /**
    * Construct a new ATerm in the default world.
    */

  public ATerm()
  {
    this(the_world);
  }

  //}
  //{ public ATerm(World world)

  /**
    * Create a new ATerm object.
    */

  public ATerm(World world)
  {
    this.world = world;
  }

  //}
  //{ public World getWorld()

  /**
    * Retrieve the world this ATerm lives in.
    */

  public World getWorld()
  {
    return world;
  }

  //}
  //{ public synchronized Object clone()

  /**
    * Clone an ATerm.
    */

  public synchronized Object clone()
  {
    ATerm copy = null;
    try {
      copy = (ATerm)super.clone();
      copy.world = world;
      copy.getATermImpl().increaseRef();
    } catch (CloneNotSupportedException e) {
      throw new RuntimeException("internal error.");
    }
    return copy;
  }

  //}
  //{ public boolean equals(Object obj)

  /**
    * Two ATerm references are considered equal when they
    * refer to the same term.
    */

  public boolean equals(Object obj)
  {
    // <PO> we need a check here if both terms exist in the same world.
    if(obj instanceof ATerm)
      return getATermImpl() == ((ATerm)obj).getATermImpl();
    return false;
  }

  //}
  //{ public int getType()

  public int getType()
  {
    return getATermImpl().getType();
  }

  //}
  //{ public ATerm getAnno()

  /**
    * Retrieve the annotation of a term.
    * @deprecated Use getAnnotation instead
    */

  public ATerm getAnno()
  {
    if(getATermImpl().getAnno() == null)
      return null;

    switch(getATermImpl().getAnno().getType()) {
      case ATermImpl.APPL:   return new ATermAppl((ATermApplImpl)getATermImpl().getAnno());
      case ATermImpl.ATERMS: return new ATerms((ATermsImpl)getATermImpl().getAnno());
      case ATermImpl.LIST:   return new ATermList((ATermListImpl)getATermImpl().getAnno());
      case ATermImpl.INT:    return new ATermInt((ATermIntImpl)getATermImpl().getAnno());
      case ATermImpl.REAL:   return new ATermReal((ATermRealImpl)getATermImpl().getAnno());
      case ATermImpl.PLACEHOLDER: 
	return new ATermPlaceholder((ATermPlaceholderImpl)getATermImpl().getAnno());
    }
    throw new IllegalArgumentException("illegal term type: " + getType());
  }

  //}
  //{ public int size()

  /**
    * Determine the size (number of nodes) of a term.
    */

  public int size()
  {
    return getATermImpl().size();
  }

  //}
  //{ public void write(OutputStream o)

  /**
    * Write a term to an output stream..
    */

  public void write(OutputStream o)
    throws java.io.IOException
  { 
    getATermImpl().write(o);
  }

  //}
  //{ public void print(OutputStream o)

  /**
    * Pretty-print a term to an OutputStream.
    */

  public void print(OutputStream o)
  {
    print(new PrintWriter(o));
  }

  //}
  //{ public void println(OutputStream o)

  /**
    * Pretty-print a term to an OutputStream, followed by a newline.
    */

  public void println(OutputStream o)
  {
    println(new PrintWriter(o));
  }

  //}
  //{ public void print(PrintWriter o)

  /**
    * Pretty-print a term to a PrintWriter stream.
    */

  public void print(PrintWriter w)
  {
    getATermImpl().print(w);
    w.flush();
  }

  //}
  //{ public void println(PrintWriter o)

  /**
    * Pretty-print a term to a PrintWriter stream, followed by a newline.
    */

  public void println(PrintWriter w)
  { 
    getATermImpl().print(w);
    w.println("");
    w.flush();
  }

  //}
  //{ public void print(Writer o)

  public void print(Writer w)
  { 
    getATermImpl().print(w);
    try { w.flush(); } catch (IOException e) { }
  }

  //}
  //{ public void println(Writer o)

  public void println(Writer w)
  { 
    getATermImpl().print(w);
    try {
      w.write((int)'\n');
      w.flush();
    } catch (IOException e) { }
  }

  //}
  //{ public int printSize()

  /**
    * Determine the size of a term when printed.
    */

  public int printSize()
  {
    return getATermImpl().printSize();
  }

  //}
  //{ public String toString()

  public String toString()
  {
    return getATermImpl().toString();
  }

  //}
  //{ public int hashCode()

  public int hashCode()
  {
    return getATermImpl().hashCode();
  }

  //}
	//{ public void setAnnotation(String label, ATerm anno) 

    /** Sets a particular annotation on this ATerm.
				@param label The label of the annotation
				@param anno The actual annotation
    */
	public void setAnnotation(String label, ATerm anno) 
	{
		//	throw new Exception("Not implemented: Aux.setAnnotation");
		ATerm l = null;
		try {
	    l = ATerm.the_world.makeSimple(label);
		}
		catch (ParseError e) {
	    System.err.println(e);
	    System.exit(2);
		}
		ATerms annos = (ATerms) this.getAnno();
		if (annos == null) annos = new ATerms(world);
		this.setAnno(annos.dictPut(l,anno));
	}	
	
	/** Get the annotation with a particular label
			@param label The label which identifies the annotation
			@return The annotation associated with the label
	*/
	public ATerm getAnnotation(String label) {
		//	throw new Exception("Not implemented: Aux.getAnnotation");
		ATerm l = null;
		try {
	    l = ATerm.the_world.makeSimple(label);
		}
		catch (ParseError e) {
	    System.err.println(e);
	    System.exit(2);
		}	ATerms annos = (ATerms) this.getAnno();
		return (annos == null ) ? null : annos.dictGet(l);
	}

	//}	
}

