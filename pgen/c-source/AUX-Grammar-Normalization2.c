#include  "support.h"
static Symbol lf_AUX_Grammar_Normalization2_1sym ;
static ATerm lf_AUX_Grammar_Normalization2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol lf6sym ;
static ATerm lf6 ( ATerm arg1 ) ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol lf7sym ;
static ATerm lf7 ( ATerm arg1 ) ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Grammar_Normalization2 ( ) {
lf_AUX_Grammar_Normalization2_1sym = ATmakeSymbol ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),ql(\"<>\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Grammar_Normalization2_1sym ) ;
lf6sym = ATmakeSymbol ( "listtype(sort(\"Import\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf6sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf7sym = ATmakeSymbol ( "listtype(sort(\"Restriction\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf7sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"Alias\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),ql(\"<>\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Grammar_Normalization2_1 , lf_AUX_Grammar_Normalization2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Alias\"))" ) , lf5 , lf5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Import\"))" ) , lf6 , lf6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Restriction\"))" ) , lf7 , lf7sym ) ;
}
void resolve_AUX_Grammar_Normalization2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[ql(\"sorts\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[ql(\"sorts\"),w(\"\"),sort(\"Symbols\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[ql(\"aliases\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[ql(\"aliases\"),w(\"\"),sort(\"Aliases\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Alias-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Alias\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Aliases\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[sort(\"ImpSection\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"imports\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImpSection\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"imports\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImpSection\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Grammar_Normalization2 ( ) {
}
ATerm lf_AUX_Grammar_Normalization2_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 6 ] ;
FUNC_ENTRY ( lf_AUX_Grammar_Normalization2_1sym , ATmakeAppl ( lf_AUX_Grammar_Normalization2_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef12sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef13sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef14sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( atmp0000 , lf6sym ) ) {
{
ATerm atmp00000 = arg_0 ( atmp0000 ) ;
if ( check_sym ( arg1 , ef12sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef13sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , ef14sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
if ( check_sym ( atmp1000 , lf6sym ) ) {
{
ATerm atmp10000 = arg_0 ( atmp1000 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( lf6 ( cons ( make_list ( atmp00000 ) , make_list ( atmp10000 ) ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
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
}
}
}
}
}
}
if ( check_sym ( arg0 , ef15sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef5sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , ef15sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef5sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf3sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef15 ) ( ( * ef5 ) ( lf3 ( cons ( make_list ( atmp0000 ) , make_list ( atmp1000 ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg1 , ef16sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf2sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef16 ) ( ( * ef3 ) ( lf2 ( make_list ( atmp1000 ) ) ) ) , ( * ef15 ) ( ( * ef5 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) ;
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
}
}
if ( check_sym ( arg0 , ef8sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef9sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , ef8sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef9sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf4sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef8 ) ( ( * ef9 ) ( lf4 ( cons ( make_list ( atmp0000 ) , make_list ( atmp1000 ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
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
}
}
if ( check_sym ( arg0 , ef16sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef3sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , ef8sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef9sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf4sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef8 ) ( ( * ef9 ) ( lf4 ( make_list ( atmp1000 ) ) ) ) , ( * ef16 ) ( ( * ef3 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg1 , ef10sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef11sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf5sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef10 ) ( ( * ef11 ) ( lf5 ( make_list ( atmp1000 ) ) ) ) , ( * ef16 ) ( ( * ef3 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg1 , ef16sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf2sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef16 ) ( ( * ef3 ) ( lf2 ( cons ( make_list ( atmp0000 ) , make_list ( atmp1000 ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
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
}
}
if ( check_sym ( arg0 , ef17sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef18sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf7sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , ef17sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef18sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf7sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef17 ) ( ( * ef18 ) ( lf7 ( cons ( make_list ( atmp0000 ) , make_list ( atmp1000 ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg1 , ef16sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf2sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef16 ) ( ( * ef3 ) ( lf2 ( make_list ( atmp1000 ) ) ) ) , ( * ef17 ) ( ( * ef18 ) ( lf7 ( make_list ( atmp0000 ) ) ) ) ) ) ;
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
}
}
if ( check_sym ( arg0 , ef10sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef11sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf5sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( arg1 , ef10sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef11sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , lf5sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef10 ) ( ( * ef11 ) ( lf5 ( cons ( make_list ( atmp0000 ) , make_list ( atmp1000 ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
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
}
}
if ( check_sym ( arg0 , ef4sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
{
if ( check_sym ( tmp [ 0 ] , ef5sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
{
if ( check_sym ( tmp [ 1 ] , lf3sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef6sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef6 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef4sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef5sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf3sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef4 ) ( ( * ef5 ) ( lf3 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef2sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef4 ) ( ( * ef5 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef10sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
if ( check_sym ( tmp [ 0 ] , ef11sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , lf5sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef8sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef9sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf4sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef8 ) ( ( * ef9 ) ( lf4 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef10 ) ( ( * ef11 ) ( lf5 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef2sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
{
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
{
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef2sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef6sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef6 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef2 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef6sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef6sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef6 ) ( ( * ef3 ) ( lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef19sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
{
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
{
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef19sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef19 ) ( ( * ef3 ) ( lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef2sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef19 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef6sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef6 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef19 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef20sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
{
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
{
if ( check_sym ( tmp [ 1 ] , lf2sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( arg1 , ef20sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef20 ) ( ( * ef3 ) ( lf2 ( cons ( make_list ( tmp [ 2 ] ) , make_list ( tmp [ 5 ] ) ) ) ) ) , ( * ef7 ) ( ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef2sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef20 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( arg1 , ef19sym ) ) {
tmp [ 3 ] = arg_0 ( arg1 ) ;
if ( check_sym ( tmp [ 3 ] , ef3sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , lf2sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef19 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 5 ] ) ) ) ) , ( * ef20 ) ( ( * ef3 ) ( lf2 ( make_list ( tmp [ 2 ] ) ) ) ) ) ) ;
}
}
}
}
}
}
}
}
if ( check_sym ( arg1 , ef12sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , ef13sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( check_sym ( atmp100 , ef14sym ) ) {
{
ATerm atmp1000 = arg_0 ( atmp100 ) ;
if ( check_sym ( atmp1000 , lf6sym ) ) {
{
ATerm atmp10000 = arg_0 ( atmp1000 ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef12 ) ( ( * ef13 ) ( ( * ef14 ) ( lf6 ( make_list ( atmp10000 ) ) ) ) ) , arg0 ) ) ;
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Grammar_Normalization2_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}
ATerm lf7 ( ATerm arg0 ) {
CONS_ENTRY ( lf7sym , ATmakeAppl ( lf7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf7sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf6 ( ATerm arg0 ) {
CONS_ENTRY ( lf6sym , ATmakeAppl ( lf6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf6sym , arg0 ) ) ;
}

