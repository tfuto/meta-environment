#include  "support.h"
static Symbol lf_AUX_Priority_Sdf_Projection6_1sym ;
static ATerm lf_AUX_Priority_Sdf_Projection6_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Priority_Sdf_Projection6 ( ) {
lf_AUX_Priority_Sdf_Projection6_1sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[ql(\"nm-Pr\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Projection6_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[ql(\"nm-Pr\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Projection6_1 , lf_AUX_Priority_Sdf_Projection6_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Priority_Sdf_Projection6 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[sort(\"Priorities\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Projection\"),w(\"\"),[sort(\"Priorities\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Priority_Sdf_Projection6 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Priority_Sdf_Projection6_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Priority_Sdf_Projection6_1sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Projection6_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef4 ) ( lf_AUX_Priority_Sdf_Projection6_1 ( atmp00 ) , lf_AUX_Priority_Sdf_Projection6_1 ( atmp01 ) ) ) ;
}
}
}
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Projection6_1sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

