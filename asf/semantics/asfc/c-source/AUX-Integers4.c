#include "support.h"
static asymbol * lf_AUX_Integers4_1sym;
static aterm * lf_AUX_Integers4_1( aterm * arg1 , aterm * arg2);
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * ef3sym;
static funcptr ef3;
static asymbol * lf2sym;
static aterm * lf2( aterm * arg1);
static asymbol * ef5sym;
static funcptr ef5;
static asymbol * ef4sym;
static funcptr ef4;
static asymbol * ef1sym;
static funcptr ef1;
void register_AUX_Integers4( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_Integers4_1sym= TmkSymbol( "prod(id(\"Integers\"),w(\"\"),[sort(\"INT\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"INT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"
 , SYM_STRING);
lf2sym= TmkSymbol( "listtype(sort(\"CHAR\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"INT\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"INT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))") , lf_AUX_Integers4_1 , lf_AUX_Integers4_1sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"CHAR\"))") , lf2 , lf2sym);
}
void resolve_AUX_Integers4( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"NAT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"NAT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"AInt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NAT\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"AInt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NAT\"),w(\"\"),no-attrs)"));
ef3= lookup_func( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"aint\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AInt\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"aint\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AInt\"),w(\"\"),no-attrs)"));
ef4= lookup_func( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[ql(\"-\"),w(\"\"),sort(\"NAT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[ql(\"-\"),w(\"\"),sort(\"NAT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),no-attrs)"));
ef5= lookup_func( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"INT\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"INT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef5sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Integers\"),w(\"\"),[sort(\"INT\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"INT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"INT\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
}
aterm * lf_AUX_Integers4_1( aterm * arg0 , aterm * arg1) {
{
aterm * tmp[16];
PROF( prof_lf_AUX_Integers4_1);
if( check_sym( arg0 , ef1sym)) {
{
aterm * atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef2sym)) {
{
aterm * atmp000= arg_0( atmp00);
if( check_sym( atmp000 , ef3sym)) {
{
aterm * atmp0000= arg_0( atmp000);
if( check_sym( atmp0000 , lf2sym)) {
{
aterm * atmp00000= arg_0( atmp0000);
if( check_sym( arg1 , ef1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( check_sym( atmp10 , ef2sym)) {
{
aterm * atmp100= arg_0( atmp10);
if( check_sym( atmp100 , ef3sym)) {
{
aterm * atmp1000= arg_0( atmp100);
if( check_sym( atmp1000 , lf2sym)) {
{
aterm * atmp10000= arg_0( atmp1000);
t_protect( atmp00000);
if( is_single_element( atmp00000)) {
t_protect( atmp00000);
tmp[ 0]= list_head( atmp00000);
t_protect( tmp[ 0]);
if( term_equal( tmp[ 0] , make_char( 49))) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 1]= list_head( atmp10000);
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 50))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 51))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 52))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 53))))));
}
t_protect( tmp[ 1]);
if( term_equal( tmp[ 1] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 54))))));
}
t_unprotect( tmp[ 1]);
}
}
tmp[ 1]= make_char( 50);
t_protect( tmp[ 0]);
t_protect( tmp[ 1]);
if( term_equal( tmp[ 0] , tmp[ 1])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 2]= list_head( atmp10000);
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 54))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 51))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 52))))));
}
t_protect( tmp[ 2]);
if( term_equal( tmp[ 2] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 53))))));
}
t_unprotect( tmp[ 2]);
}
}
tmp[ 2]= make_char( 51);
t_protect( tmp[ 0]);
t_protect( tmp[ 2]);
if( term_equal( tmp[ 0] , tmp[ 2])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 3]= list_head( atmp10000);
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 52))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 53))))));
}
t_protect( tmp[ 3]);
if( term_equal( tmp[ 3] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 54))))));
}
t_unprotect( tmp[ 3]);
}
}
tmp[ 3]= make_char( 52);
t_protect( tmp[ 0]);
t_protect( tmp[ 3]);
if( term_equal( tmp[ 0] , tmp[ 3])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 4]= list_head( atmp10000);
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 53))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 54))))));
}
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_unprotect( tmp[ 4]);
}
}
tmp[ 4]= make_char( 53);
t_protect( tmp[ 0]);
t_protect( tmp[ 4]);
if( term_equal( tmp[ 0] , tmp[ 4])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 5]= list_head( atmp10000);
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 52)))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 54))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_unprotect( tmp[ 5]);
}
}
tmp[ 5]= make_char( 54);
t_protect( tmp[ 0]);
t_protect( tmp[ 5]);
if( term_equal( tmp[ 0] , tmp[ 5])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 6]= list_head( atmp10000);
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 52)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 53)))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 55))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 6]);
if( term_equal( tmp[ 6] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_unprotect( tmp[ 6]);
}
}
tmp[ 6]= make_char( 55);
t_protect( tmp[ 0]);
t_protect( tmp[ 6]);
if( term_equal( tmp[ 0] , tmp[ 6])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 7]= list_head( atmp10000);
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 52)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 53)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 54)))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 56))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 7]);
if( term_equal( tmp[ 7] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_unprotect( tmp[ 7]);
}
}
tmp[ 7]= make_char( 56);
t_protect( tmp[ 0]);
t_protect( tmp[ 7]);
if( term_equal( tmp[ 0] , tmp[ 7])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 8]= list_head( atmp10000);
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 52)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 53)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 54)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 55)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( make_char( 57))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 8]);
if( term_equal( tmp[ 8] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_unprotect( tmp[ 8]);
}
}
tmp[ 8]= make_char( 57);
t_protect( tmp[ 0]);
t_protect( tmp[ 8]);
if( term_equal( tmp[ 0] , tmp[ 8])) {
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
tmp[ 9]= list_head( atmp10000);
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 52))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 51)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 53))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 52)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 54))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 53)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 55))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 54)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 56))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 55)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 57))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 56)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 49))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 48)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 50))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 49)))))));
}
t_protect( tmp[ 9]);
if( term_equal( tmp[ 9] , make_char( 51))) {
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 9]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 49)) , make_list( make_char( 50)))))));
}
t_unprotect( tmp[ 9]);
}
}
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 0]);
}
t_protect( atmp00000);
if( not_empty_list( atmp00000)) {
t_protect( atmp00000);
tmp[ 0]= list_prefix( atmp00000);
{
t_protect( atmp00000);
tmp[ 1]= list_last( atmp00000);
t_protect( atmp10000);
if( not_empty_list( atmp10000)) {
t_protect( atmp10000);
tmp[ 2]= list_prefix( atmp10000);
t_protect( tmp[ 2]);
if( not_empty_list( tmp[ 2])) {
t_protect( atmp10000);
tmp[ 3]= list_last( atmp10000);
t_protect( tmp[ 1]);
t_protect( tmp[ 3]);
tmp[ 4]= lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 1]))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 3]))))));
if( check_sym( tmp[ 4] , ef1sym)) {
tmp[ 5]= arg_0( tmp[ 4]);
if( check_sym( tmp[ 5] , ef2sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
if( check_sym( tmp[ 6] , ef3sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf2sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
t_protect( tmp[ 8]);
if( not_empty_list( tmp[ 8])) {
t_protect( tmp[ 8]);
tmp[ 9]= list_prefix( tmp[ 8]);
t_protect( tmp[ 8]);
tmp[ 10]= list_last( tmp[ 8]);
t_protect( tmp[ 0]);
t_protect( tmp[ 2]);
t_protect( tmp[ 9]);
tmp[ 11]= lf_AUX_Integers4_1( lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 48)) , make_list( tmp[ 0])))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 2])))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 48)) , make_list( tmp[ 9])))))));
if( check_sym( tmp[ 11] , ef1sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
if( check_sym( tmp[ 12] , ef2sym)) {
tmp[ 13]= arg_0( tmp[ 12]);
if( check_sym( tmp[ 13] , ef3sym)) {
tmp[ 14]= arg_0( tmp[ 13]);
if( check_sym( tmp[ 14] , lf2sym)) {
tmp[ 15]= arg_0( tmp[ 14]);
t_protect( tmp[ 15]);
if( not_empty_list( tmp[ 15])) {
t_protect( tmp[ 15]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 9]);
t_unprotect( tmp[ 11]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( tmp[ 15]) , make_list( tmp[ 10]))))));
}
}
}
}
}
t_unprotect( tmp[ 11]);
t_unprotect( tmp[ 10]);
t_unprotect( tmp[ 9]);
}
}
}
}
}
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 3]);
}
t_unprotect( tmp[ 2]);
}
t_unprotect( tmp[ 1]);
t_protect( tmp[ 0]);
if( not_empty_list( tmp[ 0])) {
t_protect( atmp00000);
tmp[ 1]= list_last( atmp00000);
t_protect( atmp10000);
if( not_empty_list( atmp10000)) {
t_protect( atmp10000);
tmp[ 2]= list_prefix( atmp10000);
{
t_protect( atmp10000);
tmp[ 3]= list_last( atmp10000);
t_protect( tmp[ 1]);
t_protect( tmp[ 3]);
tmp[ 4]= lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 1]))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 3]))))));
if( check_sym( tmp[ 4] , ef1sym)) {
tmp[ 5]= arg_0( tmp[ 4]);
if( check_sym( tmp[ 5] , ef2sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
if( check_sym( tmp[ 6] , ef3sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf2sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
t_protect( tmp[ 8]);
if( not_empty_list( tmp[ 8])) {
t_protect( tmp[ 8]);
tmp[ 9]= list_prefix( tmp[ 8]);
t_protect( tmp[ 8]);
tmp[ 10]= list_last( tmp[ 8]);
t_protect( tmp[ 0]);
t_protect( tmp[ 2]);
t_protect( tmp[ 9]);
tmp[ 11]= lf_AUX_Integers4_1( lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 0]))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 48)) , make_list( tmp[ 2]))))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 48)) , make_list( tmp[ 9])))))));
if( check_sym( tmp[ 11] , ef1sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
if( check_sym( tmp[ 12] , ef2sym)) {
tmp[ 13]= arg_0( tmp[ 12]);
if( check_sym( tmp[ 13] , ef3sym)) {
tmp[ 14]= arg_0( tmp[ 13]);
if( check_sym( tmp[ 14] , lf2sym)) {
tmp[ 15]= arg_0( tmp[ 14]);
t_protect( tmp[ 15]);
if( not_empty_list( tmp[ 15])) {
t_protect( tmp[ 15]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 9]);
t_unprotect( tmp[ 11]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( tmp[ 15]) , make_list( tmp[ 10]))))));
}
}
}
}
}
t_unprotect( tmp[ 11]);
t_unprotect( tmp[ 10]);
t_unprotect( tmp[ 9]);
}
}
}
}
}
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 3]);
t_protect( tmp[ 2]);
if( not_empty_list( tmp[ 2])) {
t_protect( atmp10000);
tmp[ 3]= list_last( atmp10000);
t_protect( tmp[ 1]);
t_protect( tmp[ 3]);
tmp[ 4]= lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 1]))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 3]))))));
if( check_sym( tmp[ 4] , ef1sym)) {
tmp[ 5]= arg_0( tmp[ 4]);
if( check_sym( tmp[ 5] , ef2sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
if( check_sym( tmp[ 6] , ef3sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf2sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
t_protect( tmp[ 8]);
if( not_empty_list( tmp[ 8])) {
t_protect( tmp[ 8]);
tmp[ 9]= list_prefix( tmp[ 8]);
t_protect( tmp[ 8]);
tmp[ 10]= list_last( tmp[ 8]);
t_protect( tmp[ 0]);
t_protect( tmp[ 2]);
t_protect( tmp[ 9]);
tmp[ 11]= lf_AUX_Integers4_1( lf_AUX_Integers4_1( ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 0]))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( make_list( tmp[ 2])))))) , ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( make_char( 48)) , make_list( tmp[ 9])))))));
if( check_sym( tmp[ 11] , ef1sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
if( check_sym( tmp[ 12] , ef2sym)) {
tmp[ 13]= arg_0( tmp[ 12]);
if( check_sym( tmp[ 13] , ef3sym)) {
tmp[ 14]= arg_0( tmp[ 13]);
if( check_sym( tmp[ 14] , lf2sym)) {
tmp[ 15]= arg_0( tmp[ 14]);
t_protect( tmp[ 15]);
if( not_empty_list( tmp[ 15])) {
t_protect( tmp[ 15]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
t_unprotect( tmp[ 3]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 9]);
t_unprotect( tmp[ 11]);
return ( * ef1)( ( * ef2)( ( * ef3)( lf2( cons( make_list( tmp[ 15]) , make_list( tmp[ 10]))))));
}
}
}
}
}
t_unprotect( tmp[ 11]);
t_unprotect( tmp[ 10]);
t_unprotect( tmp[ 9]);
}
}
}
}
}
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 3]);
}
}
t_unprotect( tmp[ 2]);
}
t_unprotect( tmp[ 1]);
}
}
t_unprotect( tmp[ 0]);
}
}
}
}
}
}
}
{
aterm * atmp10= arg_0( arg1);
t_protect( atmp00000);
if( is_single_element( atmp00000)) {
t_protect( atmp00000);
if( term_equal( list_head( atmp00000) , make_char( 48))) {
t_protect( atmp10);
t_unprotect( arg0);
t_unprotect( arg1);
return ( * ef1)( atmp10);
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
aterm * atmp00= arg_0( arg0);
if( check_sym( arg1 , ef4sym)) {
{
aterm * atmp10= arg_0( arg1);
t_protect( atmp10);
t_unprotect( arg1);
return ( * ef5)( arg0 , ( * ef1)( atmp10));
}
}
if( check_sym( arg1 , ef1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( check_sym( atmp10 , ef2sym)) {
{
aterm * atmp100= arg_0( atmp10);
if( check_sym( atmp100 , ef3sym)) {
{
aterm * atmp1000= arg_0( atmp100);
if( check_sym( atmp1000 , lf2sym)) {
{
aterm * atmp10000= arg_0( atmp1000);
t_protect( atmp10000);
if( is_single_element( atmp10000)) {
t_protect( atmp10000);
if( term_equal( list_head( atmp10000) , make_char( 48))) {
t_protect( atmp00);
t_unprotect( arg0);
t_unprotect( arg1);
return ( * ef1)( atmp00);
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
if( check_sym( arg0 , ef4sym)) {
{
aterm * atmp00= arg_0( arg0);
if( check_sym( arg1 , ef1sym)) {
{
aterm * atmp10= arg_0( arg1);
t_protect( atmp00);
t_unprotect( arg0);
return ( * ef5)( arg1 , ( * ef1)( atmp00));
}
}
if( check_sym( arg1 , ef4sym)) {
{
aterm * atmp10= arg_0( arg1);
t_protect( atmp00);
t_protect( atmp10);
tmp[ 0]= lf_AUX_Integers4_1( ( * ef1)( atmp00) , ( * ef1)( atmp10));
if( check_sym( tmp[ 0] , ef1sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
t_protect( tmp[ 1]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
return ( * ef4)( tmp[ 1]);
}
t_unprotect( tmp[ 0]);
}
}
}
}
return make_nf2( lf_AUX_Integers4_1sym , arg0 , arg1);
}
}
aterm * lf2( aterm * arg0) {
PROF( prof_lf2);
return make_nf1( lf2sym , arg0);
}

