#include  "support.h"
static Symbol lf_AUX_Modular_Sdf_Syntax3_2sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax3_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Modular_Sdf_Syntax3_1sym ;
static ATerm lf_AUX_Modular_Sdf_Syntax3_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Modular_Sdf_Syntax3 ( ) {
lf_AUX_Modular_Sdf_Syntax3_2sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax3_2sym ) ;
lf_AUX_Modular_Sdf_Syntax3_1sym = ATmakeSymbol ( "listtype(sort(\"Section\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Syntax3_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Section\"))" ) , lf_AUX_Modular_Sdf_Syntax3_1 , lf_AUX_Modular_Sdf_Syntax3_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Section\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Syntax3_2 , lf_AUX_Modular_Sdf_Syntax3_2sym ) ;
}
void resolve_AUX_Modular_Sdf_Syntax3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"exports\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"hiddens\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Section\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Modular_Sdf_Syntax3 ( ) {
}
ATerm lf_AUX_Modular_Sdf_Syntax3_2 ( ATerm arg0 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Syntax3_2sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax3_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Modular_Sdf_Syntax3_1sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
{
ATerm atmp00110 ;
ATerm atmp0010 ;
ATerm atmp000 [ 2 ] ;
atmp000 [ 0 ] = tmp [ 0 ] ;
atmp000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
atmp0010 = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
atmp00110 = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( check_sym ( atmp0010 , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( atmp0010 ) ;
if ( check_sym ( atmp00110 , ef3sym ) ) {
tmp [ 2 ] = arg_0 ( atmp00110 ) ;
FUNC_EXIT ( lf_AUX_Modular_Sdf_Syntax3_2 ( lf_AUX_Modular_Sdf_Syntax3_1 ( cons ( slice ( atmp000 [ 0 ] , atmp000 [ 1 ] ) , cons ( make_list ( ( * ef3 ) ( ( * ef2 ) ( tmp [ 1 ] , tmp [ 2 ] ) ) ) , tmp [ 0 ] ) ) ) ) ) ;
}
if ( check_sym ( atmp00110 , ef1sym ) ) {
tmp [ 2 ] = arg_0 ( atmp00110 ) ;
FUNC_EXIT ( lf_AUX_Modular_Sdf_Syntax3_2 ( lf_AUX_Modular_Sdf_Syntax3_1 ( cons ( slice ( atmp000 [ 0 ] , atmp000 [ 1 ] ) , cons ( make_list ( ( * ef1 ) ( tmp [ 2 ] ) ) , cons ( make_list ( ( * ef3 ) ( tmp [ 1 ] ) ) , tmp [ 0 ] ) ) ) ) ) ) ;
}
}
if ( check_sym ( atmp0010 , ef1sym ) ) {
tmp [ 1 ] = arg_0 ( atmp0010 ) ;
if ( check_sym ( atmp00110 , ef1sym ) ) {
tmp [ 2 ] = arg_0 ( atmp00110 ) ;
FUNC_EXIT ( lf_AUX_Modular_Sdf_Syntax3_2 ( lf_AUX_Modular_Sdf_Syntax3_1 ( cons ( slice ( atmp000 [ 0 ] , atmp000 [ 1 ] ) , cons ( make_list ( ( * ef1 ) ( ( * ef2 ) ( tmp [ 1 ] , tmp [ 2 ] ) ) ) , tmp [ 0 ] ) ) ) ) ) ;
}
}
}
atmp000 [ 1 ] = list_tail ( atmp000 [ 1 ] ) ;
tmp [ 0 ] = atmp000 [ 1 ] ;
}
}
tmp [ 0 ] = arg_0 ( arg0 ) ;
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Syntax3_2sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Modular_Sdf_Syntax3_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Modular_Sdf_Syntax3_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Syntax3_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Modular_Sdf_Syntax3_1sym , arg0 ) ) ;
}

