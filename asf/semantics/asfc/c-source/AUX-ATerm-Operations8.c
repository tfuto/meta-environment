#include "support.h"
static Symbol lf_AUX_ATerm_Operations8_1sym;
static ATerm lf_AUX_ATerm_Operations8_1( ATerm arg1);
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef3sym;
static funcptr ef3;
static Symbol ef2sym;
static funcptr ef2;
void register_AUX_ATerm_Operations8( ) {
lf_AUX_ATerm_Operations8_1sym= ATmakeSymbol( "prod(id(\"ATerm-Operations\"),w(\"\"),[l(\"aterms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)"
 , 1 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Operations8_1sym);
register_prod( ATparse( "prod(id(\"ATerm-Operations\"),w(\"\"),[l(\"aterms\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerms\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Operations8_1 , lf_AUX_ATerm_Operations8_1sym);
}
void resolve_AUX_ATerm_Operations8( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),sort(\"Ann\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),sort(\"Ann\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
}
void init_AUX_ATerm_Operations8( ) {
}
ATerm lf_AUX_ATerm_Operations8_1( ATerm arg0) {
PROF( prof_lf_AUX_ATerm_Operations8_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef2sym)) {
{
ATerm atmp000= arg_0( atmp00);
return atmp000;
}
}
}
}
if( check_sym( arg0 , ef3sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , ef2sym)) {
{
ATerm atmp000= arg_0( atmp00);
{
ATerm atmp01= arg_1( arg0);
return atmp000;
}
}
}
}
}
return make_nf1( lf_AUX_ATerm_Operations8_1sym , arg0);
}

