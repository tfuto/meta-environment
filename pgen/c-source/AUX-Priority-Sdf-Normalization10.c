#include  "support.h"
static Symbol lf_AUX_Priority_Sdf_Normalization10_1sym ;
static ATerm lf_AUX_Priority_Sdf_Normalization10_1 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Priority_Sdf_Normalization10 ( ) {
lf_AUX_Priority_Sdf_Normalization10_1sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Normalization\"),w(\"\"),[l(\"trans2\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Priorities\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Normalization10_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Group\"),ql(\">\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Normalization\"),w(\"\"),[l(\"trans2\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Priorities\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Normalization10_1 , lf_AUX_Priority_Sdf_Normalization10_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Group\"),ql(\">\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Priority_Sdf_Normalization10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\">\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\">\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[sort(\"Priority\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[sort(\"Priority\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Priority_Sdf_Normalization10 ( ) {
}
ATerm lf_AUX_Priority_Sdf_Normalization10_1 ( ATerm arg0 ) {
{
ATerm tmp [ 26 ] ;
FUNC_ENTRY ( lf_AUX_Priority_Sdf_Normalization10_1sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Normalization10_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
tmp [ 0 ] = ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
tmp [ 3 ] = tmp [ 2 ] ;
tmp [ 4 ] = tmp [ 2 ] ;
while ( not_empty_list ( tmp [ 2 ] ) ) {
tmp [ 5 ] = list_head ( tmp [ 2 ] ) ;
tmp [ 2 ] = list_tail ( tmp [ 2 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , lf3sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
if ( not_empty_list ( tmp [ 7 ] ) ) {
tmp [ 8 ] = list_head ( tmp [ 7 ] ) ;
tmp [ 9 ] = list_tail ( tmp [ 7 ] ) ;
if ( is_single_element ( tmp [ 9 ] ) ) {
tmp [ 10 ] = list_head ( tmp [ 9 ] ) ;
if ( check_sym ( tmp [ 8 ] , ef3sym ) ) {
tmp [ 11 ] = arg_0 ( tmp [ 8 ] ) ;
if ( check_sym ( tmp [ 10 ] , ef3sym ) ) {
tmp [ 12 ] = arg_0 ( tmp [ 10 ] ) ;
tmp [ 13 ] = ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ;
if ( check_sym ( tmp [ 13 ] , ef1sym ) ) {
tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ;
if ( check_sym ( tmp [ 14 ] , lf2sym ) ) {
tmp [ 15 ] = arg_0 ( tmp [ 14 ] ) ;
tmp [ 16 ] = tmp [ 15 ] ;
tmp [ 17 ] = tmp [ 15 ] ;
while ( not_empty_list ( tmp [ 15 ] ) ) {
tmp [ 18 ] = list_head ( tmp [ 15 ] ) ;
tmp [ 15 ] = list_tail ( tmp [ 15 ] ) ;
if ( check_sym ( tmp [ 18 ] , ef2sym ) ) {
tmp [ 19 ] = arg_0 ( tmp [ 18 ] ) ;
if ( check_sym ( tmp [ 19 ] , lf3sym ) ) {
tmp [ 20 ] = arg_0 ( tmp [ 19 ] ) ;
if ( not_empty_list ( tmp [ 20 ] ) ) {
tmp [ 21 ] = list_head ( tmp [ 20 ] ) ;
tmp [ 22 ] = list_tail ( tmp [ 20 ] ) ;
if ( is_single_element ( tmp [ 22 ] ) ) {
tmp [ 23 ] = list_head ( tmp [ 22 ] ) ;
if ( check_sym ( tmp [ 21 ] , ef3sym ) ) {
tmp [ 24 ] = arg_0 ( tmp [ 21 ] ) ;
if ( check_sym ( tmp [ 23 ] , ef3sym ) ) {
tmp [ 25 ] = arg_0 ( tmp [ 23 ] ) ;
if ( term_equal ( tmp [ 12 ] , tmp [ 24 ] ) ) {
if ( ! term_equal ( ( * ef4 ) ( ( * ef2 ) ( lf3 ( cons ( make_list ( ( * ef3 ) ( tmp [ 11 ] ) ) , make_list ( ( * ef3 ) ( tmp [ 25 ] ) ) ) ) ) , ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) , ( * ef5 ) ( ) ) ) {
FUNC_EXIT ( lf_AUX_Priority_Sdf_Normalization10_1 ( ( * ef1 ) ( lf2 ( cons ( make_list ( ( * ef2 ) ( lf3 ( cons ( make_list ( ( * ef3 ) ( tmp [ 11 ] ) ) , make_list ( ( * ef3 ) ( tmp [ 25 ] ) ) ) ) ) ) , make_list ( atmp000 ) ) ) ) ) ) ;
}
}
}
}
}
}
}
}
tmp [ 17 ] = list_tail ( tmp [ 17 ] ) ;
tmp [ 15 ] = tmp [ 17 ] ;
}
}
}
}
}
}
}
}
}
tmp [ 4 ] = list_tail ( tmp [ 4 ] ) ;
tmp [ 2 ] = tmp [ 4 ] ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) ;
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Normalization10_1sym , arg0 ) ) ;
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

