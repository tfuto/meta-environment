/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'hello' (prefix='')
 */

#include "hello.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<hello>,get-text)",
  "rec-terminate(<hello>,<term>)",
};

/* Event handler for tool 'hello' */
ATerm hello_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  ATerm t0;

  if(ATmatch(term, "rec-eval(get-text)")) {
    return get_text(conn);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = hello_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool hello cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'hello' */
ATerm hello_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}
