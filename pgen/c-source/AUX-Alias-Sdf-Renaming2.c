#include  "support.h"
static Symbol lf_AUX_Alias_Sdf_Renaming2_1sym ;
static ATerm lf_AUX_Alias_Sdf_Renaming2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Alias_Sdf_Renaming2 ( ) {
lf_AUX_Alias_Sdf_Renaming2_1sym = ATmakeSymbol ( "prod(id(\"Alias-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Aliases\"),w(\"\"),ql(\")a\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Alias_Sdf_Renaming2_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Alias\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Alias-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Aliases\"),w(\"\"),ql(\")a\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) , lf_AUX_Alias_Sdf_Renaming2_1 , lf_AUX_Alias_Sdf_Renaming2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Alias\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Alias_Sdf_Renaming2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Alias\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[sort(\"Symbol\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Alias\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Projection\"),w(\"\"),[sort(\"Aliases\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Projection\"),w(\"\"),[sort(\"Aliases\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Alias_Sdf_Renaming2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Alias_Sdf_Renaming2_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Alias_Sdf_Renaming2_1sym , ATmakeAppl ( lf_AUX_Alias_Sdf_Renaming2_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( term_equal ( ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = ( * ef1 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp000 ) ) {
tmp [ 0 ] = list_head ( atmp000 ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( make_list ( ( * ef2 ) ( ( * ef3 ) ( tmp [ 1 ] , arg1 ) , ( * ef3 ) ( tmp [ 2 ] , arg1 ) ) ) ) ) ) ;
}
}
}
}
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
FUNC_EXIT ( ( * ef4 ) ( lf_AUX_Alias_Sdf_Renaming2_1 ( ( * ef1 ) ( lf2 ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) ) , arg1 ) , lf_AUX_Alias_Sdf_Renaming2_1 ( ( * ef1 ) ( lf2 ( tmp [ 0 ] ) ) , arg1 ) ) ) ;
}
atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ;
tmp [ 0 ] = atmp0000 [ 1 ] ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Alias_Sdf_Renaming2_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

