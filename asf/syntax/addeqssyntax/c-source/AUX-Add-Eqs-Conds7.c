/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Eqs_Conds7_1sym ;
static ATerm lf_AUX_Add_Eqs_Conds7_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Add_Eqs_Conds7 ( ) {
lf_AUX_Add_Eqs_Conds7_1sym = ATmakeSymbol ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Eqs_Conds7_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Eqs_Conds7_1 , lf_AUX_Add_Eqs_Conds7_1sym ) ;
}
void resolve_AUX_Add_Eqs_Conds7 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Add_Eqs_Conds7 ( ) {
}
ATerm lf_AUX_Add_Eqs_Conds7_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Add_Eqs_Conds7_1sym , ATmakeAppl ( lf_AUX_Add_Eqs_Conds7_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef2 ) ( atmp00 , arg1 ) ) ;
}
}
if ( check_sym ( arg0 , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef2 ) ( atmp00 , arg1 ) ) ;
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Add_Eqs_Conds7_1sym , arg0 , arg1 ) ) ;
}

