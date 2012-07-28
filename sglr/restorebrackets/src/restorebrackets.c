/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'restorebrackets' (prefix='')
 */

#include "restorebrackets.h"

#define NR_SIG_ENTRIES	3

static char *signature[NR_SIG_ENTRIES] = {
  "rec-terminate(<restorebrackets>,<term>)",
  "rec-eval(<restorebrackets>,restore-brackets(<term>,<term>))",
  "rec-eval(<restorebrackets>,add-brackets(<term>,<term>))",
};

/* Event handler for tool 'restorebrackets' */
ATerm restorebrackets_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(restore-brackets(<term>,<term>))", &t0, &t1)) {
    return restore_brackets(conn, t0, t1);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(add-brackets(<term>,<term>))", &t0, &t1)) {
    return add_brackets(conn, t0, t1);
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = restorebrackets_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool restorebrackets cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'restorebrackets' */
ATerm restorebrackets_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}
