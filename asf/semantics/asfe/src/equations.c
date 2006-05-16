/*{{{  includes */

#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <strings.h>
#include <string.h>
#include <aterm2.h>
#include <deprecated.h>
#include "equations.h"
#include "values.h"
#include "evaluator.h"
#include "errors.h"

#include <MEPT.h>
#include <ASFME-utils.h>
#include <asc-ambiguity.h>

/*}}}  */
/*{{{  defines */

/* These constants are dependent on Asfix2ME!!! */
#define DEPTH_OF_CONDITIONS_AND_EQUATION       2
#define DEPTH_OF_CONDITION_SIDES_IN_CONDITIONS 4
#define DEPTH_OF_EQUATION_SIDES_IN_EQUATION    2

/*}}}  */
/*{{{  variables */

equation_entry *currentRule = NULL;

equation_table *equations = NULL;

ATerm posinfo;
/*}}}  */

/*{{{  local function declarations */


/*}}}  */

/*{{{  void print_short_equation(int stack, const char *msg, equation_entry *entry) */

void print_short_equation(int stack, const char *msg, equation_entry *entry)
{
  if (runVerbose) {
    int i;
    for (i = 0; i < stack % 20; i++) {
      ATwarning(" ");
    }
    ATwarning("%s\t: %s ", msg,
	      PT_yieldTree((PT_Tree)entry->tag));
    ATwarning("%s = ...\n",
	      PT_yieldTree((PT_Tree)entry->lhs));
  }
}

/*}}}  */
/*{{{  equation_table *create_equation_table(int size) */

/* Allocate memory for an equation table.
*/

equation_table *create_equation_table(int size)
{
  int i;
  equation_table *table = (equation_table *) malloc(sizeof(equation_table));

  if (!table) {
    ATerror("out of memory in create_equation_table\n");
  }
  table->size = size;
  table->table = (equation_entry **) malloc(sizeof(equation_entry *) * size);
  if (!table->table) {
    ATerror("out of memory in create_equation_table\n");
  }

  for (i = 0; i < size; i++) {
    table->table[i] = NULL;
  }

  return table;
}

/*}}}  */
/*{{{  static void flush_equations(equation_table * table) */

static void flush_equations(equation_table * table)
{
  int i;
  equation_entry *old, *entry;

  for (i = 0; i < table->size; i++) {
    entry = table->table[i];
    while (entry) {
      old = entry;
      entry = entry->hnext;
      ATunprotect((ATerm*)&old->equation);
      ATunprotect((ATerm*)&old->top_ofs);
      ATunprotect((ATerm*)&old->first_ofs);
      ATunprotect((ATerm*)&old->tag);
      ATunprotect((ATerm*)&old->lhs);
      ATunprotect((ATerm*)&old->rhs);
      ATunprotect((ATerm*)&old->conds);
      free(old);
    }
    table->table[i] = NULL;
  }
}

/*}}}  */
/*{{{  static unsigned hash_function(table, top_ofs, first_ofs) */

static unsigned hash_function(equation_table *table, PT_Production top_ofs,
			      PT_Production first_ofs)
{
  return (((int) top_ofs >> 2) * 3007 + ((int) first_ofs >> 2)) % table->size;
}

/*}}}  */

/*{{{  ATerm getPosInfoEquals(ASF_ASFEquation equ) */

ATerm getPosInfoEquals(ASF_ASFEquation equ)
{
  PT_Tree tree = PT_TreeFromTerm(ASF_ASFEquationToTerm(equ));
  PT_Tree equals = PT_getArgsArgumentAt(PT_getTreeArgs(tree), 2);
  return ATgetAnnotation(PT_TreeToTerm(equals), posinfo);
}

/*}}}  */

/*{{{  static int moreSpecificArg(PT_Tree tree1, PT_Tree tree2) */

static int compareSpecificityArgs(PT_Args lhs1args, PT_Args lhs2args);
static int compareSpecificityListArgs(PT_Args lhs1args, 
				      PT_Args lhs2args);

/* The specificity is expressed in an integer value:
 * -1: tree1 is less specific than tree2
 *  0: tree1 is or as specific as tree2, e.g. tree1 == tree2
 *  1: tree1 is more specific than tree2
 */
static int compareSpecificityArg(PT_Tree tree1, PT_Tree tree2)
{
  if (PT_isEqualTree(tree1, tree2) ||
      (PT_isTreeVar(tree1) && PT_isTreeVar(tree2))) {
    return 0;
  }
  else if (PT_isTreeVar(tree1) && !PT_isTreeVar(tree2)) {
    return -1;
  }
  else if (!PT_isTreeVar(tree1) && PT_isTreeVar(tree2)) {
    return 1;
  }
  else if (PT_isTreeAppl(tree1) && PT_isTreeAppl(tree2)) {
    PT_Production prod1 = PT_getTreeProd(tree1);
    PT_Production prod2 = PT_getTreeProd(tree2);

    if (PT_isEqualProduction(prod1, prod2)) {
      if (PT_isProductionDefault(prod1)) {
        return compareSpecificityArgs(PT_getTreeArgs(tree1),
                                      PT_getTreeArgs(tree2));
      }
      else {
        return compareSpecificityListArgs(PT_getTreeArgs(tree1),
                                          PT_getTreeArgs(tree2));
      }
    }
    else {
      return 0;
    }
  }
  else {
    return 0;
  }
}

/*}}}  */
/*{{{  static int compareSpecificityArgs(PT_Args lhs1args, ...) */

static int compareSpecificityArgs(PT_Args lhs1args, PT_Args lhs2args)
{
  int specificity;

  if (PT_hasArgsHead(lhs1args) && PT_hasArgsHead(lhs2args)) {
    PT_Tree head1 = PT_getArgsHead(lhs1args);
    PT_Tree head2 = PT_getArgsHead(lhs2args);

    specificity = compareSpecificityArg(head1, head2);
  
    if (specificity != 0) {
      return specificity;
    }
    else {
      return compareSpecificityArgs(PT_getArgsTail(lhs1args),
                                    PT_getArgsTail(lhs2args));
    }
  }
  else if (!PT_hasArgsHead(lhs1args) && PT_hasArgsHead(lhs2args)) {
    PT_Tree head2 = PT_getArgsHead(lhs2args);
    if (PT_isTreeVarList(head2)) {
      return 1;
    } 
    else {
      return 0;
    }
  }
  else if (PT_hasArgsHead(lhs1args) && !PT_hasArgsHead(lhs2args)) {
    PT_Tree head1 = PT_getArgsHead(lhs1args);
    if (PT_isTreeVarList(head1)) {
      return -1;
    } 
    else {
      return 0;
    }
  }
  return 0;
}

/*}}}  */
/*{{{  static int compareSpecificityListArgs(PT_Args lhs1args, ...) */

static int compareSpecificityListArgs(PT_Args lhs1args, 
				      PT_Args lhs2args)
{
  int specificity;

  if (PT_getArgsLength(lhs1args) == 1 &&
      PT_getArgsLength(lhs2args) > 1) {
    PT_Tree head1 = PT_getArgsHead(lhs1args);
    if (PT_isTreeVarList(head1)) {
      return -1;
    }
    else {
      return 0;
    }
  }
  if (PT_getArgsLength(lhs1args) > 1 &&
      PT_getArgsLength(lhs2args) == 1) {
    PT_Tree head2 = PT_getArgsHead(lhs2args);
    if (PT_isTreeVarList(head2)) {
      return 1;
    }
    else {
      return 0;
    }
  }

  if (PT_hasArgsHead(lhs1args) && PT_hasArgsHead(lhs2args)) {
    PT_Tree head1 = PT_getArgsHead(lhs1args);
    PT_Tree head2 = PT_getArgsHead(lhs2args);

    specificity = compareSpecificityArg(head1, head2);
  
    if (specificity != 0) {
      return specificity;
    }
    else {
      return compareSpecificityListArgs(PT_getArgsTail(lhs1args),
                                        PT_getArgsTail(lhs2args));
    }
  }
  else if (!PT_hasArgsHead(lhs1args) && PT_hasArgsHead(lhs2args)) {
    PT_Tree head2 = PT_getArgsHead(lhs2args);
    if (PT_isTreeVarList(head2)) {
      return 1;
    } 
    else {
      return 0;
    }
  }
  else if (PT_hasArgsHead(lhs1args) && !PT_hasArgsHead(lhs2args)) {
    PT_Tree head1 = PT_getArgsHead(lhs1args);
    if (PT_isTreeVarList(head1)) {
      return -1;
    } 
    else {
      return 0;
    }
  }
  return 0;
}

/*}}}  */
/*{{{  static int compareSpecificityLhs(PT_Tree lhs1, PT_Tree lhs2) */

static int compareSpecificityLhs(PT_Tree lhs1, PT_Tree lhs2)
{
  PT_Args lhs1args = PT_getTreeArgs(lhs1);
  PT_Args lhs2args = PT_getTreeArgs(lhs2);
  return compareSpecificityArgs(lhs1args, lhs2args);
}

/*}}}  */
/*{{{  void enter_equation(equation_table * table, ASF_ASFConditionalEquation equation) */

/* Enter an equation in an equation table.
*/

void enter_equation(equation_table * table, ASF_ASFConditionalEquation equation)
{
  equation_entry *entry;

  ASF_ASFEquation equ;
  PT_Tree lhs = NULL, rhs = NULL;
  PT_Production top_ofs, first_ofs;
  ASF_ASFTag tag = NULL; 
  PT_Args lhsargs;
  ASF_ASFConditionList conds; 
  ASF_ASFConditions conditions;
  unsigned hnr;
  equation_entry *cur;

  if (ASF_isASFConditionalEquationImplies(equation) 
      || ASF_isASFConditionalEquationWhen(equation)) {
    conditions = ASF_getASFConditionalEquationASFConditions(equation);
    conds = ASF_getASFConditionsList(conditions);
  }
  else {
    conds = (ASF_ASFConditionList) NULL;
  }

  tag = ASF_getASFConditionalEquationASFTag(equation);
  equ = ASF_getASFConditionalEquationASFEquation(equation);

  /* this is where we switch API's from ASF_ to PT_ for the user-defined
   * term syntax
   */

  lhs = ASFtoPT(ASF_getASFEquationLhs(equ));
  rhs = ASFtoPT(ASF_getASFEquationRhs(equ));

  lhsargs = PT_getTreeArgs(lhs);
  top_ofs = PT_getTreeProd(lhs);


  /* find first appl or var argument of the outermost function symbol */ 
  while (PT_hasArgsHead(lhsargs) && 
         (PT_isTreeLit(PT_getArgsHead(lhsargs)) || 
          PT_isTreeLayout(PT_getArgsHead(lhsargs)))) {
    lhsargs = PT_getArgsTail(lhsargs);
  }

  /* if it is a variable or we have a default equation */
  if (PT_isArgsEmpty(lhsargs) || ASF_isTagDefault(tag)) { 
    first_ofs = (PT_Production) NULL;
  }
  else {
    PT_Tree firstArg = PT_getArgsHead(lhsargs);

    if (ASC_isAmbiguityConstructor(firstArg)) {
      first_ofs = (PT_Production) NULL;
    }
    else if (PT_isTreeVar(firstArg)) {
      first_ofs = (PT_Production) NULL;
    }
    else {
      first_ofs = PT_getTreeProd(firstArg);
    }
  }

  hnr = hash_function(table, top_ofs, first_ofs);

  /* now fill in the entry */
  entry = (equation_entry *) malloc(sizeof(equation_entry));
  if (!entry) {
    ATerror("out of memory in enter_equation");
  }

  entry->hashnr = hnr;

  entry->top_ofs = top_ofs;
  ATprotect((ATerm*)&entry->top_ofs);

  entry->first_ofs = first_ofs;
  ATprotect((ATerm*)&entry->first_ofs);

  entry->equation = equation;
  ATprotect((ATerm*)&entry->equation);

  entry->tag = tag;
  ATprotect((ATerm*)&entry->tag);

  entry->lhs = lhs;
  ATprotect((ATerm*)&entry->lhs);

  entry->rhs = rhs;
  ATprotect((ATerm*)&entry->rhs);

  entry->posinfo_equals = getPosInfoEquals(equ);
  ATprotect((ATerm *)&entry->posinfo_equals);

  entry->conds = conds;
  ATprotect((ATerm *) (&entry->conds));

  cur = table->table[hnr];
  if (cur) {
    if (compareSpecificityLhs(entry->lhs, cur->lhs) >= 0 &&
        (!ASF_isTagDefault(tag) ||
         (ASF_isTagDefault(tag) && 
          ASF_isTagDefault(cur->tag)))) {
      entry->hnext = cur;
      table->table[hnr] = entry;
    } 
    else {
      if (ASF_isTagDefault(tag)) {
        ATbool entered = ATfalse;

        /* Skip the non-default rules */
        while (cur->hnext && 
               !ASF_isTagDefault(cur->tag)) {
          cur = cur->hnext;
        }

        while (cur->hnext) {
          if (compareSpecificityLhs(entry->lhs, 
                                    cur->hnext->lhs) >= 0) {
            entry->hnext = cur->hnext;
            cur->hnext = entry;
            entered = ATtrue;
            break;
          }
          cur = cur->hnext;
        }

        if (!entered) {
          entry->hnext = cur->hnext;
          cur->hnext = entry;
        }
      }
      else {
        ATbool entered = ATfalse;

        while (cur->hnext && !ASF_isTagDefault(cur->tag)) {
          if (compareSpecificityLhs(entry->lhs, 
                                    cur->hnext->lhs) >= 0) {
            entry->hnext = cur->hnext;
            cur->hnext = entry;
            entered = ATtrue;
            break;
          }
          cur = cur->hnext;
        }
        if (!entered) {
/* We are still at the first entry and the first entry is a default rule!*/
          if (table->table[hnr] == cur && ASF_isTagDefault(cur->tag)) {
            table->table[hnr] = entry;
            entry->hnext = cur;
          }
          else {
            entry->hnext = cur->hnext;
            cur->hnext = entry;
          }
        }
      }
    }
  }
  else {
    entry->hnext = NULL;
    table->table[hnr] = entry;
  }
  print_short_equation(0, "registered", entry);
}

/*}}}  */
/*{{{  equation_entry *find_equation(from, top_ofs, first_ofs) */

equation_entry *find_equation(equation_entry * from, PT_Production top_ofs, 
			      PT_Production first_ofs)
{
  if (equations->size == 0) {
    return NULL;
  }
  if (from) {
    from = from->hnext;
  }
  else {
    int hnr = hash_function(equations, top_ofs, first_ofs);
    from = equations->table[hnr];
  }

  if (first_ofs != NULL) {
    while (from && (!PT_isEqualProduction(from->top_ofs, top_ofs))) {
      from = from->hnext;
    }
  }
  else {
    while (from && (!PT_isEqualProduction(from->top_ofs, top_ofs) ||
		    !PT_isEqualProduction(from->first_ofs, first_ofs))) {
      from = from->hnext;
    }
  }

  return from;
}

/*}}}  */
/*{{{  void enter_equations(ASF_ASFConditionalEquationList eqsList) */

/*
  The equations are ``sorted'' by outermost function symbols.
  This is performed by the function ``sort_and_filter_on_ofs''.
  This function adds the equations with the same ofs in the
  left hand side of an equation to the database, and returns
  the original list of equations minus the equations which
  where stored.
*/


void enter_equations(ASF_ASFConditionalEquationList eqsList)
{
  equations = create_equation_table(ATgetLength((ATermList) eqsList)* 2);

  if (runVerbose) {
    ATwarning("reading in equations:\n");
  }

  while (ASF_hasASFConditionalEquationListHead(eqsList)) {
    enter_equation(equations, ASF_getASFConditionalEquationListHead(eqsList));

    if (ASF_hasASFConditionalEquationListTail(eqsList)) {
      eqsList = ASF_getASFConditionalEquationListTail(eqsList);
    }
    else {
      break;
    }
  }
}

/*}}}  */
/*{{{  void destroy_equation_table(equation_table * table) */


/*
 * Free all memory associated with an equation table.
 * */


void destroy_equation_table()
{
  flush_equations(equations);
  free(equations->table);
  free(equations);
}

/*}}}  */
