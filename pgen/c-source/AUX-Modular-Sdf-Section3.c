/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Modular_Sdf_Section3_1_recursivesym ;
static ATerm lf_AUX_Modular_Sdf_Section3_1_recursive ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Modular_Sdf_Section3_1sym ;
static ATerm lf_AUX_Modular_Sdf_Section3_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Modular_Sdf_Section3 ( ) {
lf_AUX_Modular_Sdf_Section3_1_recursivesym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Section3_1_recursivesym ) ;
lf_AUX_Modular_Sdf_Section3_1sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Section3_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Section3_1 , lf_AUX_Modular_Sdf_Section3_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Section3_1_recursive , lf_AUX_Modular_Sdf_Section3_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Modular_Sdf_Section3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[sort(\"Sections\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Section\"),w(\"\"),[sort(\"Sections\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Modular_Sdf_Section3 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Modular_Sdf_Section3_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Section3_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Section3_1sym , arg0 , arg1 ) ) ;
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
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Modular_Sdf_Section3_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , arg1 ) , lf_AUX_Modular_Sdf_Section3_1_recursive ( tmp [ 0 ] , arg1 ) ) ) ;
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
if ( check_sym ( tmp [ 0 ] , ef5sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef5 ) ( ( * ef4 ) ( tmp [ 1 ] , arg1 ) ) ) ) ) ) ;
}
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( ( * ef4 ) ( tmp [ 1 ] , arg1 ) ) ) ) ) ) ;
}
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Modular_Sdf_Section3_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Modular_Sdf_Section3_1_recursive ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Section3_1_recursivesym , ATmakeAppl ( lf_AUX_Modular_Sdf_Section3_1_recursivesym , arg0 , arg1 ) ) ;
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
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Modular_Sdf_Section3_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) , arg1 ) , lf_AUX_Modular_Sdf_Section3_1_recursive ( tmp [ 0 ] , arg1 ) ) ) ;
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
if ( check_sym ( tmp [ 0 ] , ef5sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef5 ) ( ( * ef4 ) ( tmp [ 1 ] , arg1 ) ) ) ) ) ) ;
}
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( ( * ef4 ) ( tmp [ 1 ] , arg1 ) ) ) ) ) ) ;
}
}
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Modular_Sdf_Section3_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

