#include  "support.h"
static Symbol lf_AUX_CC_Sdf_Syntax1_1sym ;
static ATerm lf_AUX_CC_Sdf_Syntax1_1 ( ATerm arg1 ) ;
void register_AUX_CC_Sdf_Syntax1 ( ) {
lf_AUX_CC_Sdf_Syntax1_1sym = ATmakeSymbol ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_CC_Sdf_Syntax1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_CC_Sdf_Syntax1_1 , lf_AUX_CC_Sdf_Syntax1_1sym ) ;
}
void resolve_AUX_CC_Sdf_Syntax1 ( ) {
}
void init_AUX_CC_Sdf_Syntax1 ( ) {
}
ATerm lf_AUX_CC_Sdf_Syntax1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_CC_Sdf_Syntax1_1sym , ATmakeAppl ( lf_AUX_CC_Sdf_Syntax1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_CC_Sdf_Syntax1_1sym , arg0 ) ) ;
}

