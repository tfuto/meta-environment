#line 5 "preparation.h.nw"
#ifndef PREPARATION_H
#define PREPARATION_H

#include <aterm.h>

#line 27 "preparation.h.nw"
typedef struct equation_entry
{
  struct equation_entry *hnext;
  unsigned hashnr;
  aterm *top_ofs;
  aterm *first_ofs;
  aterm *equation;
} equation_entry;
#line 41 "preparation.h.nw"
typedef struct equation_table
{
  struct equation_table *next;
  aterm *module;
  unsigned size;
  equation_entry **table;
} equation_table;

#line 58 "preparation.h.nw"
aterm *RWprepareTerm(arena *ar, aterm *t);
#line 67 "preparation.h.nw"
aterm_list *RWprepareEqs(arena *ar, aterm_list *eqs);
#line 76 "preparation.h.nw"
aterm *RWrestoreTerm(arena *ar, aterm *t);

#line 17 "preparation.h.nw"
equation_entry *find_equation(equation_entry *prev, aterm *top_ofs, aterm *first_ofs);
void select_equations(aterm *module);
void enter_equations(aterm *module, aterm_list *eqs);

#endif
