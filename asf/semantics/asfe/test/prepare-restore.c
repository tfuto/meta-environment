/*

    Meta-Environment - An environment for language prototyping.
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

    $Id$
*/
/* 
 * This unit test tests the functions RWprepareTerm and RWrestoreTerm.
 *
 * Applying RWrestoreTerm after RWprepareTerm should be the identity if
 * we want to keep the whitespace. 
 *
 * The term is read from stdin, then filtered through the functions, ATisEqual
 * determines their equality. Also the term is dumped to stdout again.
 */
#include <stdio.h>
#include <stdlib.h>
#include "preparation.h"
#include "asfix_utils.h"
#include <PT.h>
#include <ASF.h>

int
main(int argc, char *argv[])
{
  ATbool usage = ATfalse;
  ATerm bottomOfStack;
  ATerm in, out;
  PT_Tree term, prepared, restored;

  ATinit(argc, argv, &bottomOfStack);
  PT_initPTApi();
  ASF_initASFApi();

  in = ATreadFromFile(stdin);

  in = ATremoveAllAnnotations(in);

  term = PT_getParseTreeTree(PT_makeParseTreeFromTerm(in));

  prepared = RWprepareTerm(term);

  restored = RWrestoreTerm(prepared);

  out = PT_makeTermFromParseTree(PT_setParseTreeTree(
          PT_makeParseTreeFromTerm(in), restored));

  ATprintf("%t", out);

  if (!ATisEqual(in, out)) {
    ATerror("Error: Output term is different from input term.\n");
  }

  return 0;
}
