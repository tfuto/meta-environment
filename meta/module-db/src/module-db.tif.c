/**
 * This file is generated by /home/markvdb/Research/bin/tifstoc. Do not edit!
 * Generated from tifs for tool 'module-db' (prefix='')
 * Implementation generated at Wed May 14 11:30:37 2003
 */

#include "module-db.tif.h"

#define NR_SIG_ENTRIES	38

static char *signature[NR_SIG_ENTRIES] = {
  "rec-do(<module-db>,init-module-db)",
  "rec-do(<module-db>,set-file-extensions(<str>,<str>,<str>))",
  "rec-do(<module-db>,clear-module-db)",
  "rec-eval(<module-db>,delete-module(<str>))",
  "rec-eval(<module-db>,close-module(<str>))",
  "rec-eval(<module-db>,exists(<str>))",
  "rec-eval(<module-db>,add-empty-module(<str>))",
  "rec-eval(<module-db>,add-sdf-module(<str>,<str>,<term>,<int>))",
  "rec-do(<module-db>,invalidate-sdf(<str>))",
  "rec-eval(<module-db>,update-sdf2-module(<str>,<term>))",
  "rec-eval(<module-db>,rename-module(<str>,<str>,<str>))",
  "rec-eval(<module-db>,add-import(<str>,<str>,<str>))",
  "rec-eval(<module-db>,remove-import(<str>,<str>,<str>))",
  "rec-eval(<module-db>,copy-module(<str>,<str>,<str>))",
  "rec-eval(<module-db>,eqs-not-available-for-modules(<str>))",
  "rec-eval(<module-db>,get-eqs-text(<str>))",
  "rec-do(<module-db>,add-tree-eqs-section(<str>,<str>,<term>,<str>,<int>))",
  "rec-do(<module-db>,add-empty-eqs-section(<str>,<str>))",
  "rec-do(<module-db>,add-text-eqs-section(<str>,<str>,<str>,<int>))",
  "rec-do(<module-db>,update-eqs-tree(<str>,<term>))",
  "rec-do(<module-db>,update-eqs-text(<str>,<str>))",
  "rec-eval(<module-db>,add-parse-table(<term>,<term>,<int>))",
  "rec-eval(<module-db>,get-path(<str>,sdf2))",
  "rec-eval(<module-db>,get-path(<str>,eqs))",
  "rec-eval(<module-db>,get-parse-table(<term>))",
  "rec-eval(<module-db>,get-all-depending-modules(<str>))",
  "rec-eval(<module-db>,get-all-imported-modules(<str>))",
  "rec-eval(<module-db>,get-imported-modules(<str>))",
  "rec-eval(<module-db>,get-all-modules)",
  "rec-eval(<module-db>,all-equations-available(<str>))",
  "rec-eval(<module-db>,get-all-sdf2-definitions(<str>))",
  "rec-eval(<module-db>,get-sdf-tree(<str>))",
  "rec-eval(<module-db>,get-asf-tree(<str>))",
  "rec-eval(<module-db>,get-equations-for-module(<term>))",
  "rec-eval(<module-db>,get-equations-for-renamed-import(<term>,<term>))",
  "rec-do(<module-db>,invalidate-parse-tables(<str>))",
  "rec-eval(<module-db>,get-module-info(<str>))",
  "rec-terminate(<module-db>,<term>)",
};

/* Event handler for tool 'module-db' */
ATerm module_db_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  int i0;
  char *s0, *s1, *s2;
  ATerm t0, t1;

  if(ATmatch(term, "rec-do(add-empty-eqs-section(<str>,<str>))", &s0, &s1)) {
    add_empty_eqs_section(conn, s0, s1);
    return NULL;
  }
  if(ATmatch(term, "rec-do(add-text-eqs-section(<str>,<str>,<str>,<int>))", &s0, &s1, &s2, &i0)) {
    add_text_eqs_section(conn, s0, s1, s2, i0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(add-tree-eqs-section(<str>,<str>,<term>,<str>,<int>))", &s0, &s1, &t0, &s2, &i0)) {
    add_tree_eqs_section(conn, s0, s1, t0, s2, i0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(update-eqs-tree(<str>,<term>))", &s0, &t0)) {
    update_eqs_tree(conn, s0, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-eqs-text(<str>))", &s0)) {
    return get_eqs_text(conn, s0);
  }
  if(ATmatch(term, "rec-do(update-eqs-text(<str>,<str>))", &s0, &s1)) {
    update_eqs_text(conn, s0, s1);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(eqs-not-available-for-modules(<str>))", &s0)) {
    return eqs_not_available_for_modules(conn, s0);
  }
  if(ATmatch(term, "rec-eval(add-parse-table(<term>,<term>,<int>))", &t0, &t1, &i0)) {
    return add_parse_table(conn, t0, t1, i0);
  }
  if(ATmatch(term, "rec-eval(copy-module(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    return copy_module(conn, s0, s1, s2);
  }
  if(ATmatch(term, "rec-eval(get-path(<str>,<term>))", &s0, &t0)) {
    return get_path(conn, s0, t0);
  }
  if(ATmatch(term, "rec-eval(remove-import(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    return remove_import(conn, s0, s1, s2);
  }
  if(ATmatch(term, "rec-eval(get-parse-table(<term>))", &t0)) {
    return get_parse_table(conn, t0);
  }
  if(ATmatch(term, "rec-eval(add-import(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    return add_import(conn, s0, s1, s2);
  }
  if(ATmatch(term, "rec-eval(get-all-depending-modules(<str>))", &s0)) {
    return get_all_depending_modules(conn, s0);
  }
  if(ATmatch(term, "rec-eval(rename-module(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    return rename_module(conn, s0, s1, s2);
  }
  if(ATmatch(term, "rec-eval(get-all-imported-modules(<str>))", &s0)) {
    return get_all_imported_modules(conn, s0);
  }
  if(ATmatch(term, "rec-eval(update-sdf2-module(<str>,<term>))", &s0, &t0)) {
    return update_sdf2_module(conn, s0, t0);
  }
  if(ATmatch(term, "rec-eval(get-imported-modules(<str>))", &s0)) {
    return get_imported_modules(conn, s0);
  }
  if(ATmatch(term, "rec-do(invalidate-sdf(<str>))", &s0)) {
    invalidate_sdf(conn, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-all-modules)")) {
    return get_all_modules(conn);
  }
  if(ATmatch(term, "rec-eval(add-sdf-module(<str>,<str>,<term>,<int>))", &s0, &s1, &t0, &i0)) {
    return add_sdf_module(conn, s0, s1, t0, i0);
  }
  if(ATmatch(term, "rec-eval(all-equations-available(<str>))", &s0)) {
    return all_equations_available(conn, s0);
  }
  if(ATmatch(term, "rec-eval(add-empty-module(<str>))", &s0)) {
    return add_empty_module(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-all-sdf2-definitions(<str>))", &s0)) {
    return get_all_sdf2_definitions(conn, s0);
  }
  if(ATmatch(term, "rec-eval(exists(<str>))", &s0)) {
    return exists(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-sdf-tree(<str>))", &s0)) {
    return get_sdf_tree(conn, s0);
  }
  if(ATmatch(term, "rec-eval(close-module(<str>))", &s0)) {
    return close_module(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-asf-tree(<str>))", &s0)) {
    return get_asf_tree(conn, s0);
  }
  if(ATmatch(term, "rec-eval(delete-module(<str>))", &s0)) {
    return delete_module(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-equations-for-module(<term>))", &t0)) {
    return get_equations_for_module(conn, t0);
  }
  if(ATmatch(term, "rec-do(clear-module-db)")) {
    clear_module_db(conn);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-equations-for-renamed-import(<term>,<term>))", &t0, &t1)) {
    return get_equations_for_renamed_import(conn, t0, t1);
  }
  if(ATmatch(term, "rec-do(set-file-extensions(<str>,<str>,<str>))", &s0, &s1, &s2)) {
    set_file_extensions(conn, s0, s1, s2);
    return NULL;
  }
  if(ATmatch(term, "rec-do(invalidate-parse-tables(<str>))", &s0)) {
    invalidate_parse_tables(conn, s0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(init-module-db)")) {
    init_module_db(conn);
    return NULL;
  }
  if(ATmatch(term, "rec-eval(get-module-info(<str>))", &s0)) {
    return get_module_info(conn, s0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = module_db_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool module-db cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'module-db' */
ATerm module_db_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

