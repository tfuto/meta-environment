#include  "asc-support.h"
static Symbol lf_AUX_Kernel_Sdf_Normalization7_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Normalization7_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
void register_AUX_Kernel_Sdf_Normalization7 ( ) {
lf_AUX_Kernel_Sdf_Normalization7_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"filter-attributes\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Normalization7_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Attribute\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[ql(\"filter-attributes\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Attributes\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Normalization7_1 , lf_AUX_Kernel_Sdf_Normalization7_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Attribute\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Kernel_Sdf_Normalization7 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"prefer\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"prefer\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"avoid\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"avoid\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
void init_AUX_Kernel_Sdf_Normalization7 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
}
ATerm lf_AUX_Kernel_Sdf_Normalization7_1 ( ATerm arg0 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Normalization7_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Normalization7_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
tmp [ 0 ] = arg_0 ( atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
atmp0000 [ 0 ] = tmp [ 0 ] ;
atmp0000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
tmp [ 1 ] = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , ef2sym ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf2 ( make_list ( ( * ef2 ) ( ) ) ) ) ) ;
}
atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ;
tmp [ 0 ] = atmp0000 [ 1 ] ;
}
}
tmp [ 0 ] = arg_0 ( atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
atmp0000 [ 0 ] = tmp [ 0 ] ;
atmp0000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
tmp [ 2 ] = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 2 ] , ef3sym ) ) {
FUNC_EXIT_CONST ( constant1 , ( * ef1 ) ( lf2 ( make_list ( ( * ef3 ) ( ) ) ) ) ) ;
}
atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ;
tmp [ 0 ] = atmp0000 [ 1 ] ;
}
}
}
}
}
FUNC_EXIT_CONST ( constant2 , ( * ef4 ) ( ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Kernel_Sdf_Normalization7_1sym , arg0 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

