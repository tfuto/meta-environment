#include  "support.h"
static Symbol lf_AUX_Kernel_Sdf_Projection3_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Projection3_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Kernel_Sdf_Projection3 ( ) {
lf_AUX_Kernel_Sdf_Projection3_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Attributes\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Projection3_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Attribute\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[sort(\"Attributes\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Kernel_Sdf_Projection3_1 , lf_AUX_Kernel_Sdf_Projection3_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Attribute\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Kernel_Sdf_Projection3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Attribute\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Kernel_Sdf_Projection3 ( ) {
}
ATerm lf_AUX_Kernel_Sdf_Projection3_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Projection3_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Projection3_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
tmp [ 0 ] = arg_0 ( atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
atmp0000 [ 0 ] = tmp [ 0 ] ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
atmp0000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
FUNC_EXIT ( lf_AUX_Kernel_Sdf_Projection3_1 ( ( * ef1 ) ( lf2 ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) ) , lf_AUX_Kernel_Sdf_Projection3_1 ( ( * ef1 ) ( lf2 ( tmp [ 0 ] ) ) , ( * ef1 ) ( lf2 ( make_list ( atmp100 ) ) ) ) ) ) ;
}
}
}
}
}
atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ;
tmp [ 0 ] = atmp0000 [ 1 ] ;
}
}
}
}
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
tmp [ 0 ] = arg_0 ( atmp10 ) ;
{
ATerm atmp10010 ;
ATerm atmp1000 [ 2 ] ;
atmp1000 [ 0 ] = tmp [ 0 ] ;
atmp1000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
atmp10010 = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( is_single_element ( atmp000 ) ) {
tmp [ 1 ] = list_head ( atmp000 ) ;
if ( term_equal ( tmp [ 1 ] , atmp10010 ) ) {
FUNC_EXIT ( ( * ef1 ) ( lf2 ( cons ( slice ( atmp1000 [ 0 ] , atmp1000 [ 1 ] ) , cons ( make_list ( tmp [ 1 ] ) , tmp [ 0 ] ) ) ) ) ) ;
}
}
atmp1000 [ 1 ] = list_tail ( atmp1000 [ 1 ] ) ;
tmp [ 0 ] = atmp1000 [ 1 ] ;
}
}
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef2sym ) ) {
FUNC_EXIT ( arg1 ) ;
}
if ( check_sym ( arg1 , ef2sym ) ) {
FUNC_EXIT ( arg0 ) ;
}
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( is_single_element ( atmp000 ) ) {
tmp [ 0 ] = list_head ( atmp000 ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( cons ( make_list ( tmp [ 0 ] ) , make_list ( atmp100 ) ) ) ) ) ;
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Kernel_Sdf_Projection3_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

