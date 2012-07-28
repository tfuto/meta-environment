/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'ambiguity-reporter' (prefix='')
 */

#include "ambiguity-reporter.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-terminate(<ambiguity-reporter>,<term>)",
  "rec-eval(<ambiguity-reporter>,report-ambiguities(<term>,<str>))",
};

/* Event handler for tool 'ambiguity-reporter' */
ATerm ambiguity_reporter_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0;
  ATerm t0;

  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(report-ambiguities(<term>,<str>))", &t0, &s0)) {
    return report_ambiguities(conn, t0, s0);
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = ambiguity_reporter_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool ambiguity-reporter cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'ambiguity-reporter' */
ATerm ambiguity_reporter_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

