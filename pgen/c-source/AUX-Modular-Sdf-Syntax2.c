/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Modular_Sdf_Syntax2_2_recursivesym ;
static ATerm lf_AUX_Modular_Sdf_Syntax2_2_recursive ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Modular_Sdf_Syntax2_2sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax2_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf_AUX_Modular_Sdf_Syntax2_1sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax2_1 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Modular_Sdf_Syntax2 ( ) {
lf_AUX_Modular_Sdf_Syntax2_2_recursivesym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax2_2_recursivesym ) ;
lf_AUX_Modular_Sdf_Syntax2_2sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax2_2sym ) ;
lf_AUX_Modular_Sdf_Syntax2_1sym = ATmakeSymbol ( "listtype(sort(\"ImpSection\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax2_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ImpSection\"))" ) , lf_AUX_Modular_Sdf_Syntax2_1 , lf_AUX_Modular_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Syntax2_2 , lf_AUX_Modular_Sdf_Syntax2_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Syntax2_2_recursive , lf_AUX_Modular_Sdf_Syntax2_2_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Modular_Sdf_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"annotate\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[ql(\"annotate\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Sections\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Modular_Sdf_Syntax2 ( ) {
}
ATerm lf_AUX_Modular_Sdf_Syntax2_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Syntax2_2sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax2_2sym , arg0 , arg1 , arg2 ) ) ;
if ( check_sym ( arg1 , lf_AUX_Modular_Sdf_Syntax2_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( arg2 , ef1sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( atmp20 , lf3sym ) ) {
{
ATerm atmp200 = arg_0 ( atmp20 ) ;
if ( ! not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = ( * ef4 ) ( arg0 , make_nf1 ( ef1sym , lf3 ( make_list ( atmp200 ) ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf3sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( ! term_equal ( make_nf1 ( ef1sym , lf3 ( make_list ( atmp200 ) ) ) , make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) {
FUNC_EXIT ( lf_AUX_Modular_Sdf_Syntax2_2_recursive ( arg0 , make_list ( null ( ) ) , make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) ;
}
}
}
}
else {
( tmp [ 0 ] = list_prefix ( atmp10 ) ) ;
( tmp [ 1 ] = list_last ( atmp10 ) ) ;
FUNC_EXIT ( lf_AUX_Modular_Sdf_Syntax2_2_recursive ( arg0 , make_list ( tmp [ 0 ] ) , make_nf1 ( ef1sym , lf3 ( cons ( make_list ( ( * ef2 ) ( ( * ef3 ) ( tmp [ 1 ] ) ) ) , make_list ( atmp200 ) ) ) ) ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Modular_Sdf_Syntax2_2sym , arg0 , arg1 , arg2 ) ) ;
}
}
ATerm lf_AUX_Modular_Sdf_Syntax2_2_recursive ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Syntax2_2_recursivesym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax2_2_recursivesym , arg0 , arg1 , arg2 ) ) ;
{
ATerm ltmp [ 3 ] ;
lbl_lf_AUX_Modular_Sdf_Syntax2_2_recursive : ltmp [ 0 ] = arg0 ;
( ltmp [ 1 ] = arg1 ) ;
( ltmp [ 2 ] = arg2 ) ;
{
ATerm atmp10 = arg1 ;
if ( check_sym ( ltmp [ 2 ] , ef1sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( atmp20 , lf3sym ) ) {
{
ATerm atmp200 = arg_0 ( atmp20 ) ;
if ( ! not_empty_list ( atmp10 ) ) {
( tmp [ 0 ] = ( * ef4 ) ( ltmp [ 0 ] , make_nf1 ( ef1sym , lf3 ( make_list ( atmp200 ) ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , lf3sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( ! term_equal ( make_nf1 ( ef1sym , lf3 ( make_list ( atmp200 ) ) ) , make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) {
( arg1 = make_list ( null ( ) ) ) ;
( arg2 = make_nf1 ( ef1sym , lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ;
goto lbl_lf_AUX_Modular_Sdf_Syntax2_2_recursive ;
}
}
}
}
else {
( tmp [ 0 ] = list_prefix ( atmp10 ) ) ;
( tmp [ 1 ] = list_last ( atmp10 ) ) ;
( arg1 = make_list ( tmp [ 0 ] ) ) ;
( arg2 = make_nf1 ( ef1sym , lf3 ( cons ( make_list ( ( * ef2 ) ( ( * ef3 ) ( tmp [ 1 ] ) ) ) , make_list ( atmp200 ) ) ) ) ) ;
goto lbl_lf_AUX_Modular_Sdf_Syntax2_2_recursive ;
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Modular_Sdf_Syntax2_2_recursivesym , ltmp [ 0 ] , lf_AUX_Modular_Sdf_Syntax2_1 ( ltmp [ 1 ] ) , ltmp [ 2 ] ) ) ;
}
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf_AUX_Modular_Sdf_Syntax2_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Syntax2_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax2_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Syntax2_1sym , arg0 ) ) ;
}

