/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'asfchecker' (prefix='')
 * Implementation generated at Wed Oct 16 11:28:55 2002
 */

#include "asfchecker.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<asfchecker>,check-asf(<term>))",
  "rec-terminate(<asfchecker>,<term>)",
};

/* Event handler for tool 'asfchecker' */
ATerm asfchecker_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  ATerm t0;

  if(ATmatch(term, "rec-eval(check-asf(<term>))", &t0)) {
    return check_asf(conn, t0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = asfchecker_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool asfchecker cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'asfchecker' */
ATerm asfchecker_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

