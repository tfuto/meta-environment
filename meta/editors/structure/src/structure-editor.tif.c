/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'structure-editor' (prefix='')
 */

#include "structure-editor.tif.h"

#define NR_SIG_ENTRIES	18

static char *signature[NR_SIG_ENTRIES] = {
  "rec-do(<structure-editor>,new-editor-given-text(<term>,<str>))",
  "rec-do(<structure-editor>,new-editor-given-tree(<term>,<term>))",
  "rec-do(<structure-editor>,replace-focus(<term>,<term>,<term>))",
  "rec-eval(<structure-editor>,move-focus-to-root(<term>))",
  "rec-eval(<structure-editor>,move-focus(<term>,<term>))",
  "rec-eval(<structure-editor>,invalidate-tree(<term>))",
  "rec-eval(<structure-editor>,set-focus(<term>,<int>))",
  "rec-eval(<structure-editor>,get-parse-tree(<term>))",
  "rec-eval(<structure-editor>,get-focussed-tree(<term>))",
  "rec-eval(<structure-editor>,replace-focussed-tree(<term>,<term>))",
  "rec-eval(<structure-editor>,check-tree-sort(<str>,<term>))",
  "rec-eval(<structure-editor>,get-focus-sort(<term>))",
  "rec-eval(<structure-editor>,get-focus-location(<term>))",
  "rec-eval(<structure-editor>,get-dirty-focuses(<term>))",
  "rec-do(<structure-editor>,remove-tree(<term>))",
  "rec-do(<structure-editor>,modify(<term>))",
  "rec-eval(<structure-editor>,is-editor-modified(<term>))",
  "rec-terminate(<structure-editor>,<term>)",
};

/* Event handler for tool 'structure-editor' */
ATerm structure_editor_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  int i0;
  char *s0;
  ATerm t0, t1, t2;

  if(ATmatch(term, "rec-eval(get-focussed-tree(<term>))", &t0)) {
    return get_focussed_tree(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-parse-tree(<term>))", &t0)) {
    return get_parse_tree(conn, t0);
  }
  if(ATmatch(term, "rec-eval(replace-focussed-tree(<term>,<term>))", &t0, &t1)) {
    return replace_focussed_tree(conn, t0, t1);
  }
  if(ATmatch(term, "rec-eval(set-focus(<term>,<int>))", &t0, &i0)) {
    return set_focus(conn, t0, i0);
  }
  if(ATmatch(term, "rec-eval(check-tree-sort(<str>,<term>))", &s0, &t0)) {
    return check_tree_sort(conn, s0, t0);
  }
  if(ATmatch(term, "rec-eval(invalidate-tree(<term>))", &t0)) {
    return invalidate_tree(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-focus-sort(<term>))", &t0)) {
    return get_focus_sort(conn, t0);
  }
  if(ATmatch(term, "rec-eval(move-focus(<term>,<term>))", &t0, &t1)) {
    return move_focus(conn, t0, t1);
  }
  if(ATmatch(term, "rec-eval(get-focus-location(<term>))", &t0)) {
    return get_focus_location(conn, t0);
  }
  if(ATmatch(term, "rec-eval(move-focus-to-root(<term>))", &t0)) {
    return move_focus_to_root(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-dirty-focuses(<term>))", &t0)) {
    return get_dirty_focuses(conn, t0);
  }
  if(ATmatch(term, "rec-do(replace-focus(<term>,<term>,<term>))", &t0, &t1, &t2)) {
    replace_focus(conn, t0, t1, t2);
    return NULL;
  }
  if(ATmatch(term, "rec-do(remove-tree(<term>))", &t0)) {
    remove_tree(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(new-editor-given-tree(<term>,<term>))", &t0, &t1)) {
    new_editor_given_tree(conn, t0, t1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(modify(<term>))", &t0)) {
    modify(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(new-editor-given-text(<term>,<str>))", &t0, &s0)) {
    new_editor_given_text(conn, t0, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(is-editor-modified(<term>))", &t0)) {
    return is_editor_modified(conn, t0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = structure_editor_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool structure-editor cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'structure-editor' */
ATerm structure_editor_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

