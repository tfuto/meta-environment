#include "support.h"
static Symbol lf_AUX_ATypes3_1sym;
static ATerm lf_AUX_ATypes3_1( );
static Symbol lf_AUX_ATypes3_2sym;
static ATerm lf_AUX_ATypes3_2( );
static Symbol lf_AUX_ATypes3_3sym;
static ATerm lf_AUX_ATypes3_3( );
static Symbol lf_AUX_ATypes3_4sym;
static ATerm lf_AUX_ATypes3_4( );
void register_AUX_ATypes3( ) {
lf_AUX_ATypes3_1sym= ATmakeSymbol( "prod(id(\"ATypes\"),w(\"\"),[l(\"int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"
 , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATypes3_1sym);
lf_AUX_ATypes3_2sym= ATmakeSymbol( "prod(id(\"ATypes\"),w(\"\"),[l(\"str\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATypes3_2sym);
lf_AUX_ATypes3_3sym= ATmakeSymbol( "prod(id(\"ATypes\"),w(\"\"),[l(\"term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATypes3_3sym);
lf_AUX_ATypes3_4sym= ATmakeSymbol( "prod(id(\"ATypes\"),w(\"\"),[l(\"list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATypes3_4sym);
register_prod( ATparse( "prod(id(\"ATypes\"),w(\"\"),[l(\"int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATypes3_1 , lf_AUX_ATypes3_1sym);
register_prod( ATparse( "prod(id(\"ATypes\"),w(\"\"),[l(\"str\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATypes3_2 , lf_AUX_ATypes3_2sym);
register_prod( ATparse( "prod(id(\"ATypes\"),w(\"\"),[l(\"term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATypes3_3 , lf_AUX_ATypes3_3sym);
register_prod( ATparse( "prod(id(\"ATypes\"),w(\"\"),[l(\"list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATypes3_4 , lf_AUX_ATypes3_4sym);
}
void resolve_AUX_ATypes3( ) {
}
void init_AUX_ATypes3( ) {
}
ATerm lf_AUX_ATypes3_4( ) {
PROF( prof_lf_AUX_ATypes3_4);
return make_nf0( lf_AUX_ATypes3_4sym);
}
ATerm lf_AUX_ATypes3_3( ) {
PROF( prof_lf_AUX_ATypes3_3);
return make_nf0( lf_AUX_ATypes3_3sym);
}
ATerm lf_AUX_ATypes3_2( ) {
PROF( prof_lf_AUX_ATypes3_2);
return make_nf0( lf_AUX_ATypes3_2sym);
}
ATerm lf_AUX_ATypes3_1( ) {
PROF( prof_lf_AUX_ATypes3_1);
return make_nf0( lf_AUX_ATypes3_1sym);
}

