/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'sglr' (prefix='')
 */

#include "sglr.tif.h"

#define NR_SIG_ENTRIES	3

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<sglr>,open-language(<term>,<term>))",
  "rec-eval(<sglr>,parse-string(<term>,<str>,<str>,<str>))",
  "rec-terminate(<sglr>,<term>)",
};

/* Event handler for tool 'sglr' */
ATerm sglr_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1, *s2;
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(open-language(<term>,<term>))", &t0, &t1)) {
    return open_language(conn, t0, t1);
  }
  if(ATmatch(term, "rec-eval(parse-string(<term>,<str>,<str>,<str>))", &t0, &s0, &s1, &s2)) {
    return parse_string(conn, t0, s0, s1, s2);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = sglr_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool sglr cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'sglr' */
ATerm sglr_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

