/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Eqs_Conds5_1sym ;
static ATerm lf_AUX_Add_Eqs_Conds5_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Add_Eqs_Conds5 ( ) {
lf_AUX_Add_Eqs_Conds5_1sym = ATmakeSymbol ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-mod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Eqs_Conds5_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"ImpSection\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-mod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Eqs_Conds5_1 , lf_AUX_Add_Eqs_Conds5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ImpSection\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Add_Eqs_Conds5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-sections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Section\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-sections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Section\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"SymbolsSet\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolsSetProds\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Add_Eqs_Conds5 ( ) {
}
ATerm lf_AUX_Add_Eqs_Conds5_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Add_Eqs_Conds5_1sym , ATmakeAppl ( lf_AUX_Add_Eqs_Conds5_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf2sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
{
ATerm atmp02 = arg_2 ( arg0 ) ;
if ( check_sym ( atmp02 , ef2sym ) ) {
{
ATerm atmp020 = arg_0 ( atmp02 ) ;
if ( check_sym ( atmp020 , lf3sym ) ) {
{
ATerm atmp0200 = arg_0 ( atmp020 ) ;
FUNC_EXIT ( ( * ef3 ) ( lf3 ( make_list ( atmp0200 ) ) , arg1 ) ) ;
}
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Add_Eqs_Conds5_1sym , arg0 , arg1 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

