#include "support.h"
static Symbol lf_AUX_ATerm_Operations14_1sym;
static ATerm lf_AUX_ATerm_Operations14_1( ATerm arg1 , ATerm arg2);
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef2sym;
static funcptr ef2;
void register_AUX_ATerm_Operations14( ) {
lf_AUX_ATerm_Operations14_1sym= ATmakeSymbol( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerms\"),w(\"\"),ql(\"++a\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Operations14_1sym);
register_prod( ATparse( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerms\"),w(\"\"),ql(\"++a\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))") , lf_AUX_ATerm_Operations14_1 , lf_AUX_ATerm_Operations14_1sym);
}
void resolve_AUX_ATerm_Operations14( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"));
}
void init_AUX_ATerm_Operations14( ) {
}
ATerm lf_AUX_ATerm_Operations14_1( ATerm arg0 , ATerm arg1) {
PROF( prof_lf_AUX_ATerm_Operations14_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
return ( * ef2)( atmp00 , arg1);
}
}
if( check_sym( arg0 , ef2sym)) {
{
ATerm atmp00= arg_0( arg0);
{
ATerm atmp01= arg_1( arg0);
return ( * ef2)( atmp00 , lf_AUX_ATerm_Operations14_1( atmp01 , arg1));
}
}
}
return make_nf2( lf_AUX_ATerm_Operations14_1sym , arg0 , arg1);
}

