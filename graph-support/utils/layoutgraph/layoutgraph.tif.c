/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'layoutgraph' (prefix='')
 */

#include "layoutgraph.tif.h"

#define NR_SIG_ENTRIES	2

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<layoutgraph>,layout-graph(<graph>))",
  "rec-terminate(<layoutgraph>,<term>)",
};

/* Event handler for tool 'layoutgraph' */
ATerm layoutgraph_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  ATerm t0;

  if(ATmatch(term, "rec-eval(layout-graph(<term>))", &t0)) {
    return layout_graph(conn, t0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = layoutgraph_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool layoutgraph cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'layoutgraph' */
ATerm layoutgraph_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

