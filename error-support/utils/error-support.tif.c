/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'error-support' (prefix='')
 * Implementation generated at Thu Jan 29 16:59:04 2004
 */

#include "error-support.tif.h"

#define NR_SIG_ENTRIES	5

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<error-support>,convert-feedback(<term>))",
  "rec-eval(<error-support>,get-feedback-producer(<term>))",
  "rec-eval(<error-support>,get-feedback-identification(<term>))",
  "rec-eval(<error-support>,get-feedback-subjects(<term>))",
  "rec-terminate(<error-support>,<term>)",
};

/* Event handler for tool 'error-support' */
ATerm error_support_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  ATerm t0;

  if(ATmatch(term, "rec-eval(get-feedback-producer(<term>))", &t0)) {
    return get_feedback_producer(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-feedback-identification(<term>))", &t0)) {
    return get_feedback_identification(conn, t0);
  }
  if(ATmatch(term, "rec-eval(convert-feedback(<term>))", &t0)) {
    return convert_feedback(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-feedback-subjects(<term>))", &t0)) {
    return get_feedback_subjects(conn, t0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
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

