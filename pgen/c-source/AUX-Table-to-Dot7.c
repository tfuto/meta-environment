#include  "support.h"
static Symbol lf_AUX_Table_to_Dot7_1sym ;
static ATerm lf_AUX_Table_to_Dot7_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
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
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol ef24sym ;
static funcptr ef24 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef25sym ;
static funcptr ef25 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Table_to_Dot7 ( ) {
lf_AUX_Table_to_Dot7_1sym = ATmakeSymbol ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"labelsym\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Table_to_Dot7_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"labelsym\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) , lf_AUX_Table_to_Dot7_1 , lf_AUX_Table_to_Dot7_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Table_to_Dot7 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"id\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"id\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"LAYOUT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"LAYOUT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-VAR\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"-VAR\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"*\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"}\"),w(\"\"),ql(\"+\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"label\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Symbols\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"label\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Symbols\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"?\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"Regular-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"?\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef24 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef24sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef25 = lookup_func ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"label\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
ef25sym = lookup_sym ( ATreadFromString ( "prod(id(\"Table-to-Dot\"),w(\"\"),[l(\"label\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
void init_AUX_Table_to_Dot7 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
}
ATerm lf_AUX_Table_to_Dot7_1 ( ATerm arg0 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Table_to_Dot7_1sym , ATmakeAppl ( lf_AUX_Table_to_Dot7_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( not_empty_list ( atmp0000 ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list ( atmp0000 ) , make_list ( make_char ( 34 ) ) ) ) ) ) ) ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef4sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef5sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( not_empty_list ( atmp0000 ) ) {
if ( term_equal ( list_head ( atmp0000 ) , make_char ( 34 ) ) ) {
tmp [ 0 ] = list_tail ( atmp0000 ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
tmp [ 1 ] = list_prefix ( tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 1 ] ) ) {
if ( term_equal ( list_last ( tmp [ 0 ] ) , make_char ( 34 ) ) ) {
FUNC_EXIT ( ( * ef3 ) ( lf2 ( cons ( make_list_char ( 34 ) , cons ( make_list_char ( 92 ) , cons ( make_list_char ( 34 ) , cons ( make_list ( tmp [ 1 ] ) , ( ATerm ) ATmakeList ( 3 , char_table [ 92 ] , char_table [ 34 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ;
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
if ( check_sym ( arg0 , ef6sym ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 8 , char_table [ 34 ] , char_table [ 76 ] , char_table [ 65 ] , char_table [ 89 ] , char_table [ 79 ] , char_table [ 85 ] , char_table [ 84 ] , char_table [ 34 ] ) ) ) ) ;
}
if ( check_sym ( arg0 , ef7sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 60 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 6 , char_table [ 34 ] , char_table [ 45 ] , char_table [ 67 ] , char_table [ 70 ] , char_table [ 62 ] , char_table [ 34 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef9sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 60 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 34 ] , char_table [ 45 ] , char_table [ 76 ] , char_table [ 69 ] , char_table [ 88 ] , char_table [ 62 ] , char_table [ 34 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef10sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 60 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 7 , char_table [ 34 ] , char_table [ 45 ] , char_table [ 86 ] , char_table [ 65 ] , char_table [ 82 ] , char_table [ 62 ] , char_table [ 34 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef11sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 42 ] , char_table [ 34 ] ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef12sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 43 ] , char_table [ 34 ] ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef13sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 123 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 32 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp01 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 125 ] , char_table [ 42 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef14sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 123 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 32 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp01 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 125 ] , char_table [ 43 ] , char_table [ 34 ] ) ) ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef15sym ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 40 ] , char_table [ 41 ] , char_table [ 34 ] ) ) ) ) ;
}
if ( check_sym ( arg0 , ef16sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf3sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( not_empty_list ( atmp010 ) ) {
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 40 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( ( * ef17 ) ( ( * ef18 ) ( lf3 ( cons ( make_list ( atmp00 ) , make_list ( atmp010 ) ) ) ) ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 41 ] , char_table [ 34 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef19sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 124 ] , char_table [ 34 ] ) ) ) , lf_AUX_Table_to_Dot7_1 ( atmp01 ) ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef20sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Table_to_Dot7_1 ( atmp00 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 63 ] , char_table [ 34 ] ) ) ) ) ) ;
}
}
if ( check_sym ( arg0 , ef21sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef22sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef23sym ) ) {
FUNC_EXIT_CONST ( constant2 , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 91 ] , char_table [ 93 ] , char_table [ 34 ] ) ) ) ) ;
}
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef24sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef8 ) ( ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 91 ] , char_table [ 34 ] ) ) ) , ( * ef8 ) ( ( * ef25 ) ( atmp0000 ) , ( * ef3 ) ( lf2 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 93 ] , char_table [ 34 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Table_to_Dot7_1sym , arg0 ) ) ;
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

