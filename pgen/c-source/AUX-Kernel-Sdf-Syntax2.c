#include  "support.h"
static Symbol lf_AUX_Kernel_Sdf_Syntax2_2sym ;
static ATerm lf_AUX_Kernel_Sdf_Syntax2_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Kernel_Sdf_Syntax2_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Syntax2_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
void register_AUX_Kernel_Sdf_Syntax2 ( ) {
lf_AUX_Kernel_Sdf_Syntax2_2sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Syntax2_2sym ) ;
lf_AUX_Kernel_Sdf_Syntax2_1sym = ATmakeSymbol ( "listtype(sort(\"Attribute\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Attribute\"),ql(\",\"))" ) , lf_AUX_Kernel_Sdf_Syntax2_1 , lf_AUX_Kernel_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Syntax2_2 , lf_AUX_Kernel_Sdf_Syntax2_2sym ) ;
}
void resolve_AUX_Kernel_Sdf_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Kernel_Sdf_Syntax2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Kernel_Sdf_Syntax2_2 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Syntax2_2sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Syntax2_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Kernel_Sdf_Syntax2_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( ! not_empty_list ( atmp00 ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Kernel_Sdf_Syntax2_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Kernel_Sdf_Syntax2_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Kernel_Sdf_Syntax2_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Syntax2_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Kernel_Sdf_Syntax2_1sym , arg0 ) ) ;
}

