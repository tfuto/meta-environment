/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Lex_Syntax5_1sym ;
static ATerm lf_AUX_Add_Lex_Syntax5_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Add_Lex_Syntax5 ( ) {
lf_AUX_Add_Lex_Syntax5_1sym = ATmakeSymbol ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Lex_Syntax5_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Lex_Syntax5_1 , lf_AUX_Add_Lex_Syntax5_1sym ) ;
}
void resolve_AUX_Add_Lex_Syntax5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Add_Lex_Syntax5 ( ) {
}
ATerm lf_AUX_Add_Lex_Syntax5_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Add_Lex_Syntax5_1sym , ATmakeAppl ( lf_AUX_Add_Lex_Syntax5_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef2 ) ( atmp00 ) ) ;
}
}
if ( check_sym ( arg0 , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef2 ) ( atmp00 ) ) ;
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_Lex_Syntax5_1sym , arg0 ) ) ;
}

