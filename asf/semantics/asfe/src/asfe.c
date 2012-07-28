/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'asfe' (prefix='')
 */

#include "asfe.h"

#define NR_SIG_ENTRIES	3

static char *signature[NR_SIG_ENTRIES] = {
  "rec-terminate(<asfe>,<term>)",
  "rec-eval(<asfe>,interpret(<str>,<term>,<term>,<term>,<term>))",
  "rec-eval(<asfe>,run-tests(<term>,<term>,<term>,<term>))",
};

/* Event handler for tool 'asfe' */
ATerm asfe_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0, t1, t2, t3;

  if(ATmatch(term, "rec-eval(interpret(<str>,<term>,<term>,<term>,<term>))", &s0, &t0, &t1, &t2, &t3)) {
    return interpret(conn, s0, t0, t1, t2, t3);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(run-tests(<term>,<term>,<term>,<term>))", &t0, &t1, &t2, &t3)) {
    return run_tests(conn, t0, t1, t2, t3);
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = asfe_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool asfe cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'asfe' */
ATerm asfe_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}
