/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'toolEval' (prefix='')
 */

#include "toolEval.tif.h"

#define NR_SIG_ENTRIES	3

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<toolEval>,rewrite(<term>))",
  "rec-eval(<toolEval>,apply-rewrite(<str>,<str>,<list>))",
  "rec-terminate(<toolEval>,<term>)",
};

/* Event handler for tool 'toolEval' */
ATerm toolEval_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1;
  ATerm t0;

  if(ATmatch(term, "rec-eval(rewrite(<term>))", &t0)) {
    return rewrite(conn, t0);
  }
  if(ATmatch(term, "rec-eval(apply-rewrite(<str>,<str>,<term>))", &s0, &s1, &t0)) {
    return apply_rewrite(conn, s0, s1, t0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = toolEval_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool toolEval cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'toolEval' */
ATerm toolEval_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

