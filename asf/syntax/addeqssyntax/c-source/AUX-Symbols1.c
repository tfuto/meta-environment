/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Symbols1_1sym ;
static ATerm lf_AUX_Symbols1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Symbols1_3sym ;
static ATerm lf_AUX_Symbols1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Symbols1_2sym ;
static ATerm lf_AUX_Symbols1_2 ( ATerm arg1 ) ;
void register_AUX_Symbols1 ( ) {
lf_AUX_Symbols1_1sym = ATmakeSymbol ( "prod(id(\"Symbols\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Symbols1_1sym ) ;
lf_AUX_Symbols1_3sym = ATmakeSymbol ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Symbols1_3sym ) ;
lf_AUX_Symbols1_2sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Symbols1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Symbols\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"bracket\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Symbols1_1 , lf_AUX_Symbols1_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf_AUX_Symbols1_2 , lf_AUX_Symbols1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) , lf_AUX_Symbols1_3 , lf_AUX_Symbols1_3sym ) ;
}
void resolve_AUX_Symbols1 ( ) {
}
void init_AUX_Symbols1 ( ) {
}
ATerm lf_AUX_Symbols1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Symbols1_2sym , ATmakeAppl ( lf_AUX_Symbols1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Symbols1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Symbols1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Symbols1_3sym , ATmakeAppl ( lf_AUX_Symbols1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Symbols1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Symbols1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Symbols1_1sym , ATmakeAppl ( lf_AUX_Symbols1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Symbols1_1sym , arg0 ) ) ;
}

