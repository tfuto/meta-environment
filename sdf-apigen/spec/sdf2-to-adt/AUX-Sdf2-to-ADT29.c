/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Sdf2_to_ADT29_1sym ;
static ATerm lf_AUX_Sdf2_to_ADT29_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef10sym ;
static funcptr ef10 ;
void register_AUX_Sdf2_to_ADT29 ( ) {
lf_AUX_Sdf2_to_ADT29_1sym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-attr\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT29_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"ATerm\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"build-asfix-attr\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT29_1 , lf_AUX_Sdf2_to_ADT29_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ATerm\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Sdf2_to_ADT29 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"cons\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"cons\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Cons-Options\"),w(\"\"),[ql(\"cons-expand\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Cons-Options\"),w(\"\"),[ql(\"cons-expand\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"afun\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Cons-Options\"),w(\"\"),[ql(\"cons-remove\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Cons-Options\"),w(\"\"),[ql(\"cons-remove\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"prefer\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"prefer\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Syntax\"),w(\"\"),[sort(\"AT-Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"constructor\")],w(\"\"),l(\"}\")))" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"at-literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AT-Literal\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"avoid\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"avoid\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"traverse\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"traverse\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"memo\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"memo\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"constructor\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Label-Sdf-Syntax\"),w(\"\"),[ql(\"constructor\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"bracket\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"bracket\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Associativity\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Associativity\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"right\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"right\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"left\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"left\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) ) ;
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
void init_AUX_Sdf2_to_ADT29 ( ) {
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
}
ATerm lf_AUX_Sdf2_to_ADT29_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Sdf2_to_ADT29_1sym , ATmakeAppl ( lf_AUX_Sdf2_to_ADT29_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , ef2sym ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( ( ATerm ) ATmakeList ( 4 , char_table [ 99 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 115 ] ) ) ) , lf2 ( make_list ( atmp00 ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg1 , ef6sym ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef3 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef7sym ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 8 , char_table [ 34 ] , char_table [ 112 ] , char_table [ 114 ] , char_table [ 101 ] , char_table [ 102 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef11sym ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 34 ] , char_table [ 97 ] , char_table [ 118 ] , char_table [ 111 ] , char_table [ 105 ] , char_table [ 100 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef12sym ) ) {
FUNC_EXIT_CONST ( constant3 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 10 , char_table [ 34 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 97 ] , char_table [ 118 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 115 ] , char_table [ 101 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef13sym ) ) {
FUNC_EXIT_CONST ( constant4 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 34 ] , char_table [ 109 ] , char_table [ 101 ] , char_table [ 109 ] , char_table [ 111 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef14sym ) ) {
FUNC_EXIT_CONST ( constant5 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 13 , char_table [ 34 ] , char_table [ 99 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 115 ] , char_table [ 116 ] , char_table [ 114 ] , char_table [ 117 ] , char_table [ 99 ] , char_table [ 116 ] , char_table [ 111 ] , char_table [ 114 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef15sym ) ) {
FUNC_EXIT_CONST ( constant6 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 9 , char_table [ 34 ] , char_table [ 98 ] , char_table [ 114 ] , char_table [ 97 ] , char_table [ 99 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 116 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
if ( check_sym ( arg0 , ef16sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef17sym ) ) {
FUNC_EXIT_CONST ( constant7 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 34 ] , char_table [ 97 ] , char_table [ 115 ] , char_table [ 115 ] , char_table [ 111 ] , char_table [ 99 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef18sym ) ) {
FUNC_EXIT_CONST ( constant8 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 7 , char_table [ 34 ] , char_table [ 114 ] , char_table [ 105 ] , char_table [ 103 ] , char_table [ 104 ] , char_table [ 116 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef19sym ) ) {
FUNC_EXIT_CONST ( constant9 , ( * ef3 ) ( lf2 ( make_list ( make_nf2 ( ef4sym , ( * ef5 ) ( lf3 ( make_list ( make_char ( 108 ) ) ) ) , lf2 ( make_list ( make_nf1 ( ef8sym , make_nf1 ( ef9sym , ( * ef10 ) ( lf3 ( ( ATerm ) ATmakeList ( 6 , char_table [ 34 ] , char_table [ 108 ] , char_table [ 101 ] , char_table [ 102 ] , char_table [ 116 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ) ) ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Sdf2_to_ADT29_1sym , arg0 , arg1 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

