/**
 * This file is generated by /ufs/markvdb/Research/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'in-output' (prefix='')
 * Implementation generated at Mon May 19 18:06:28 2003
 */

#include "in-output.tif.h"

#define NR_SIG_ENTRIES	10

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<in-output>,process-search-paths(<list>))",
  "rec-eval(<in-output>,retrieve-search-paths)",
  "rec-eval(<in-output>,find-file(<str>,<str>,<str>))",
  "rec-eval(<in-output>,exists-file(<str>,<str>))",
  "rec-eval(<in-output>,write-text-file(<str>,<str>,<list>))",
  "rec-eval(<in-output>,write-term-file(<str>,<str>,<term>))",
  "rec-eval(<in-output>,open-named-text-file(<str>))",
  "rec-eval(<in-output>,open-text-file(<str>,<str>))",
  "rec-eval(<in-output>,exists-named-file(<str>))",
  "rec-terminate(<in-output>,<term>)",
};

/* Event handler for tool 'in-output' */
ATerm in_output_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1, *s2;
  ATerm t0;

  if(ATmatch(term, "rec-eval(write-text-file(<str>,<str>,<term>))", &s0, &s1, &t0)) {
    return write_text_file(conn, s0, s1, t0);
  }
  if(ATmatch(term, "rec-eval(exists-file(<str>,<str>))", &s0, &s1)) {
    return exists_file(conn, s0, s1);
  }
  if(ATmatch(term, "rec-eval(write-term-file(<str>,<str>,<term>))", &s0, &s1, &t0)) {
    return write_term_file(conn, s0, s1, t0);
  }
  if(ATmatch(term, "rec-eval(find-file(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    return find_file(conn, s0, s1, s2);
  }
  if(ATmatch(term, "rec-eval(open-named-text-file(<str>))", &s0)) {
    return open_named_text_file(conn, s0);
  }
  if(ATmatch(term, "rec-eval(retrieve-search-paths)")) {
    return retrieve_search_paths(conn);
  }
  if(ATmatch(term, "rec-eval(open-text-file(<str>,<str>))", &s0, &s1)) {
    return open_text_file(conn, s0, s1);
  }
  if(ATmatch(term, "rec-eval(process-search-paths(<term>))", &t0)) {
    return process_search_paths(conn, t0);
  }
  if(ATmatch(term, "rec-eval(exists-named-file(<str>))", &s0)) {
    return exists_named_file(conn, s0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = in_output_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool in-output cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'in-output' */
ATerm in_output_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

