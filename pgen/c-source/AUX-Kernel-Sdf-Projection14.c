/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Kernel_Sdf_Projection14_1_recursivesym ;
static ATerm lf_AUX_Kernel_Sdf_Projection14_1_recursive ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Kernel_Sdf_Projection14_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Projection14_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Kernel_Sdf_Projection14 ( ) {
lf_AUX_Kernel_Sdf_Projection14_1_recursivesym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"nm-P\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Projection14_1_recursivesym ) ;
lf_AUX_Kernel_Sdf_Projection14_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"nm-P\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Projection14_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"nm-P\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Projection14_1 , lf_AUX_Kernel_Sdf_Projection14_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"nm-P\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Projection14_1_recursive , lf_AUX_Kernel_Sdf_Projection14_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Kernel_Sdf_Projection14 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Productions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Productions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Kernel_Sdf_Projection14 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Kernel_Sdf_Projection14_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Projection14_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Projection14_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( ! not_empty_list ( atmp100 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
else {
( tmp [ 0 ] = list_head ( atmp100 ) ) ;
( tmp [ 1 ] = list_tail ( atmp100 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , ef3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( term_equal ( arg0 , tmp [ 3 ] ) ) {
FUNC_EXIT ( ( * ef4 ) ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef2 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 6 ] ) ) ) , arg0 , tmp [ 4 ] ) ) ) ) , lf_AUX_Kernel_Sdf_Projection14_1_recursive ( arg0 , make_list ( tmp [ 1 ] ) ) ) ) ;
}
}
}
}
}
}
}
}
}
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( not_empty_list ( atmp100 ) ) {
( tmp [ 0 ] = list_head ( atmp100 ) ) ;
( tmp [ 1 ] = list_tail ( atmp100 ) ) ;
FUNC_EXIT ( lf_AUX_Kernel_Sdf_Projection14_1_recursive ( arg0 , make_list ( tmp [ 1 ] ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Kernel_Sdf_Projection14_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Kernel_Sdf_Projection14_1_recursive ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Projection14_1_recursivesym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Projection14_1_recursivesym , arg0 , arg1 ) ) ;
{
ATerm ltmp [ 2 ] ;
lbl_lf_AUX_Kernel_Sdf_Projection14_1_recursive : ltmp [ 0 ] = arg0 ;
( ltmp [ 1 ] = arg1 ) ;
{
ATerm atmp10 = arg1 ;
{
ATerm atmp100 = atmp10 ;
if ( ! not_empty_list ( atmp100 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
else {
( tmp [ 0 ] = list_head ( atmp100 ) ) ;
( tmp [ 1 ] = list_tail ( atmp100 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 3 ] = arg_1 ( tmp [ 0 ] ) ) ;
( tmp [ 4 ] = arg_2 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , ef3sym ) ) {
( tmp [ 5 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 5 ] , lf3sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( term_equal ( ltmp [ 0 ] , tmp [ 3 ] ) ) {
FUNC_EXIT ( ( * ef4 ) ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef2 ) ( make_nf1 ( ef3sym , lf3 ( make_list ( tmp [ 6 ] ) ) ) , ltmp [ 0 ] , tmp [ 4 ] ) ) ) ) , lf_AUX_Kernel_Sdf_Projection14_1_recursive ( ltmp [ 0 ] , make_list ( tmp [ 1 ] ) ) ) ) ;
}
}
}
}
}
}
}
{
ATerm atmp10 = arg1 ;
{
ATerm atmp100 = atmp10 ;
if ( not_empty_list ( atmp100 ) ) {
( tmp [ 0 ] = list_head ( atmp100 ) ) ;
( tmp [ 1 ] = list_tail ( atmp100 ) ) ;
( arg1 = make_list ( tmp [ 1 ] ) ) ;
goto lbl_lf_AUX_Kernel_Sdf_Projection14_1_recursive ;
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Kernel_Sdf_Projection14_1_recursivesym , ltmp [ 0 ] , ( * ef1 ) ( lf2 ( ltmp [ 1 ] ) ) ) ) ;
}
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

