#include  "support.h"
static Symbol lf_AUX_Modular_Sdf_Syntax2_2sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax2_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Modular_Sdf_Syntax2_1sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax2_1 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Modular_Sdf_Syntax2 ( ) {
lf_AUX_Modular_Sdf_Syntax2_2sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax2_2sym ) ;
lf_AUX_Modular_Sdf_Syntax2_1sym = ATmakeSymbol ( "listtype(sort(\"ImpSection\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax2_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ImpSection\"))" ) , lf_AUX_Modular_Sdf_Syntax2_1 , lf_AUX_Modular_Sdf_Syntax2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"module\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),sort(\"Sections\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Module\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Syntax2_2 , lf_AUX_Modular_Sdf_Syntax2_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Modular_Sdf_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"annotate\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Sections\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"annotate\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Sections\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Modular_Sdf_Syntax2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Modular_Sdf_Syntax2_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 5 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Syntax2_2sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax2_2sym , arg0 , arg1 , arg2 ) ) ;
{
ATerm ltmp [ 3 ] ;
lbl_lf_AUX_Modular_Sdf_Syntax2_2 : ltmp [ 0 ] = arg0 ;
ltmp [ 1 ] = arg1 ;
ltmp [ 2 ] = arg2 ;
if ( check_sym ( ltmp [ 1 ] , lf_AUX_Modular_Sdf_Syntax2_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( ltmp [ 2 ] , ef1sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
if ( check_sym ( atmp20 , lf3sym ) ) {
{
ATerm atmp200 = arg_0 ( atmp20 ) ;
if ( not_empty_list ( atmp10 ) ) {
tmp [ 0 ] = list_prefix ( atmp10 ) ;
tmp [ 1 ] = list_last ( atmp10 ) ;
tmp [ 2 ] = ( * ef2 ) ( ltmp [ 0 ] , ( * ef1 ) ( lf3 ( make_list ( atmp200 ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef1sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
arg1 = lf_AUX_Modular_Sdf_Syntax2_1 ( make_list ( tmp [ 0 ] ) ) ;
arg2 = ( * ef1 ) ( lf3 ( cons ( make_list ( ( * ef3 ) ( ( * ef4 ) ( tmp [ 1 ] ) ) ) , make_list ( tmp [ 4 ] ) ) ) ) ;
goto lbl_lf_AUX_Modular_Sdf_Syntax2_2 ;
}
}
}
else {
tmp [ 0 ] = ( * ef2 ) ( ltmp [ 0 ] , ( * ef1 ) ( lf3 ( make_list ( atmp200 ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , ef1sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , lf3sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( ! term_equal ( ( * ef1 ) ( lf3 ( make_list ( atmp200 ) ) ) , ( * ef1 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) {
arg1 = ( constant0 ? constant0 : ( constant0 = lf_AUX_Modular_Sdf_Syntax2_1 ( make_list ( null ( ) ) ) ) ) ;
arg2 = ( * ef1 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) ;
goto lbl_lf_AUX_Modular_Sdf_Syntax2_2 ;
}
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Modular_Sdf_Syntax2_2sym , ltmp [ 0 ] , ltmp [ 1 ] , ltmp [ 2 ] ) ) ;
}
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf_AUX_Modular_Sdf_Syntax2_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Syntax2_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax2_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Syntax2_1sym , arg0 ) ) ;
}

