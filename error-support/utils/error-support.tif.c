/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'error-support' (prefix='')
 * Implementation generated at Tue Jan 27 18:03:26 2004
 */

#include "error-support.tif.h"

#define NR_SIG_ENTRIES	0

static char *signature[NR_SIG_ENTRIES] = {
};

/* Event handler for tool 'error-support' */
ATerm error_support_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */

  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = error_support_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool error-support cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'error-support' */
ATerm error_support_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

