#include  "asc-support.h"
static Symbol lf_AUX_Kernel_Sdf_Normalization4_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Normalization4_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Kernel_Sdf_Normalization4 ( ) {
lf_AUX_Kernel_Sdf_Normalization4_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"new-merge\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Normalization4_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"new-merge\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Normalization4_1 , lf_AUX_Kernel_Sdf_Normalization4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Kernel_Sdf_Normalization4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"prod-contains\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"prod-contains\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"attr-collect\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Normalization\"),w(\"\"),[l(\"attr-collect\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Kernel_Sdf_Normalization4 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Kernel_Sdf_Normalization4_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 7 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Normalization4_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Normalization4_1sym , arg0 , arg1 ) ) ;
{
ATerm ltmp [ 2 ] ;
lbl_lf_AUX_Kernel_Sdf_Normalization4_1 : ltmp [ 0 ] = arg0 ;
ltmp [ 1 ] = arg1 ;
if ( check_sym ( ltmp [ 0 ] , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( ltmp [ 1 ] , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( not_empty_list ( atmp100 ) ) {
tmp [ 0 ] = list_head ( atmp100 ) ;
tmp [ 1 ] = list_tail ( atmp100 ) ;
tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] , ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) ;
if ( term_equal ( tmp [ 2 ] , ( constant0 ? constant0 : ( constant0 = ( * ef4 ) ( ) ) ) ) ) {
tmp [ 3 ] = ( * ef5 ) ( tmp [ 0 ] , ( * ef1 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 3 ] , ef1sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
if ( is_single_element ( tmp [ 5 ] ) ) {
tmp [ 6 ] = list_head ( tmp [ 5 ] ) ;
arg0 = ( * ef1 ) ( lf2 ( cons ( make_list ( tmp [ 6 ] ) , make_list ( atmp000 ) ) ) ) ;
arg1 = ( * ef1 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ;
goto lbl_lf_AUX_Kernel_Sdf_Normalization4_1 ;
}
}
}
}
if ( term_equal ( tmp [ 2 ] , ( constant1 ? constant1 : ( constant1 = ( * ef3 ) ( ) ) ) ) ) {
arg0 = ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ;
arg1 = ( * ef1 ) ( lf2 ( make_list ( tmp [ 1 ] ) ) ) ;
goto lbl_lf_AUX_Kernel_Sdf_Normalization4_1 ;
}
}
else {
FUNC_EXIT ( ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) ;
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Kernel_Sdf_Normalization4_1sym , ltmp [ 0 ] , ltmp [ 1 ] ) ) ;
}
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

