/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Prefer_Variables5_2sym ;
static ATerm lf_AUX_Add_Prefer_Variables5_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf_AUX_Add_Prefer_Variables5_1sym ;
static ATerm lf_AUX_Add_Prefer_Variables5_1 ( ATerm arg1 ) ;
void register_AUX_Add_Prefer_Variables5 ( ) {
lf_AUX_Add_Prefer_Variables5_2sym = ATmakeSymbol ( "prod(id(\"Add-Prefer-Variables\"),w(\"\"),[ql(\"add-pv-for-sections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Section\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Prefer_Variables5_2sym ) ;
lf_AUX_Add_Prefer_Variables5_1sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Prefer_Variables5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf_AUX_Add_Prefer_Variables5_1 , lf_AUX_Add_Prefer_Variables5_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Prefer-Variables\"),w(\"\"),[ql(\"add-pv-for-sections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Section\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Prefer_Variables5_2 , lf_AUX_Add_Prefer_Variables5_2sym ) ;
}
void resolve_AUX_Add_Prefer_Variables5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Prefer-Variables\"),w(\"\"),[ql(\"add-pv-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Prefer-Variables\"),w(\"\"),[ql(\"add-pv-for-section\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Section\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Add_Prefer_Variables5 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Add_Prefer_Variables5_2 ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Add_Prefer_Variables5_2sym , ATmakeAppl ( lf_AUX_Add_Prefer_Variables5_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Add_Prefer_Variables5_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
( tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = lf_AUX_Add_Prefer_Variables5_2 ( lf_AUX_Add_Prefer_Variables5_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf_AUX_Add_Prefer_Variables5_1sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf_AUX_Add_Prefer_Variables5_1 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf_AUX_Add_Prefer_Variables5_1 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_Prefer_Variables5_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Add_Prefer_Variables5_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Add_Prefer_Variables5_1sym , ATmakeAppl ( lf_AUX_Add_Prefer_Variables5_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Add_Prefer_Variables5_1sym , arg0 ) ) ;
}

