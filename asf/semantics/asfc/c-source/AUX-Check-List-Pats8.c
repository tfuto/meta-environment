#include  "support.h"
static Symbol lf_AUX_Check_List_Pats8_1sym ;
static ATerm lf_AUX_Check_List_Pats8_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
void register_AUX_Check_List_Pats8 ( ) {
lf_AUX_Check_List_Pats8_1sym = ATmakeSymbol ( "prod(id(\"Check-List-Pats\"),w(\"\"),[l(\"is-list-elem-list-elem-list\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Check_List_Pats8_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Check-List-Pats\"),w(\"\"),[l(\"is-list-elem-list-elem-list\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_Check_List_Pats8_1 , lf_AUX_Check_List_Pats8_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Term\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Check_List_Pats8 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Check_List_Pats8 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Check_List_Pats8_1 ( ATerm arg0 ) {
{
ATerm tmp [ 39 ] ;
PROF ( prof_lf_AUX_Check_List_Pats8_1 ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf3sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( not_empty_list ( atmp0000 ) ) {
if ( term_equal ( list_head ( atmp0000 ) , make_char ( 99 ) ) ) {
tmp [ 0 ] = list_tail ( atmp0000 ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( term_equal ( list_head ( tmp [ 0 ] ) , make_char ( 111 ) ) ) {
tmp [ 1 ] = list_tail ( tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_head ( tmp [ 1 ] ) , make_char ( 110 ) ) ) {
tmp [ 2 ] = list_tail ( tmp [ 1 ] ) ;
if ( is_single_element ( tmp [ 2 ] ) ) {
if ( term_equal ( list_head ( tmp [ 2 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( atmp010 ) ) {
tmp [ 3 ] = list_head ( atmp010 ) ;
tmp [ 4 ] = list_tail ( atmp010 ) ;
if ( is_single_element ( tmp [ 4 ] ) ) {
tmp [ 5 ] = list_head ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef1sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
tmp [ 7 ] = arg_1 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , ef2sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 6 ] ) ;
if ( check_sym ( tmp [ 8 ] , lf2sym ) ) {
tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ;
if ( check_sym ( tmp [ 7 ] , lf3sym ) ) {
tmp [ 10 ] = arg_0 ( tmp [ 7 ] ) ;
if ( not_empty_list ( tmp [ 9 ] ) ) {
if ( term_equal ( list_head ( tmp [ 9 ] ) , make_char ( 99 ) ) ) {
tmp [ 11 ] = list_tail ( tmp [ 9 ] ) ;
if ( not_empty_list ( tmp [ 11 ] ) ) {
if ( term_equal ( list_head ( tmp [ 11 ] ) , make_char ( 111 ) ) ) {
tmp [ 12 ] = list_tail ( tmp [ 11 ] ) ;
if ( not_empty_list ( tmp [ 12 ] ) ) {
if ( term_equal ( list_head ( tmp [ 12 ] ) , make_char ( 110 ) ) ) {
tmp [ 13 ] = list_tail ( tmp [ 12 ] ) ;
if ( is_single_element ( tmp [ 13 ] ) ) {
if ( term_equal ( list_head ( tmp [ 13 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( tmp [ 10 ] ) ) {
tmp [ 14 ] = list_head ( tmp [ 10 ] ) ;
tmp [ 15 ] = list_tail ( tmp [ 10 ] ) ;
if ( is_single_element ( tmp [ 15 ] ) ) {
tmp [ 16 ] = list_head ( tmp [ 15 ] ) ;
if ( check_sym ( tmp [ 16 ] , ef1sym ) ) {
tmp [ 17 ] = arg_0 ( tmp [ 16 ] ) ;
tmp [ 18 ] = arg_1 ( tmp [ 16 ] ) ;
if ( check_sym ( tmp [ 17 ] , ef2sym ) ) {
tmp [ 19 ] = arg_0 ( tmp [ 17 ] ) ;
if ( check_sym ( tmp [ 19 ] , lf2sym ) ) {
tmp [ 20 ] = arg_0 ( tmp [ 19 ] ) ;
if ( check_sym ( tmp [ 18 ] , lf3sym ) ) {
tmp [ 21 ] = arg_0 ( tmp [ 18 ] ) ;
if ( not_empty_list ( tmp [ 20 ] ) ) {
if ( term_equal ( list_head ( tmp [ 20 ] ) , make_char ( 99 ) ) ) {
tmp [ 22 ] = list_tail ( tmp [ 20 ] ) ;
if ( not_empty_list ( tmp [ 22 ] ) ) {
if ( term_equal ( list_head ( tmp [ 22 ] ) , make_char ( 111 ) ) ) {
tmp [ 23 ] = list_tail ( tmp [ 22 ] ) ;
if ( not_empty_list ( tmp [ 23 ] ) ) {
if ( term_equal ( list_head ( tmp [ 23 ] ) , make_char ( 110 ) ) ) {
tmp [ 24 ] = list_tail ( tmp [ 23 ] ) ;
if ( is_single_element ( tmp [ 24 ] ) ) {
if ( term_equal ( list_head ( tmp [ 24 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( tmp [ 21 ] ) ) {
tmp [ 25 ] = list_head ( tmp [ 21 ] ) ;
tmp [ 26 ] = list_tail ( tmp [ 21 ] ) ;
if ( is_single_element ( tmp [ 26 ] ) ) {
tmp [ 27 ] = list_head ( tmp [ 26 ] ) ;
if ( check_sym ( tmp [ 27 ] , ef1sym ) ) {
tmp [ 28 ] = arg_0 ( tmp [ 27 ] ) ;
tmp [ 29 ] = arg_1 ( tmp [ 27 ] ) ;
if ( check_sym ( tmp [ 28 ] , ef2sym ) ) {
tmp [ 30 ] = arg_0 ( tmp [ 28 ] ) ;
if ( check_sym ( tmp [ 30 ] , lf2sym ) ) {
tmp [ 31 ] = arg_0 ( tmp [ 30 ] ) ;
if ( check_sym ( tmp [ 29 ] , lf3sym ) ) {
tmp [ 32 ] = arg_0 ( tmp [ 29 ] ) ;
if ( not_empty_list ( tmp [ 31 ] ) ) {
if ( term_equal ( list_head ( tmp [ 31 ] ) , make_char ( 99 ) ) ) {
tmp [ 33 ] = list_tail ( tmp [ 31 ] ) ;
if ( not_empty_list ( tmp [ 33 ] ) ) {
if ( term_equal ( list_head ( tmp [ 33 ] ) , make_char ( 111 ) ) ) {
tmp [ 34 ] = list_tail ( tmp [ 33 ] ) ;
if ( not_empty_list ( tmp [ 34 ] ) ) {
if ( term_equal ( list_head ( tmp [ 34 ] ) , make_char ( 110 ) ) ) {
tmp [ 35 ] = list_tail ( tmp [ 34 ] ) ;
if ( is_single_element ( tmp [ 35 ] ) ) {
if ( term_equal ( list_head ( tmp [ 35 ] ) , make_char ( 115 ) ) ) {
if ( not_empty_list ( tmp [ 32 ] ) ) {
tmp [ 36 ] = list_head ( tmp [ 32 ] ) ;
tmp [ 37 ] = list_tail ( tmp [ 32 ] ) ;
if ( is_single_element ( tmp [ 37 ] ) ) {
tmp [ 38 ] = list_head ( tmp [ 37 ] ) ;
if ( term_equal ( ( * ef4 ) ( tmp [ 3 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef3 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( tmp [ 14 ] ) , ( constant1 ? constant1 : ( constant1 = ( * ef5 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( tmp [ 25 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef3 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( tmp [ 36 ] ) , ( constant1 ? constant1 : ( constant1 = ( * ef5 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( tmp [ 38 ] ) , ( constant0 ? constant0 : ( constant0 = ( * ef3 ) ( ) ) ) ) ) {
return ( constant0 ? constant0 : ( constant0 = ( * ef3 ) ( ) ) ) ;
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
return ( constant1 ? constant1 : ( constant1 = ( * ef5 ) ( ) ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
PROF ( prof_lf3 ) ;
return make_nf1 ( lf3sym , arg0 ) ;
}
ATerm lf2 ( ATerm arg0 ) {
PROF ( prof_lf2 ) ;
return make_nf1 ( lf2sym , arg0 ) ;
}

