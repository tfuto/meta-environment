/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Lex_Syntax6_1sym ;
static ATerm lf_AUX_Add_Lex_Syntax6_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Add_Lex_Syntax6 ( ) {
lf_AUX_Add_Lex_Syntax6_1sym = ATmakeSymbol ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Lex_Syntax6_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-grammar\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Lex_Syntax6_1 , lf_AUX_Add_Lex_Syntax6_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Add_Lex_Syntax6 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-productions\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\",\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-Lex-Syntax\"),w(\"\"),[ql(\"add-lcf-for-productions\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\",\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"LAYOUT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"LAYOUT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Add_Lex_Syntax6 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Add_Lex_Syntax6_1 ( ATerm arg0 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Add_Lex_Syntax6_1sym , ATmakeAppl ( lf_AUX_Add_Lex_Syntax6_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef1sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
( tmp [ 0 ] = ( * ef3 ) ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp0000 ) ) ) , lf3 ( make_list ( ( * ef4 ) ( ) ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ;
}
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef5sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
( tmp [ 0 ] = lf_AUX_Add_Lex_Syntax6_1 ( atmp00 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
( tmp [ 3 ] = lf_AUX_Add_Lex_Syntax6_1 ( atmp01 ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_Lex_Syntax6_1sym , arg0 ) ) ;
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

