#include "support.h"
static Symbol lf_AUX_Basic_Integers2_1sym;
static ATerm lf_AUX_Basic_Integers2_1( ATerm arg1);
static Symbol ef1sym;
static funcptr ef1;
void register_AUX_Basic_Integers2( ) {
lf_AUX_Basic_Integers2_1sym= ATmakeSymbol( "prod(id(\"Basic-Integers\"),w(\"\"),[l(\"con\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)"
 , 1 , ATtrue);
ATprotectSymbol( lf_AUX_Basic_Integers2_1sym);
register_prod( ATparse( "prod(id(\"Basic-Integers\"),w(\"\"),[l(\"con\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)") , lf_AUX_Basic_Integers2_1 , lf_AUX_Basic_Integers2_1sym);
}
void resolve_AUX_Basic_Integers2( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)"));
}
void init_AUX_Basic_Integers2( ) {
}
ATerm lf_AUX_Basic_Integers2_1( ATerm arg0) {
PROF( prof_lf_AUX_Basic_Integers2_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
return atmp00;
}
}
return make_nf1( lf_AUX_Basic_Integers2_1sym , arg0);
}

