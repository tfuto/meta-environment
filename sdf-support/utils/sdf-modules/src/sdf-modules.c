/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'sdf-modules' (prefix='')
 */

#include "sdf-modules.h"

#define NR_SIG_ENTRIES	11

static char *signature[NR_SIG_ENTRIES] = {
  "rec-eval(<sdf-modules>,get-module-id(<term>))",
  "rec-eval(<sdf-modules>,get-module-path(<str>,<str>))",
  "rec-eval(<sdf-modules>,get-new-module-name(<list>,<str>,<str>))",
  "rec-eval(<sdf-modules>,get-all-needed-imports(<list>,<str>))",
  "rec-eval(<sdf-modules>,get-imported-module-names(<term>))",
  "rec-eval(<sdf-modules>,make-sdf-definition(<list>))",
  "rec-eval(<sdf-modules>,is-valid-modulename(<str>))",
  "rec-eval(<sdf-modules>,remove-import-from-module(<term>,<str>))",
  "rec-eval(<sdf-modules>,rename-modulename-in-module(<term>,<str>))",
  "rec-eval(<sdf-modules>,add-import-to-module(<term>,<str>))",
  "rec-terminate(<sdf-modules>,<term>)",
};

/* Event handler for tool 'sdf-modules' */
ATerm sdf_modules_handler(int conn, ATerm term)
{
  ATerm in, out;
  /* We need some temporary variables during matching */
  char *s0, *s1;
  ATerm t0;

  if(ATmatch(term, "rec-eval(get-imported-module-names(<term>))", &t0)) {
    return get_imported_module_names(conn, t0);
  }
  if(ATmatch(term, "rec-eval(make-sdf-definition(<term>))", &t0)) {
    return make_sdf_definition(conn, t0);
  }
  if(ATmatch(term, "rec-eval(get-all-needed-imports(<term>,<str>))", &t0, &s0)) {
    return get_all_needed_imports(conn, t0, s0);
  }
  if(ATmatch(term, "rec-eval(is-valid-modulename(<str>))", &s0)) {
    return is_valid_modulename(conn, s0);
  }
  if(ATmatch(term, "rec-eval(get-new-module-name(<term>,<str>,<str>))", &t0, &s0, &s1)) {
    return get_new_module_name(conn, t0, s0, s1);
  }
  if(ATmatch(term, "rec-eval(remove-import-from-module(<term>,<str>))", &t0, &s0)) {
    return remove_import_from_module(conn, t0, s0);
  }
  if(ATmatch(term, "rec-eval(get-module-path(<str>,<str>))", &s0, &s1)) {
    return get_module_path(conn, s0, s1);
  }
  if(ATmatch(term, "rec-eval(rename-modulename-in-module(<term>,<str>))", &t0, &s0)) {
    return rename_modulename_in_module(conn, t0, s0);
  }
  if(ATmatch(term, "rec-eval(get-module-id(<term>))", &t0)) {
    return get_module_id(conn, t0);
  }
  if(ATmatch(term, "rec-eval(add-import-to-module(<term>,<str>))", &t0, &s0)) {
    return add_import_to_module(conn, t0, s0);
  }
  if(ATmatch(term, "rec-terminate(<term>)", &t0)) {
    rec_terminate(conn, t0);
    return NULL;
  }
  if(ATmatch(term, "rec-do(signature(<term>,<term>))", &in, &out)) {
    ATerm result = sdf_modules_checker(conn, in);
    if(!ATmatch(result, "[]"))
      ATfprintf(stderr, "warning: not in input signature:\n\t%\n\tl\n", result);
    return NULL;
  }

  ATerror("tool sdf-modules cannot handle term %t", term);
  return NULL; /* Silence the compiler */
}

/* Check the signature of the tool 'sdf-modules' */
ATerm sdf_modules_checker(int conn, ATerm siglist)
{
  return ATBcheckSignature(siglist, signature, NR_SIG_ENTRIES);
}

