#include  "support.h"
static Symbol lf_AUX_Basic_Integers5_1sym ;
static ATerm lf_AUX_Basic_Integers5_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Basic_Integers5 ( ) {
lf_AUX_Basic_Integers5_1sym = ATmakeSymbol ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Integers5_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Basic_Integers5_1 , lf_AUX_Basic_Integers5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Basic_Integers5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[ql(\"-\"),w(\"\"),sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[ql(\"-\"),w(\"\"),sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
static ATerm constant3 = NULL ;
static ATerm constant4 = NULL ;
static ATerm constant5 = NULL ;
static ATerm constant6 = NULL ;
static ATerm constant7 = NULL ;
static ATerm constant8 = NULL ;
static ATerm constant9 = NULL ;
static ATerm constant10 = NULL ;
static ATerm constant11 = NULL ;
static ATerm constant12 = NULL ;
static ATerm constant13 = NULL ;
static ATerm constant14 = NULL ;
static ATerm constant15 = NULL ;
static ATerm constant16 = NULL ;
static ATerm constant17 = NULL ;
void init_AUX_Basic_Integers5 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
ATprotect ( & constant3 ) ;
ATprotect ( & constant4 ) ;
ATprotect ( & constant5 ) ;
ATprotect ( & constant6 ) ;
ATprotect ( & constant7 ) ;
ATprotect ( & constant8 ) ;
ATprotect ( & constant9 ) ;
ATprotect ( & constant10 ) ;
ATprotect ( & constant11 ) ;
ATprotect ( & constant12 ) ;
ATprotect ( & constant13 ) ;
ATprotect ( & constant14 ) ;
ATprotect ( & constant15 ) ;
ATprotect ( & constant16 ) ;
ATprotect ( & constant17 ) ;
}
ATerm lf_AUX_Basic_Integers5_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 16 ] ;
FUNC_ENTRY ( lf_AUX_Basic_Integers5_1sym , ATmakeAppl ( lf_AUX_Basic_Integers5_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef5sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( atmp0000 , lf2sym ) ) {
{
ATerm atmp00000 = arg_0 ( atmp0000 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , ef5sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
if ( check_sym ( atmp1000 , lf2sym ) ) {
{
ATerm atmp10000 = arg_0 ( atmp1000 ) ;
if ( is_single_element ( atmp00000 ) ) {
tmp [ 0 ] = list_head ( atmp00000 ) ;
if ( term_equal ( tmp [ 0 ] , make_char ( 49 ) ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 1 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 1 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant4 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 50 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant5 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 51 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant6 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 52 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant7 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 53 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 1 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 54 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 1 ] = make_char ( 50 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 1 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 2 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 2 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 54 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant5 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 51 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant6 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 52 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 2 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant7 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 53 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 2 ] = make_char ( 51 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 2 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 3 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 3 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant6 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 52 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant7 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 53 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 3 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 54 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 3 ] = make_char ( 52 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 3 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 4 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 4 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant7 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 53 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 54 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 4 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 4 ] = make_char ( 53 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 4 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 5 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 5 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant12 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 52 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 54 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 5 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 5 ] = make_char ( 54 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 5 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 6 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 6 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant12 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 52 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant13 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 53 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 55 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 6 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
}
}
tmp [ 6 ] = make_char ( 55 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 6 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 7 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 7 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant12 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 52 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant13 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 53 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant14 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 54 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 56 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 7 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
}
}
tmp [ 7 ] = make_char ( 56 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 7 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 8 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 8 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant12 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 52 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant13 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 53 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant14 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 54 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant15 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 55 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( make_char ( 57 ) ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 8 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
}
}
tmp [ 8 ] = make_char ( 57 ) ;
if ( term_equal ( tmp [ 0 ] , tmp [ 8 ] ) ) {
if ( is_single_element ( atmp10000 ) ) {
tmp [ 9 ] = list_head ( atmp10000 ) ;
if ( term_equal ( tmp [ 9 ] , make_char ( 52 ) ) ) {
FUNC_EXIT_CONST ( constant11 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 51 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 53 ) ) ) {
FUNC_EXIT_CONST ( constant12 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 52 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 54 ) ) ) {
FUNC_EXIT_CONST ( constant13 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 53 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 55 ) ) ) {
FUNC_EXIT_CONST ( constant14 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 54 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 56 ) ) ) {
FUNC_EXIT_CONST ( constant15 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 55 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 57 ) ) ) {
FUNC_EXIT_CONST ( constant16 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 56 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 49 ) ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 48 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 50 ) ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 49 ] ) ) ) ) ) ) ;
}
if ( term_equal ( tmp [ 9 ] , make_char ( 51 ) ) ) {
FUNC_EXIT_CONST ( constant10 , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 49 ] , char_table [ 50 ] ) ) ) ) ) ) ;
}
}
}
}
{
if ( not_empty_list ( atmp00000 ) ) {
tmp [ 0 ] = list_prefix ( atmp00000 ) ;
tmp [ 1 ] = list_last ( atmp00000 ) ;
if ( not_empty_list ( atmp10000 ) ) {
tmp [ 2 ] = list_prefix ( atmp10000 ) ;
if ( not_empty_list ( tmp [ 2 ] ) ) {
tmp [ 3 ] = list_last ( atmp10000 ) ;
tmp [ 4 ] = lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef1sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , ef5sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
if ( check_sym ( tmp [ 7 ] , lf2sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
tmp [ 9 ] = list_prefix ( tmp [ 8 ] ) ;
tmp [ 10 ] = list_last ( tmp [ 8 ] ) ;
tmp [ 11 ] = lf_AUX_Basic_Integers5_1 ( lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( ( constant17 ? constant17 : ( constant17 = make_list ( make_char ( 48 ) ) ) ) , make_list ( tmp [ 0 ] ) ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( ( constant17 ? constant17 : ( constant17 = make_list ( make_char ( 48 ) ) ) ) , make_list ( tmp [ 9 ] ) ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 11 ] , ef1sym ) ) {
tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ;
if ( check_sym ( tmp [ 12 ] , ef2sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
if ( check_sym ( tmp [ 13 ] , ef5sym ) ) {
tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ;
if ( check_sym ( tmp [ 14 ] , lf2sym ) ) {
tmp [ 15 ] = arg_0 ( tmp [ 14 ] ) ;
if ( not_empty_list ( tmp [ 15 ] ) ) {
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( make_list ( tmp [ 15 ] ) , make_list ( tmp [ 10 ] ) ) ) ) ) ) ) ;
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
if ( not_empty_list ( tmp [ 0 ] ) ) {
tmp [ 1 ] = list_last ( atmp00000 ) ;
{
if ( not_empty_list ( atmp10000 ) ) {
tmp [ 2 ] = list_prefix ( atmp10000 ) ;
tmp [ 3 ] = list_last ( atmp10000 ) ;
tmp [ 4 ] = lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef1sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , ef5sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
if ( check_sym ( tmp [ 7 ] , lf2sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
tmp [ 9 ] = list_prefix ( tmp [ 8 ] ) ;
tmp [ 10 ] = list_last ( tmp [ 8 ] ) ;
tmp [ 11 ] = lf_AUX_Basic_Integers5_1 ( lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 0 ] ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( ( constant17 ? constant17 : ( constant17 = make_list ( make_char ( 48 ) ) ) ) , make_list ( tmp [ 2 ] ) ) ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( ( constant17 ? constant17 : ( constant17 = make_list ( make_char ( 48 ) ) ) ) , make_list ( tmp [ 9 ] ) ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 11 ] , ef1sym ) ) {
tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ;
if ( check_sym ( tmp [ 12 ] , ef2sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
if ( check_sym ( tmp [ 13 ] , ef5sym ) ) {
tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ;
if ( check_sym ( tmp [ 14 ] , lf2sym ) ) {
tmp [ 15 ] = arg_0 ( tmp [ 14 ] ) ;
if ( not_empty_list ( tmp [ 15 ] ) ) {
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( make_list ( tmp [ 15 ] ) , make_list ( tmp [ 10 ] ) ) ) ) ) ) ) ;
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
if ( not_empty_list ( tmp [ 2 ] ) ) {
tmp [ 3 ] = list_last ( atmp10000 ) ;
tmp [ 4 ] = lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 3 ] ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 4 ] , ef1sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , ef5sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
if ( check_sym ( tmp [ 7 ] , lf2sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 7 ] ) ;
if ( not_empty_list ( tmp [ 8 ] ) ) {
tmp [ 9 ] = list_prefix ( tmp [ 8 ] ) ;
tmp [ 10 ] = list_last ( tmp [ 8 ] ) ;
tmp [ 11 ] = lf_AUX_Basic_Integers5_1 ( lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 0 ] ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) , ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( ( constant17 ? constant17 : ( constant17 = make_list ( make_char ( 48 ) ) ) ) , make_list ( tmp [ 9 ] ) ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 11 ] , ef1sym ) ) {
tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ;
if ( check_sym ( tmp [ 12 ] , ef2sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
if ( check_sym ( tmp [ 13 ] , ef5sym ) ) {
tmp [ 14 ] = arg_0 ( tmp [ 13 ] ) ;
if ( check_sym ( tmp [ 14 ] , lf2sym ) ) {
tmp [ 15 ] = arg_0 ( tmp [ 14 ] ) ;
if ( not_empty_list ( tmp [ 15 ] ) ) {
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef5 ) ( lf2 ( cons ( make_list ( tmp [ 15 ] ) , make_list ( tmp [ 10 ] ) ) ) ) ) ) ) ;
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
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( is_single_element ( atmp00000 ) ) {
if ( term_equal ( list_head ( atmp00000 ) , make_char ( 48 ) ) ) {
FUNC_EXIT ( arg1 ) ;
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
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
FUNC_EXIT ( ( * ef4 ) ( arg0 , ( * ef1 ) ( ( * ef2 ) ( atmp100 ) ) ) ) ;
}
}
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , ef5sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
if ( check_sym ( atmp1000 , lf2sym ) ) {
{
ATerm atmp10000 = arg_0 ( atmp1000 ) ;
if ( is_single_element ( atmp10000 ) ) {
if ( term_equal ( list_head ( atmp10000 ) , make_char ( 48 ) ) ) {
FUNC_EXIT ( arg0 ) ;
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
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef3sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
FUNC_EXIT ( ( * ef4 ) ( arg1 , ( * ef1 ) ( ( * ef2 ) ( atmp000 ) ) ) ) ;
}
}
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
tmp [ 0 ] = lf_AUX_Basic_Integers5_1 ( ( * ef1 ) ( ( * ef2 ) ( atmp000 ) ) , ( * ef1 ) ( ( * ef2 ) ( atmp100 ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef3 ) ( tmp [ 2 ] ) ) ) ;
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
FUNC_EXIT ( make_nf2 ( lf_AUX_Basic_Integers5_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

