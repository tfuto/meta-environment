#include  "support.h"
static Symbol lf_AUX_Kernel_Sdf_Normalization2_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Normalization2_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
void register_AUX_Kernel_Sdf_Normalization2 ( ) {
lf_AUX_Kernel_Sdf_Normalization2_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"k\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Normalization2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"k\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Normalization2_1 , lf_AUX_Kernel_Sdf_Normalization2_1sym ) ;
}
void resolve_AUX_Kernel_Sdf_Normalization2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"merge\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"merge\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"P\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"P\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"~P\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[ql(\"~P\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Kernel_Sdf_Normalization2 ( ) {
}
ATerm lf_AUX_Kernel_Sdf_Normalization2_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Normalization2_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Normalization2_1sym , arg0 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( ( * ef4 ) ( arg0 ) ) ) , ( * ef5 ) ( arg0 ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Kernel_Sdf_Normalization2_1sym , arg0 ) ) ;
}

