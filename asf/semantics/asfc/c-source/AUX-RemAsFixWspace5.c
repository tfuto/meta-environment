#include "support.h"
static Symbol lf_AUX_RemAsFixWspace5_1sym;
static ATerm lf_AUX_RemAsFixWspace5_1( ATerm arg1);
static Symbol ef2sym;
static funcptr ef2;
static Symbol lf2sym;
static ATerm lf2( ATerm arg1);
static Symbol ef7sym;
static funcptr ef7;
static Symbol ef5sym;
static funcptr ef5;
static Symbol ef8sym;
static funcptr ef8;
static Symbol ef6sym;
static funcptr ef6;
static Symbol ef11sym;
static funcptr ef11;
static Symbol ef9sym;
static funcptr ef9;
static Symbol ef10sym;
static funcptr ef10;
static Symbol ef3sym;
static funcptr ef3;
static Symbol ef4sym;
static funcptr ef4;
static Symbol ef1sym;
static funcptr ef1;
void register_AUX_RemAsFixWspace5( ) {
lf_AUX_RemAsFixWspace5_1sym= ATmakeSymbol( "prod(id(\"RemAsFixWspace\"),w(\"\"),[l(\"change-ws\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"
 , 1 , ATtrue);
ATprotectSymbol( lf_AUX_RemAsFixWspace5_1sym);
lf2sym= ATmakeSymbol( "listtype(sort(\"CHAR\"))" , 1 , ATtrue);
ATprotectSymbol( lf2sym);
register_prod( ATparse( "prod(id(\"RemAsFixWspace\"),w(\"\"),[l(\"change-ws\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)") , lf_AUX_RemAsFixWspace5_1 , lf_AUX_RemAsFixWspace5_1sym);
register_prod( ATparse( "listtype(sort(\"CHAR\"))") , lf2 , lf2sym);
}
void resolve_AUX_RemAsFixWspace5( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef4= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef5= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef6= lookup_func( ATreadFromString( "prod(id(\"ParseTrees\"),w(\"\"),[ql(\"w\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( ATreadFromString( "prod(id(\"ParseTrees\"),w(\"\"),[ql(\"w\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"));
ef7= lookup_func( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)"));
ef8= lookup_func( ATreadFromString( "prod(id(\"ATermLists\"),w(\"\"),[l(\"aterms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef8sym= lookup_sym( ATreadFromString( "prod(id(\"ATermLists\"),w(\"\"),[l(\"aterms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef9= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef9sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef10= lookup_func( ATreadFromString( "prod(id(\"RemAsFixWspace\"),w(\"\"),[l(\"change-ws-trms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef10sym= lookup_sym( ATreadFromString( "prod(id(\"RemAsFixWspace\"),w(\"\"),[l(\"change-ws-trms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef11= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef11sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
}
static ATerm constant0= NULL;
void init_AUX_RemAsFixWspace5( ) {
ATprotect( & constant0);
}
ATerm lf_AUX_RemAsFixWspace5_1( ATerm arg0) {
{
ATerm tmp[1];
PROF( prof_lf_AUX_RemAsFixWspace5_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef2sym)) {
{
ATerm atmp000= arg_0( atmp00);
return ( * ef3)( ( * ef4)( arg0));
}
}
{
ATerm atmp00= arg_0( arg0);
return ( * ef3)( ( * ef4)( arg0));
}
}
}
if( check_sym( arg0 , ef5sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef6sym)) {
{
ATerm atmp01= arg_1( arg0);
return ( constant0? constant0: ( constant0= ( * ef3)( ( * ef4)( ( * ef5)( ( * ef6)( ) , ( * ef4)( ( * ef1)( ( * ef2)( ( * ef7)( lf2( (ATerm) ATmakeList( 2 , char_table[ 34] , char_table[ 34])))))))))));
}
}
{
ATerm atmp00= arg_0( arg0);
{
ATerm atmp01= arg_1( arg0);
if( ! term_equal( atmp00 , ( * ef6)( ))) {
tmp[ 0]= ( * ef10)( ( * ef3)( atmp01));
return ( * ef3)( ( * ef4)( ( * ef5)( atmp00 , ( * ef8)( ( * ef9)( tmp[ 0])))));
}
}
}
}
}
if( check_sym( arg0 , ef9sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef11sym)) {
return ( * ef3)( ( * ef4)( arg0));
}
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef3sym)) {
{
ATerm atmp000= arg_0( atmp00);
return ( * ef3)( ( * ef4)( ( * ef9)( ( * ef10)( ( * ef3)( atmp000)))));
}
}
}
}
}
return make_nf1( lf_AUX_RemAsFixWspace5_1sym , arg0);
}
}
ATerm lf2( ATerm arg0) {
PROF( prof_lf2);
return make_nf1( lf2sym , arg0);
}

