#include "support.h"
static Symbol lf_AUX_ATerm_Trees1_1sym;
static ATerm lf_AUX_ATerm_Trees1_1( );
static Symbol lf_AUX_ATerm_Trees1_2sym;
static ATerm lf_AUX_ATerm_Trees1_2( );
static Symbol lf_AUX_ATerm_Trees1_3sym;
static ATerm lf_AUX_ATerm_Trees1_3( );
static Symbol lf_AUX_ATerm_Trees1_4sym;
static ATerm lf_AUX_ATerm_Trees1_4( );
static Symbol lf_AUX_ATerm_Trees1_5sym;
static ATerm lf_AUX_ATerm_Trees1_5( );
void register_AUX_ATerm_Trees1( ) {
lf_AUX_ATerm_Trees1_1sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"subtermsf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)"
 , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees1_1sym);
lf_AUX_ATerm_Trees1_2sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"treplacef\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees1_2sym);
lf_AUX_ATerm_Trees1_3sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"tmapf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees1_3sym);
lf_AUX_ATerm_Trees1_4sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"for-some-stf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees1_4sym);
lf_AUX_ATerm_Trees1_5sym= ATmakeSymbol( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"containsf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" , 0 , ATtrue);
ATprotectSymbol( lf_AUX_ATerm_Trees1_5sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"subtermsf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees1_1 , lf_AUX_ATerm_Trees1_1sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"treplacef\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees1_2 , lf_AUX_ATerm_Trees1_2sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"tmapf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees1_3 , lf_AUX_ATerm_Trees1_3sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"for-some-stf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees1_4 , lf_AUX_ATerm_Trees1_4sym);
register_prod( ATparse( "prod(id(\"ATerm-Trees\"),w(\"\"),[l(\"containsf\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)") , lf_AUX_ATerm_Trees1_5 , lf_AUX_ATerm_Trees1_5sym);
}
void resolve_AUX_ATerm_Trees1( ) {
}
void init_AUX_ATerm_Trees1( ) {
}
ATerm lf_AUX_ATerm_Trees1_5( ) {
PROF( prof_lf_AUX_ATerm_Trees1_5);
return make_nf0( lf_AUX_ATerm_Trees1_5sym);
}
ATerm lf_AUX_ATerm_Trees1_4( ) {
PROF( prof_lf_AUX_ATerm_Trees1_4);
return make_nf0( lf_AUX_ATerm_Trees1_4sym);
}
ATerm lf_AUX_ATerm_Trees1_3( ) {
PROF( prof_lf_AUX_ATerm_Trees1_3);
return make_nf0( lf_AUX_ATerm_Trees1_3sym);
}
ATerm lf_AUX_ATerm_Trees1_2( ) {
PROF( prof_lf_AUX_ATerm_Trees1_2);
return make_nf0( lf_AUX_ATerm_Trees1_2sym);
}
ATerm lf_AUX_ATerm_Trees1_1( ) {
PROF( prof_lf_AUX_ATerm_Trees1_1);
return make_nf0( lf_AUX_ATerm_Trees1_1sym);
}

