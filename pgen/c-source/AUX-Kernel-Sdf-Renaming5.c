#include  "support.h"
static Symbol lf_AUX_Kernel_Sdf_Renaming5_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Renaming5_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
void register_AUX_Kernel_Sdf_Renaming5 ( ) {
lf_AUX_Kernel_Sdf_Renaming5_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Renaming5_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Renaming5_1 , lf_AUX_Kernel_Sdf_Renaming5_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Kernel_Sdf_Renaming5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Renaming-Sdf-Projection\"),w(\"\"),[ql(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Renamings\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Renaming-Sdf-Projection\"),w(\"\"),[ql(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Renamings\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\")*\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\")*\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Kernel_Sdf_Renaming5 ( ) {
}
ATerm lf_AUX_Kernel_Sdf_Renaming5_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Renaming5_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Renaming5_1sym , arg0 , arg1 ) ) ;
tmp [ 0 ] = ( * ef1 ) ( arg0 , arg1 ) ;
if ( ! term_equal ( tmp [ 0 ] , arg0 ) ) {
FUNC_EXIT ( tmp [ 0 ] ) ;
}
if ( check_sym ( arg0 , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef3sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
{
ATerm atmp02 = arg_2 ( arg0 ) ;
FUNC_EXIT ( ( * ef2 ) ( ( * ef4 ) ( ( * ef3 ) ( lf2 ( make_list ( atmp0000 ) ) ) , arg1 ) , ( * ef5 ) ( atmp01 , arg1 ) , atmp02 ) ) ;
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Kernel_Sdf_Renaming5_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

