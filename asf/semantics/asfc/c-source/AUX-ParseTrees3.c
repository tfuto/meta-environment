#include "support.h"
static Symbol lf_AUX_ParseTrees3_1sym;
static ATerm lf_AUX_ParseTrees3_1( ATerm arg1);
static Symbol ef1sym;
static funcptr ef1;
void register_AUX_ParseTrees3( ) {
lf_AUX_ParseTrees3_1sym= ATmakeSymbol( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"
 , 1 , ATtrue);
ATprotectSymbol( lf_AUX_ParseTrees3_1sym);
register_prod( ATparse( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ParseTrees3_1 , lf_AUX_ParseTrees3_1sym);
}
void resolve_AUX_ParseTrees3( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"ATerms\"),w(\"\"),[sort(\"AFun\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ATerms\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)"));
}
void init_AUX_ParseTrees3( ) {
}
ATerm lf_AUX_ParseTrees3_1( ATerm arg0) {
PROF( prof_lf_AUX_ParseTrees3_1);
if( check_sym( arg0 , ef1sym)) {
{
ATerm atmp00= arg_0( arg0);
{
ATerm atmp01= arg_1( arg0);
return atmp00;
}
}
}
return make_nf1( lf_AUX_ParseTrees3_1sym , arg0);
}

