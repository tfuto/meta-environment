#include  "support.h"
static Symbol lf_AUX_Kernel_Sdf_Projection11_1sym ;
static ATerm lf_AUX_Kernel_Sdf_Projection11_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
void register_AUX_Kernel_Sdf_Projection11 ( ) {
lf_AUX_Kernel_Sdf_Projection11_1sym = ATmakeSymbol ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Kernel_Sdf_Projection11_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Alias\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
register_prod ( ATparse ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Grammar\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) , lf_AUX_Kernel_Sdf_Projection11_1 , lf_AUX_Kernel_Sdf_Projection11_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Alias\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Kernel_Sdf_Projection11 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[ql(\"aliases\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[ql(\"aliases\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Normalization\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Aliases\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Normalization\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Aliases\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Projection\"),w(\"\"),[l(\"symbols\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Productions\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Symbol-Sets\"),w(\"\"),[sort(\"SymbolSet\"),w(\"\"),ql(\"||\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbol-Sets\"),w(\"\"),[sort(\"SymbolSet\"),w(\"\"),ql(\"||\"),w(\"\"),sort(\"SymbolSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Symbol-Sets\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbol-Sets\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SymbolSet\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Kernel_Sdf_Projection11 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Kernel_Sdf_Projection11_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Kernel_Sdf_Projection11_1sym , ATmakeAppl ( lf_AUX_Kernel_Sdf_Projection11_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef3 ) ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef4sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef5sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef6 ) ( ( * ef5 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef7sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef8 ) ( lf_AUX_Kernel_Sdf_Projection11_1 ( atmp00 ) , lf_AUX_Kernel_Sdf_Projection11_1 ( atmp01 ) ) ) ;
}
}
}
FUNC_EXIT_CONST ( constant0 , ( * ef9 ) ( ( * ef10 ) ( lf4 ( make_list ( null ( ) ) ) ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Kernel_Sdf_Projection11_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

