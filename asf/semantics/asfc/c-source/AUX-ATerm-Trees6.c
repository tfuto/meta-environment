#include "support.h"
static Symbol lf_AUX_ATerm_Trees6_1sym;
static ATerm lf_AUX_ATerm_Trees6_1( ATerm arg1 , ATerm arg2 , ATerm arg3);
static Symbol ef3sym;
static funcptr ef3;
static Symbol ef4sym;
static funcptr ef4;
static Symbol ef5sym;
static funcptr ef5;
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef2sym;
static funcptr ef2;
void register_AUX_ATerm_Trees6( ) {
lf_AUX_ATerm_Trees6_1sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"replace-son\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"
 , 3 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees6_1sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"replace-son\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees6_1 , lf_AUX_ATerm_Trees6_1sym);
}
void resolve_AUX_ATerm_Trees6( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"put-sons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"put-sons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef4= lookup_func( ATreadFromString( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"replace\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( ATreadFromString( "prod(id(\"ATerm-Lists\"),w(\"\"),[l(\"replace\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef5= lookup_func( ATreadFromString( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"sons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( ATreadFromString( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"sons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
}
void init_AUX_ATerm_Trees6( ) {
}
ATerm lf_AUX_ATerm_Trees6_1( ATerm arg0 , ATerm arg1 , ATerm arg2) {
PROF( prof_lf_AUX_ATerm_Trees6_1);
if( check_sym( arg1 , ef1sym)) {
{
ATerm atmp10= arg_0( arg1);
if( check_sym( atmp10 , ef2sym)) {
{
ATerm atmp100= arg_0( atmp10);
return ( * ef3)( arg0 , ( * ef4)( ( * ef5)( arg0) , arg1 , arg2));
}
}
}
}
return make_nf3( lf_AUX_ATerm_Trees6_1sym , arg0 , arg1 , arg2);
}

