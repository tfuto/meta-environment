#include "support.h"
static Symbol lf_AUX_Locate_Constants11_1sym;
static ATerm lf_AUX_Locate_Constants11_1( ATerm arg1);
static Symbol ef3sym;
static funcptr ef3;
static Symbol ef4sym;
static funcptr ef4;
static Symbol ef5sym;
static funcptr ef5;
static Symbol ef6sym;
static funcptr ef6;
static Symbol lf3sym;
static ATerm lf3( ATerm arg1);
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef2sym;
static funcptr ef2;
static Symbol ef7sym;
static funcptr ef7;
static Symbol ef8sym;
static funcptr ef8;
static Symbol lf2sym;
static ATerm lf2( ATerm arg1);
static Symbol ef9sym;
static funcptr ef9;
static Symbol ef10sym;
static funcptr ef10;
void register_AUX_Locate_Constants11( ) {
lf_AUX_Locate_Constants11_1sym= ATmakeSymbol( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"is-make-char-function-call\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 1 , ATtrue);
ATprotectSymbol( lf_AUX_Locate_Constants11_1sym);
lf3sym= ATmakeSymbol( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue);
ATprotectSymbol( lf3sym);
lf2sym= ATmakeSymbol( "listtype(sort(\"CHAR\"))" , 1 , ATtrue);
ATprotectSymbol( lf2sym);
register_prod( ATparse( "prod(id(\"Locate-Constants\"),w(\"\"),[l(\"is-make-char-function-call\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)") , lf_AUX_Locate_Constants11_1 , lf_AUX_Locate_Constants11_1sym);
register_prod( ATparse( "listtype(sort(\"CHAR\"))") , lf2 , lf2sym);
register_prod( ATparse( "listtype(sort(\"Expression\"),ql(\",\"))") , lf3 , lf3sym);
}
void resolve_AUX_Locate_Constants11( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef4= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef5= lookup_func( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef6= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef7= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef8= lookup_func( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)"));
ef8sym= lookup_sym( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)"));
ef9= lookup_func( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef9sym= lookup_sym( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef10= lookup_func( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef10sym= lookup_sym( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
}
static ATerm constant0= NULL;
static ATerm constant1= NULL;
void init_AUX_Locate_Constants11( ) {
ATprotect( & constant0);
ATprotect( & constant1);
}
ATerm lf_AUX_Locate_Constants11_1( ATerm arg0) {
{
ATerm tmp[14];
PROF( prof_lf_AUX_Locate_Constants11_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef2sym)) {
{
ATerm atmp000= arg_0( atmp00);
if( check_sym( atmp000 , ef3sym)) {
{
ATerm atmp0000= arg_0( atmp000);
if( check_sym( atmp0000 , ef4sym)) {
{
ATerm atmp00000= arg_0( atmp0000);
if( check_sym( atmp00000 , ef5sym)) {
{
ATerm atmp000000= arg_0( atmp00000);
if( check_sym( atmp000000 , lf2sym)) {
{
ATerm atmp0000000= arg_0( atmp000000);
{
ATerm atmp0001= arg_1( atmp000);
if( check_sym( atmp0001 , ef6sym)) {
{
ATerm atmp00010= arg_0( atmp0001);
if( check_sym( atmp00010 , lf3sym)) {
{
ATerm atmp000100= arg_0( atmp00010);
if( not_empty_list( atmp0000000)) {
if( term_equal( list_head( atmp0000000) , make_char( 109))) {
tmp[ 0]= list_tail( atmp0000000);
if( not_empty_list( tmp[ 0])) {
if( term_equal( list_head( tmp[ 0]) , make_char( 97))) {
tmp[ 1]= list_tail( tmp[ 0]);
if( not_empty_list( tmp[ 1])) {
if( term_equal( list_head( tmp[ 1]) , make_char( 107))) {
tmp[ 2]= list_tail( tmp[ 1]);
if( not_empty_list( tmp[ 2])) {
if( term_equal( list_head( tmp[ 2]) , make_char( 101))) {
tmp[ 3]= list_tail( tmp[ 2]);
if( not_empty_list( tmp[ 3])) {
if( term_equal( list_head( tmp[ 3]) , make_char( 95))) {
tmp[ 4]= list_tail( tmp[ 3]);
if( not_empty_list( tmp[ 4])) {
if( term_equal( list_head( tmp[ 4]) , make_char( 99))) {
tmp[ 5]= list_tail( tmp[ 4]);
if( not_empty_list( tmp[ 5])) {
if( term_equal( list_head( tmp[ 5]) , make_char( 104))) {
tmp[ 6]= list_tail( tmp[ 5]);
if( not_empty_list( tmp[ 6])) {
if( term_equal( list_head( tmp[ 6]) , make_char( 97))) {
tmp[ 7]= list_tail( tmp[ 6]);
if( is_single_element( tmp[ 7])) {
if( term_equal( list_head( tmp[ 7]) , make_char( 114))) {
if( is_single_element( atmp000100)) {
tmp[ 8]= list_head( atmp000100);
if( check_sym( tmp[ 8] , ef1sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
if( check_sym( tmp[ 9] , ef2sym)) {
tmp[ 10]= arg_0( tmp[ 9]);
if( check_sym( tmp[ 10] , ef7sym)) {
tmp[ 11]= arg_0( tmp[ 10]);
if( check_sym( tmp[ 11] , ef8sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
if( check_sym( tmp[ 12] , lf2sym)) {
tmp[ 13]= arg_0( tmp[ 12]);
return ( constant0? constant0: ( constant0= ( * ef9)( )));
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
return ( constant1? constant1: ( constant1= ( * ef10)( )));
}
}
ATerm lf2( ATerm arg0) {
PROF( prof_lf2);
return make_nf1( lf2sym , arg0);
}
ATerm lf3( ATerm arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}

