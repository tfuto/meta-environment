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
// $Id$
package toolbus.aterm;
import toolbus.util.*;
import java.io.*;

public class ATermAppl extends ATerm
{
  ATermApplImpl appl = null;


  //{ protected ATermAppl(ATermApplImpl ap)

  protected ATermAppl(ATermApplImpl ap)
  {
    super(ap.getWorld());
    intern(ap);
  }

  //}
  //{ protected ATermAppl(World world)

  /**
    * Create a new ATermAppl object that is initially empty.
    */

  protected ATermAppl(World world)
  {
    super(world);
  }

  //}
  //{ public ATermAppl(World world, String fun)

  /**
   *
   */ 

  public ATermAppl(World world, String fun)
  {
    this(world, fun, new ATerms(world));
  }
  //}  
    public ATermAppl(String fun) {
	this(the_world,fun);
    }

  /** Construct a function symbol without arguments. The symbol is quoted.
    */
  public ATermAppl(World world, String fun, boolean isquoted) {
    this(world, fun, new ATerms(world), isquoted);
  }

  //{ protected void intern(ATermApplImpl ap)

  /**
    * Update this reference to point to a term equal to {\tt ap}.
    */

  protected void intern(ATermApplImpl ap)
  {
    if(appl != null)
      appl.decreaseRef();
    appl = (ATermApplImpl)world.intern(ap);
    appl.increaseRef();
  }

  //}
  //{ protected ATermImpl getATermImpl()

  protected ATermImpl getATermImpl()
  {
    return appl;
  }

  //}
  //{ protected ATermApplImpl getATermApplImpl()

  protected ATermApplImpl getATermApplImpl()
  {
    return appl;
  }

  //}

  //{ public ATermAppl(World world, String fun, ATerms args)

    public ATermAppl(World world, String fun, ATerms args)
    {
	super(world);
	intern(new ATermApplImpl(world, fun, args.getATermsImpl()));
    }
    
    public ATermAppl(String fun, ATerms args) {
	this(the_world, fun, args);
    }

  //}
    /** Construct an ATermAppl of which the fun can be a quoted string
     */
    public ATermAppl(World world, String fun, ATerms args, boolean isquoted) {
	super(world);
	intern(new ATermApplImpl(world, fun, args.getATermsImpl(), isquoted));
    }

  //{ public ATermAppl(World world, String fun, ATerms args, ATerm anno)

  /**
    * Construct a new ATermAppl object which is annotated.
    */

  public ATermAppl(World world, String fun, ATerms args, ATerm anno)
  {
    super(world);
    intern(new ATermApplImpl(world, fun, args.getATermsImpl(), 
			anno == null ? null : anno.getATermImpl()));
  }

  //}
  //{ public ATermAppl(World world, String fun, ATerms args, ATerm anno, iq)

  public ATermAppl(World world, String fun, ATerms args, ATerm anno, 
		   boolean isquoted)
  {
    super(world);
    intern(new ATermApplImpl(world, fun, args.getATermsImpl(),
			 anno == null ? null : anno.getATermImpl(), isquoted));
  }

  //}
  //{ public void setAnno(ATerm a)

  /**
    * Change the annotation of a term.
    */

  public void setAnno(ATerm a)
  {
    intern(new ATermApplImpl(world, appl.getFun(), appl.getArgs(), 
			     a == null ? null : a.getATermImpl()));
  }

  //}
  //{ protected void finalize()

  protected void finalize()
    throws Throwable
  {
    appl.decreaseRef();
  }

  //}

  //{ public String getFun()

  public String getFun()
  {
    return appl.getFun();
  }

  //}
  //{ public ATerms getArgs()

  public ATerms getArgs()
  {
    return new ATerms(appl.getArgs());
  }

  //}
  //{ public void setFun(String fun)

  public void setFun(String fun)
  {
    intern(new ATermApplImpl(world, fun, appl.getArgs()));
  }

  //}
  //{ public void setFun(String fun, boolean isquoted)

  public void setFun(String fun, boolean isquoted)
  {
    intern(new ATermApplImpl(world, fun, appl.getArgs(), appl.getAnno(), isquoted));
  }

  //}
  //{ public void setArgs(ATerms args)

  public void setArgs(ATerms args)
  {
    intern(new ATermApplImpl(world, appl.getFun(), args.getATermsImpl(), 
			     this.getAnno() == null ? null : 
			     this.getAnno().getATermImpl(), appl.isQuoted()));
  }

  //}
    /** Is the function symbol of this application quoted?
     */
    public boolean isQuoted() {
	return appl.isQuoted();
    }
}
