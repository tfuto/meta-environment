/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Sdf2_to_ADT1_1sym ;
static ATerm lf_AUX_Sdf2_to_ADT1_1 ( ) ;
static Symbol lf_AUX_Sdf2_to_ADT1_2sym ;
static ATerm lf_AUX_Sdf2_to_ADT1_2 ( ) ;
void register_AUX_Sdf2_to_ADT1 ( ) {
lf_AUX_Sdf2_to_ADT1_1sym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"cons-expand\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT1_1sym ) ;
lf_AUX_Sdf2_to_ADT1_2sym = ATmakeSymbol ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"cons-remove\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_to_ADT1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"cons-expand\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT1_1 , lf_AUX_Sdf2_to_ADT1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-to-ADT\"),w(\"\"),[ql(\"cons-remove\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ConsOption\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_to_ADT1_2 , lf_AUX_Sdf2_to_ADT1_2sym ) ;
}
void resolve_AUX_Sdf2_to_ADT1 ( ) {
}
void init_AUX_Sdf2_to_ADT1 ( ) {
}
ATerm lf_AUX_Sdf2_to_ADT1_2 ( ) {
CONS_ENTRY ( lf_AUX_Sdf2_to_ADT1_2sym , ATmakeAppl0 ( lf_AUX_Sdf2_to_ADT1_2sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Sdf2_to_ADT1_2sym ) ) ;
}
ATerm lf_AUX_Sdf2_to_ADT1_1 ( ) {
CONS_ENTRY ( lf_AUX_Sdf2_to_ADT1_1sym , ATmakeAppl0 ( lf_AUX_Sdf2_to_ADT1_1sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Sdf2_to_ADT1_1sym ) ) ;
}

