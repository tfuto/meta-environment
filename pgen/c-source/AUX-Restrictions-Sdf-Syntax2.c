#include  "support.h"
static Symbol lf_AUX_Restrictions_Sdf_Syntax2_1sym ;
static ATerm lf_AUX_Restrictions_Sdf_Syntax2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Restrictions_Sdf_Syntax2 ( ) {
lf_AUX_Restrictions_Sdf_Syntax2_1sym = ATmakeSymbol ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\".\"),w(\"\"),sort(\"Lookaheads\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Restrictions_Sdf_Syntax2_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Lookahead\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\".\"),w(\"\"),sort(\"Lookaheads\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)" ) , lf_AUX_Restrictions_Sdf_Syntax2_1 , lf_AUX_Restrictions_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Lookahead\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Restrictions_Sdf_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Lookahead\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Lookahead\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"[[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"[[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"~\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"~\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Restrictions_Sdf_Syntax2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Restrictions_Sdf_Syntax2_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Restrictions_Sdf_Syntax2_1sym , ATmakeAppl ( lf_AUX_Restrictions_Sdf_Syntax2_1sym , arg0 , arg1 ) ) ;
{
ATerm ltmp [ 2 ] ;
lbl_lf_AUX_Restrictions_Sdf_Syntax2_1 : ltmp [ 0 ] = arg0 ;
ltmp [ 1 ] = arg1 ;
if ( check_sym ( ltmp [ 0 ] , ef4sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef5sym ) ) {
FUNC_EXIT ( ( * ef2 ) ( ltmp [ 0 ] ) ) ;
}
}
}
if ( check_sym ( ltmp [ 1 ] , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( term_equal ( atmp100 , ( constant0 ? constant0 : ( constant0 = ( * ef6 ) ( ( * ef4 ) ( ( * ef5 ) ( ) ) ) ) ) ) ) {
FUNC_EXIT ( ( * ef2 ) ( ltmp [ 0 ] ) ) ;
}
arg1 = ( * ef3 ) ( lf2 ( make_list ( ( * ef2 ) ( atmp100 ) ) ) ) ;
goto lbl_lf_AUX_Restrictions_Sdf_Syntax2_1 ;
}
}
}
}
if ( check_sym ( ltmp [ 1 ] , ef3sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( ! not_empty_list ( atmp100 ) ) {
FUNC_EXIT ( ( * ef2 ) ( ltmp [ 0 ] ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Restrictions_Sdf_Syntax2_1sym , ltmp [ 0 ] , ltmp [ 1 ] ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

