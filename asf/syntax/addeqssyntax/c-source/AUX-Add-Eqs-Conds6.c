/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Eqs_Conds6_1sym ;
static ATerm lf_AUX_Add_Eqs_Conds6_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Add_Eqs_Conds6 ( ) {
lf_AUX_Add_Eqs_Conds6_1sym = ATmakeSymbol ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Eqs_Conds6_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Eqs_Conds6_1 , lf_AUX_Add_Eqs_Conds6_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Add_Eqs_Conds6 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[ql(\"sorts\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[ql(\"sorts\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Add_Eqs_Conds6 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Add_Eqs_Conds6_1 ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Add_Eqs_Conds6_1sym , ATmakeAppl ( lf_AUX_Add_Eqs_Conds6_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
( tmp [ 0 ] = lf_AUX_Add_Eqs_Conds6_1 ( atmp00 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = lf_AUX_Add_Eqs_Conds6_1 ( atmp01 ) ) ;
if ( check_sym ( tmp [ 3 ] , ef2sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( ( * ef2 ) ( lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef4sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
( tmp [ 0 ] = ( * ef5 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef2 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ;
}
}
}
}
}
}
}
}
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_Eqs_Conds6_1sym , arg0 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}

