/**
 * This file is generated by /ufs/jurgenv/glt/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'term-store' (prefix='')
 * Implementation generated at Tue May 27 12:05:06 2003
 */

#include "term-store.tif.h"

#define NR_SIG_ENTRIES	14

static char *signature[NR_SIG_ENTRIES] = {
  "rec-do(<term-store>,add-table(<str>,<str>))",
  "rec-do(<term-store>,remove-table(<str>))",
  "rec-do(<term-store>,clear-table(<str>))",
  "rec-do(<term-store>,put-term-value(<str>,<term>,<term>))",
  "rec-do(<term-store>,put-str-value(<str>,<term>,<str>))",
  "rec-eval(<term-store>,get-str-value(<str>,<term>))",
  "rec-eval(<term-store>,get-term-value(<str>,<term>))",
  "rec-do(<term-store>,remove-value(<str>,<term>))",
  "rec-eval(<term-store>,contains-key(<str>,<term>))",
  "rec-eval(<term-store>,get-all-keys(<str>))",
  "rec-eval(<term-store>,filter-keys(<str>,<list>))",
  "rec-eval(<term-store>,get-all-values(<str>))",
  "rec-do(<term-store>,remove-value-from-all-tables(<term>))",
  "rec-terminate(<term-store>,<term>)",
};

/* Event handler for tool 'term-store' */
ATerm term_store_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1;
  ATerm t0, t1;

  if(ATmatch(term, "rec-eval(get-term-value(<str>,<term>))", &s0, &t0)) {
    return get_term_value(conn, s0, t0);
  }
  if(ATmatch(term, "rec-eval(get-str-value(<str>,<term>))", &s0, &t0)) {
    return get_str_value(conn, s0, t0);
  }
  if(ATmatch(term, "rec-do(remove-value(<str>,<term>))", &s0, &t0)) {
    remove_value(conn, s0, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(put-str-value(<str>,<term>,<str>))", &s0, &t0, &s1)) {
    put_str_value(conn, s0, t0, s1);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(contains-key(<str>,<term>))", &s0, &t0)) {
    return contains_key(conn, s0, t0);
  }
  if(ATmatch(term, "rec-do(put-term-value(<str>,<term>,<term>))", &s0, &t0, &t1)) {
    put_term_value(conn, s0, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-all-keys(<str>))", &s0)) {
    return get_all_keys(conn, s0);
  }
  if(ATmatch(term, "rec-do(clear-table(<str>))", &s0)) {
    clear_table(conn, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(filter-keys(<str>,<term>))", &s0, &t0)) {
    return filter_keys(conn, s0, t0);
  }
  if(ATmatch(term, "rec-do(remove-table(<str>))", &s0)) {
    remove_table(conn, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-all-values(<str>))", &s0)) {
    return get_all_values(conn, s0);
  }
  if(ATmatch(term, "rec-do(add-table(<str>,<str>))", &s0, &s1)) {
    add_table(conn, s0, s1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(remove-value-from-all-tables(<term>))", &t0)) {
    remove_value_from_all_tables(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = term_store_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool term-store cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'term-store' */
ATerm term_store_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

