/*
  %% $Id$

  \section{Graph Structured Stack}
  \label{stack.c}

  \subsection{stack.h}

  \input{stack.htx}

  \subsection{stack.c}

*/

#include <stdlib.h>

#include "parse-table.h"
#include "stack.h"
#include "parser.h"

#include "mem-alloc.h"  /* Note: BOEHM GC caused weird things at one point */

stack *SG_NewStack(state s, stack *ancestor) {
  stack *res;

  if((res = SG_Malloc(sizeof(stack))) != NULL) {
    res->state = s;
    res->parent = ancestor;
    res->kid = NULL;
    res->links = NULL;
    res->rejected = ATfalse;
  }
  return res;
}

st_link *SG_NewLink(tree t, stack *st) {
  st_link *res;

  if((res = SG_Malloc(sizeof(st_link))) != NULL) {
    res->tree = t;
    res->stack = st;
    res->rejected = ATfalse;
  }
  return res;
}

st_links *SG_AddLinks(st_link *l, st_links *ls) {
  st_links *res;

  if((res = SG_Malloc(sizeof(st_links))) != NULL) {
    res->head = l;
    res->tail = ls;
  }
  return res;
}

stacks *SG_AddStacks(stack *st, stacks *sts) {
  stacks *res;

  if((res = SG_Malloc(sizeof(stacks *))) != NULL) {
    res->head = st;
    res->tail = sts;
  }
  return res;
}

st_link *SG_AddLink(stack *frm, stack *to, tree t)
{
  st_link *link;

  if((link = SG_NewLink(t, to)) != NULL) {
    frm->links = SG_AddLinks(link, frm->links);
  }
  return link;
}


ATbool SG_InStacks(stack *st1, stacks *sts)
{
  stack *st2;
  while(shift(st2, sts))
    if(st2 == st1) return ATtrue;
  return ATfalse;
}

/*
   Find a stack with a state |s| in a list of stacks.
*/
stack *SG_FindStack(state s, stacks *sts)
{
  for (; sts != NULL; sts = tail(sts))
    if(SG_ST_STATE(head(sts)) == s) return head(sts);
  return NULL;
}

/*
   Find a direct link from |st0| to |st1|
*/
st_link *SG_FindDirectLink(stack *st0, stack *st1)
{
  st_links *ls = NULL;

  for (ls = SG_ST_LINKS(st0); ls != NULL; ls = tail(ls))
    if(SG_LK_STACK(head(ls)) == st1) return head(ls);
  return NULL;
}


/*
  Mark link of a stack as rejected. (By setting its |has_conds| field
  to |ATtrue|. This is a hack to save space by not declaring another
  node for the representation of stacks!)
*/

void SG_MarkStackRejected(stack *st, st_link *l)
{
  SG_LK_REJECTED(l) = ATtrue;
}

void SG_MarkLinkRejected(stack *st, st_link *l)
{
  SG_LK_REJECTED(l) = ATtrue;
/*
  ATfprintf(stderr, "Link state %d ==> state %d rejected\n",
           SG_ST_STATE(st), SG_ST_STATE(SG_LK_STACK(l)));
*/
}

void SG_MarkLinkRejected2(stack *st, st_link *l)
{
  ATfprintf(stderr, "Warning: link state %d ==> state %d rejected in "
                   "presence of other links\n",
           SG_ST_STATE(st), SG_ST_STATE(SG_LK_STACK(l)));
  SG_MarkLinkRejected(st, l);
}


#ifdef DEBUG
/*
    Is one of the stacks links rejected?
 */
ATbool SG_SomeRejected(stack *st)
{
  register st_links *ls = LINKS(st);
  stack *kid;
  st_link *l;
  int count = 0;

  for (; ls != NULL; ls = tail(ls)) {
    l = head(ls);
    if(SG_LK_REJECTED(l)) {
//       ATfprintf(stderr, "A stack link with state %d rejected\n", STATE(st));
       return ATtrue;
    }
    kid = SG_LK_STACK(l);
    count++;
    if (SG_SomeRejected(kid))
      return ATtrue;
  }
  return ATfalse;
}
#endif /* DEBUG */

/*
  A stack is rejected if all its links are.
*/
ATbool SG_Rejected(stack *st)
{
  register st_links *ls = SG_ST_LINKS(st);

  if (!ls) return ATfalse;
  for (; ls != NULL; ls = tail(ls))
    if(SG_LK_REJECTED(head(ls))) {
//      ATfprintf(stderr, "A stack link with state %d unrejected\n", STATE(st));
      return ATtrue;
    }
  return ATfalse;
}
