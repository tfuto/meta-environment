/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Priority_Sdf_Renaming3_1sym ;
static ATerm lf_AUX_Priority_Sdf_Renaming3_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
void register_AUX_Priority_Sdf_Renaming3 ( ) {
lf_AUX_Priority_Sdf_Renaming3_1sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\")G\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Renaming3_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\")G\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Renaming3_1 , lf_AUX_Priority_Sdf_Renaming3_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Priority_Sdf_Renaming3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Associativity\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Associativity\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")*\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\")*\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Production\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Priority_Sdf_Renaming3 ( ) {
}
ATerm lf_AUX_Priority_Sdf_Renaming3_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_AUX_Priority_Sdf_Renaming3_1sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Renaming3_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , ef2sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( atmp010 , lf2sym ) ) {
{
ATerm atmp0100 = arg_0 ( atmp010 ) ;
FUNC_EXIT ( ( * ef1 ) ( atmp00 , ( * ef3 ) ( make_nf1 ( ef2sym , lf2 ( make_list ( atmp0100 ) ) ) , arg1 ) ) ) ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef4sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef4 ) ( ( * ef3 ) ( make_nf1 ( ef2sym , lf2 ( make_list ( atmp0000 ) ) ) , arg1 ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef5sym ) ) {
( tmp [ 0 ] = arg_0 ( arg0 ) ) ;
( tmp [ 1 ] = ( * ef6 ) ( tmp [ 0 ] , arg1 ) ) ;
FUNC_EXIT ( ( * ef5 ) ( tmp [ 1 ] ) ) ;
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Priority_Sdf_Renaming3_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

