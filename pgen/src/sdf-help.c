/*

    PGEN - the SDF2 parse table generator.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, 
                        The Netherlands. 

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
#include "ksdf2table.h"

/*{{{  int count_members_in_lhs(ATerm prod) */

/**
 * Count the number of members in the left hand side of a production rule.
 */   

int count_members_in_lhs(ATerm prod)
{
  ATerm symbol;
  ATermList args;
  ATerm attrs;
  int nr_of_members = 0;

  if (ATmatch(prod,"prod([<list>],<term>,<term>)",&args,&symbol,&attrs)) {
    nr_of_members = ATgetLength(args);
  }
  else {
    ATerror("expected prod, got %t\n", prod);
  }
  return nr_of_members;
}    

/*}}}  */
/*{{{  ATerm remove_modulename_attr(ATerm prod) */

/**
 * Removes the module name from the list of attributes.
 */

ATerm remove_modulename_attr(ATerm prod)
{
  ATerm mprod, mws, aprod, aws, iter, lws;
  ATermList margs, aargs, newaargs, newargs = ATempty;
  ATerm attrs, newattrs = NULL;
  ATerm attrlist, newattrlist, attr, aarg[4];
  ATermList tmplist, attrelems, newattrelems = ATempty;

  if(ATmatchTerm(prod,pattern_asfix_appl,&mprod,&mws,&margs)) {
    if(ATisEqual(mprod, af_prod_prod)) {
      newargs = ATgetPrefix(margs);
      attrs = ATgetLast(margs);

      if(AFTisEmptyAttrs(attrs)) {
         /*newattrs = attrs;*/
         newattrs = AFTmakeEmptyAttrs();
      }
      else if(AFTisAttrs(attrs)) {
        if(ATmatchTerm(attrs,pattern_asfix_appl,&aprod,&aws,&aargs)) {
          aarg[0] = ATelementAt(aargs,0);
          aarg[1] = ATelementAt(aargs,1);
          attrlist = AFTgetAttrsList(attrs);
          aarg[2] = ATelementAt(aargs,3);
          aarg[3] = ATelementAt(aargs,4);

          if(ATmatch(attrlist,"list(<term>,<term>,[<list>])",
		     &iter,&lws,&attrelems)) {

            while(!ATisEmpty(attrelems)) {
              attr = ATgetFirst(attrelems);
              attrelems = ATgetNext(attrelems);
           
              if(!AFTisModuleAttr(attr) &&
                 !AFTisWS(attr) &&
                 !AFTisSep(attr)) {
                if(!ATisEmpty(newattrelems)) {
                  tmplist = ATmakeList4(ATparse("w(\"\")"),
                                        ATparse("sep(\",\")"),
                                        ATparse("w(\"\")"),
                                        attr);
                  newattrelems = ATconcat(newattrelems,tmplist);
                }
                else
                  newattrelems = ATappend(newattrelems,attr);
              }
            }
            if(ATisEmpty(newattrelems)) {
              newattrs = AFTmakeEmptyAttrs();
            }
            else {
              newattrlist = ATmake("list(<term>,<term>,[<list>])",
				   iter,lws,newattrelems);
              newaargs = ATmakeList5(aarg[0],aarg[1],newattrlist,
                                     aarg[2],aarg[3]);
              newattrs = ATmakeTerm(pattern_asfix_appl,aprod,aws,newaargs);
            }
          }
        }
      }
    }
  }
  else
    ATerror("expected prod, got %t\n", prod);

  newargs = ATappend(newargs,newattrs);
  return ATmakeTerm(pattern_asfix_appl,mprod,mws,newargs);
}

/*}}}  */
