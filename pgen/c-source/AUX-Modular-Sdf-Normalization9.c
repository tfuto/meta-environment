#include  "support.h"
static Symbol lf_AUX_Modular_Sdf_Normalization9_1sym ;
static ATerm lf_AUX_Modular_Sdf_Normalization9_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
void register_AUX_Modular_Sdf_Normalization9 ( ) {
lf_AUX_Modular_Sdf_Normalization9_1sym = ATmakeSymbol ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"imp\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Import\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Modular_Sdf_Normalization9_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Import\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"imp\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Import\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)" ) , lf_AUX_Modular_Sdf_Normalization9_1 , lf_AUX_Modular_Sdf_Normalization9_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Import\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Modular_Sdf_Normalization9 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ModuleName\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Import\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ModuleName\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Import\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"gra\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Normalization\"),w(\"\"),[l(\"gra\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Imports\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IG\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Projection\"),w(\"\"),[ql(\"if\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"then\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"else\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"fi\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"delaying2\"),w(\"\"),sep(\",\"),w(\"\"),l(\"delaying3\")],w(\"\"),l(\"}\")))" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Projection\"),w(\"\"),[ql(\"if\"),w(\"\"),sort(\"Bool\"),w(\"\"),ql(\"then\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"else\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"fi\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"delaying2\"),w(\"\"),sep(\",\"),w(\"\"),l(\"delaying3\")],w(\"\"),l(\"}\")))" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[sort(\"Import\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[sort(\"Import\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[ql(\"Exp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[ql(\"Exp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Sections\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[ql(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Projection\"),w(\"\"),[ql(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sections\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ModuleName\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Import\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ModuleName\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Import\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Renaming\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Renamings\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Modular_Sdf_Normalization9 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Modular_Sdf_Normalization9_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Modular_Sdf_Normalization9_1sym , ATmakeAppl ( lf_AUX_Modular_Sdf_Normalization9_1sym , arg0 , arg1 , arg2 ) ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( arg2 , ef2sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
tmp [ 0 ] = ( * ef4 ) ( ( * ef5 ) ( arg2 , ( * ef1 ) ( lf2 ( make_list ( atmp100 ) ) ) ) , ( constant0 ? constant0 : ( constant0 = quote0 ( ef6sym ) ) ) , quote1 ( ef7sym , quote2 ( ef8sym , atmp20 , arg0 ) ) ) ;
FUNC_EXIT ( ( * ef3 ) ( arg0 , ( * ef1 ) ( lf2 ( cons ( make_list ( atmp100 ) , make_list ( arg2 ) ) ) ) , tmp [ 0 ] ) ) ;
}
}
if ( check_sym ( arg2 , ef9sym ) ) {
{
ATerm atmp20 = arg_0 ( arg2 ) ;
{
ATerm atmp21 = arg_1 ( arg2 ) ;
tmp [ 0 ] = ( * ef4 ) ( ( * ef5 ) ( arg2 , ( * ef1 ) ( lf2 ( make_list ( atmp100 ) ) ) ) , ( constant0 ? constant0 : ( constant0 = quote0 ( ef6sym ) ) ) , quote2 ( ef10sym , quote1 ( ef7sym , quote2 ( ef8sym , atmp20 , arg0 ) ) , atmp21 ) ) ;
FUNC_EXIT ( ( * ef3 ) ( arg0 , ( * ef1 ) ( lf2 ( cons ( make_list ( atmp100 ) , make_list ( arg2 ) ) ) ) , tmp [ 0 ] ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf3 ( lf_AUX_Modular_Sdf_Normalization9_1sym , arg0 , arg1 , arg2 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

