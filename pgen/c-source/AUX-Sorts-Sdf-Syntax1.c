#include  "support.h"
static Symbol lf_AUX_Sorts_Sdf_Syntax1_1sym ;
static ATerm lf_AUX_Sorts_Sdf_Syntax1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sorts_Sdf_Syntax1_2sym ;
static ATerm lf_AUX_Sorts_Sdf_Syntax1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Sorts_Sdf_Syntax1_3sym ;
static ATerm lf_AUX_Sorts_Sdf_Syntax1_3 ( ATerm arg1 ) ;
void register_AUX_Sorts_Sdf_Syntax1 ( ) {
lf_AUX_Sorts_Sdf_Syntax1_1sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sorts_Sdf_Syntax1_1sym ) ;
lf_AUX_Sorts_Sdf_Syntax1_2sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sorts_Sdf_Syntax1_2sym ) ;
lf_AUX_Sorts_Sdf_Syntax1_3sym = ATmakeSymbol ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sorts_Sdf_Syntax1_3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf_AUX_Sorts_Sdf_Syntax1_1 , lf_AUX_Sorts_Sdf_Syntax1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" ) , lf_AUX_Sorts_Sdf_Syntax1_2 , lf_AUX_Sorts_Sdf_Syntax1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_Sorts_Sdf_Syntax1_3 , lf_AUX_Sorts_Sdf_Syntax1_3sym ) ;
}
void resolve_AUX_Sorts_Sdf_Syntax1 ( ) {
}
void init_AUX_Sorts_Sdf_Syntax1 ( ) {
}
ATerm lf_AUX_Sorts_Sdf_Syntax1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sorts_Sdf_Syntax1_3sym , ATmakeAppl ( lf_AUX_Sorts_Sdf_Syntax1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sorts_Sdf_Syntax1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Sorts_Sdf_Syntax1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sorts_Sdf_Syntax1_2sym , ATmakeAppl ( lf_AUX_Sorts_Sdf_Syntax1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sorts_Sdf_Syntax1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Sorts_Sdf_Syntax1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Sorts_Sdf_Syntax1_1sym , ATmakeAppl ( lf_AUX_Sorts_Sdf_Syntax1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Sorts_Sdf_Syntax1_1sym , arg0 ) ) ;
}

