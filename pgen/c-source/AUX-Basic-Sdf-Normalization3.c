#include  "support.h"
static Symbol lf_AUX_Basic_Sdf_Normalization3_1sym ;
static ATerm lf_AUX_Basic_Sdf_Normalization3_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
void register_AUX_Basic_Sdf_Normalization3 ( ) {
lf_AUX_Basic_Sdf_Normalization3_1sym = ATmakeSymbol ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"b-aux[[\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Basic_Sdf_Normalization3_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Restriction\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
register_prod ( ATparse ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"b-aux[[\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"]]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Basic_Sdf_Normalization3_1 , lf_AUX_Basic_Sdf_Normalization3_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Restriction\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Basic_Sdf_Normalization3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-LEX\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"restrictions\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"context-free\"),w(\"\"),ql(\"syntax\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-VARs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-VARs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Syntax\"),w(\"\"),[ql(\"lexical\"),w(\"\"),ql(\"variables\"),w(\"\"),sort(\"Productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXVARs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Sdf-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"-LEXVARs\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Basic_Sdf_Normalization3 ( ) {
}
ATerm lf_AUX_Basic_Sdf_Normalization3_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Basic_Sdf_Normalization3_1sym , ATmakeAppl ( lf_AUX_Basic_Sdf_Normalization3_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef3 ) ( ( * ef4 ) ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef5sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf2sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef6 ) ( ( * ef4 ) ( ( * ef2 ) ( lf2 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef7sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef8sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef9 ) ( ( * ef10 ) ( ( * ef8 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef11sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef8sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf3sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef9 ) ( ( * ef12 ) ( ( * ef8 ) ( lf3 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef13sym ) ) {
FUNC_EXIT ( arg0 ) ;
}
if ( check_sym ( arg0 , ef14sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
FUNC_EXIT ( ( * ef14 ) ( lf_AUX_Basic_Sdf_Normalization3_1 ( atmp00 ) , lf_AUX_Basic_Sdf_Normalization3_1 ( atmp01 ) ) ) ;
}
}
}
if ( check_sym ( arg0 , ef15sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef16sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef6 ) ( ( * ef17 ) ( ( * ef16 ) ( lf4 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef18sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef16sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef3 ) ( ( * ef17 ) ( ( * ef16 ) ( lf4 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef19sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef16sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef17 ) ( ( * ef20 ) ( ( * ef16 ) ( lf4 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
if ( check_sym ( arg0 , ef21sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef16sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , lf4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
FUNC_EXIT ( ( * ef17 ) ( ( * ef22 ) ( ( * ef16 ) ( lf4 ( make_list ( atmp0000 ) ) ) ) ) ) ;
}
}
}
}
}
}
FUNC_EXIT ( arg0 ) ;
FUNC_EXIT ( make_nf1 ( lf_AUX_Basic_Sdf_Normalization3_1sym , arg0 ) ) ;
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

