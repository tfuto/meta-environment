#include  "support.h"
static Symbol lf_AUX_MuASF_Basics18_1sym ;
static ATerm lf_AUX_MuASF_Basics18_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_MuASF_Basics18 ( ) {
lf_AUX_MuASF_Basics18_1sym = ATmakeSymbol ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"remove-trans-from-list-id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Basics18_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"remove-trans-from-list-id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Basics18_1 , lf_AUX_MuASF_Basics18_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_MuASF_Basics18 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
void init_AUX_MuASF_Basics18 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
}
ATerm lf_AUX_MuASF_Basics18_1 ( ATerm arg0 ) {
{
ATerm tmp [ 13 ] ;
PROF ( prof_lf_AUX_MuASF_Basics18_1 ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( not_empty_list ( atmp000 ) ) {
tmp [ 0 ] = list_head ( atmp000 ) ;
if ( term_equal ( tmp [ 0 ] , make_char ( 34 ) ) ) {
tmp [ 1 ] = list_tail ( atmp000 ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
tmp [ 2 ] = list_head ( tmp [ 1 ] ) ;
if ( term_equal ( tmp [ 2 ] , make_char ( 123 ) ) ) {
tmp [ 3 ] = list_tail ( tmp [ 1 ] ) ;
{
tmp [ 4 ] = list_prefix ( tmp [ 3 ] ) ;
{
if ( not_empty_list ( tmp [ 3 ] ) ) {
tmp [ 5 ] = list_last ( tmp [ 3 ] ) ;
if ( term_equal ( tmp [ 5 ] , make_char ( 34 ) ) ) {
tmp [ 6 ] = list_prefix ( tmp [ 4 ] ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( list_last ( tmp [ 4 ] ) , make_char ( 125 ) ) ) {
return ( * ef1 ) ( lf2 ( cons ( ( constant0 ? constant0 : ( constant0 = make_list_char ( 34 ) ) ) , cons ( ( constant1 ? constant1 : ( constant1 = make_list_char ( 123 ) ) ) , cons ( make_list ( tmp [ 6 ] ) , ( constant2 ? constant2 : ( constant2 = ( ATerm ) ATmakeList ( 2 , char_table [ 125 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ;
}
}
}
}
if ( term_equal ( tmp [ 5 ] , make_char ( 115 ) ) ) {
tmp [ 6 ] = list_prefix ( tmp [ 4 ] ) ;
if ( not_empty_list ( tmp [ 4 ] ) ) {
if ( term_equal ( list_last ( tmp [ 4 ] ) , make_char ( 110 ) ) ) {
tmp [ 7 ] = list_prefix ( tmp [ 6 ] ) ;
if ( not_empty_list ( tmp [ 6 ] ) ) {
if ( term_equal ( list_last ( tmp [ 6 ] ) , make_char ( 97 ) ) ) {
tmp [ 8 ] = list_prefix ( tmp [ 7 ] ) ;
if ( not_empty_list ( tmp [ 7 ] ) ) {
if ( term_equal ( list_last ( tmp [ 7 ] ) , make_char ( 114 ) ) ) {
tmp [ 9 ] = list_prefix ( tmp [ 8 ] ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
if ( term_equal ( list_last ( tmp [ 8 ] ) , make_char ( 116 ) ) ) {
tmp [ 10 ] = list_prefix ( tmp [ 9 ] ) ;
if ( not_empty_list ( tmp [ 9 ] ) ) {
if ( term_equal ( list_last ( tmp [ 9 ] ) , make_char ( 45 ) ) ) {
tmp [ 11 ] = list_prefix ( tmp [ 10 ] ) ;
if ( not_empty_list ( tmp [ 10 ] ) ) {
if ( term_equal ( list_last ( tmp [ 10 ] ) , make_char ( 34 ) ) ) {
tmp [ 12 ] = list_prefix ( tmp [ 11 ] ) ;
if ( not_empty_list ( tmp [ 12 ] ) ) {
if ( not_empty_list ( tmp [ 11 ] ) ) {
if ( term_equal ( list_last ( tmp [ 11 ] ) , make_char ( 125 ) ) ) {
return ( * ef1 ) ( lf2 ( cons ( ( constant0 ? constant0 : ( constant0 = make_list_char ( 34 ) ) ) , cons ( ( constant1 ? constant1 : ( constant1 = make_list_char ( 123 ) ) ) , cons ( make_list ( tmp [ 12 ] ) , ( constant2 ? constant2 : ( constant2 = ( ATerm ) ATmakeList ( 2 , char_table [ 125 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ;
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
}
}
}
}
}
}
}
}
return make_nf1 ( lf_AUX_MuASF_Basics18_1sym , arg0 ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
PROF ( prof_lf2 ) ;
return make_nf1 ( lf2sym , arg0 ) ;
}

