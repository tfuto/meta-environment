/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Basic_Sdf_Normalization4_1_recursivesym ;
static ATerm lf_AUX_Basic_Sdf_Normalization4_1_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Basic_Sdf_Normalization4_1sym ;
static ATerm lf_AUX_Basic_Sdf_Normalization4_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Basic_Sdf_Normalization4 ( ) {
lf_AUX_Basic_Sdf_Normalization4_1_recursivesym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Normalization4_1_recursivesym ) ;
lf_AUX_Basic_Sdf_Normalization4_1sym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Normalization4_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Normalization4_1 , lf_AUX_Basic_Sdf_Normalization4_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-LEXs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Normalization4_1_recursive , lf_AUX_Basic_Sdf_Normalization4_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Basic_Sdf_Normalization4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols-Projection\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols-Projection\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Basic_Sdf_Normalization4 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Basic_Sdf_Normalization4_1 ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Normalization4_1sym , ATmakeAppl ( lf_AUX_Basic_Sdf_Normalization4_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
( tmp [ 0 ] = arg_0 ( atmp00 ) ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Basic_Sdf_Normalization4_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Basic_Sdf_Normalization4_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( tmp [ 0 ] ) ) ) ) ) ;
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Normalization4_1sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Basic_Sdf_Normalization4_1_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Normalization4_1_recursivesym , ATmakeAppl ( lf_AUX_Basic_Sdf_Normalization4_1_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
( tmp [ 0 ] = atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Basic_Sdf_Normalization4_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Basic_Sdf_Normalization4_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
{
ATerm atmp00 = arg0 ;
{
ATerm atmp000 = atmp00 ;
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( tmp [ 0 ] ) ) ) ) ) ;
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Normalization4_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

