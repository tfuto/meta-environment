#include "support.h"
static Symbol lf_AUX_ATerm_Lists3_1sym;
static ATerm lf_AUX_ATerm_Lists3_1( ATerm arg1 , ATerm arg2);
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef2sym;
static funcptr ef2;
static Symbol ef3sym;
static funcptr ef3;
void register_AUX_ATerm_Lists3( ) {
lf_AUX_ATerm_Lists3_1sym= ATmakeSymbol( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Lists3_1sym);
register_prod( ATparse( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))") , lf_AUX_ATerm_Lists3_1 , lf_AUX_ATerm_Lists3_1sym);
}
void resolve_AUX_ATerm_Lists3( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerms\"),w(\"\"),ql(\"++a\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"ATerm-Operations\"),w(\"\"),[sort(\"ATerms\"),w(\"\"),ql(\"++a\"),w(\"\"),sort(\"ATerms\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))"));
}
void init_AUX_ATerm_Lists3( ) {
}
ATerm lf_AUX_ATerm_Lists3_1( ATerm arg0 , ATerm arg1) {
PROF( prof_lf_AUX_ATerm_Lists3_1);
if( check_sym( arg0 , ef1sym)) {
return arg1;
}
if( check_sym( arg0 , ef2sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( arg1 , ef2sym)) {
{
ATerm atmp10= arg_0( arg1);
return ( * ef2)( ( * ef3)( atmp00 , atmp10));
}
}
}
}
if( check_sym( arg1 , ef1sym)) {
return arg0;
}
return make_nf2( lf_AUX_ATerm_Lists3_1sym , arg0 , arg1);
}

