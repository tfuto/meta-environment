#include  "support.h"
static Symbol lf_AUX_Parse_Table16_1sym ;
static ATerm lf_AUX_Parse_Table16_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef5sym ;
static funcptr ef5 ;
void register_AUX_Parse_Table16 ( ) {
lf_AUX_Parse_Table16_1sym = ATmakeSymbol ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Parse_Table16_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"State\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) , lf_AUX_Parse_Table16_1 , lf_AUX_Parse_Table16_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"State\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Parse_Table16 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"states\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"State-List\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"states\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"State-List\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State-List\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State-List\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-state\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-state\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Parse_Table16 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Parse_Table16_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 1 ] ;
FUNC_ENTRY ( lf_AUX_Parse_Table16_1sym , ATmakeAppl ( lf_AUX_Parse_Table16_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , ef3sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( atmp010 , lf2sym ) ) {
tmp [ 0 ] = arg_0 ( atmp010 ) ;
{
ATerm atmp010010 ;
ATerm atmp01000 [ 2 ] ;
atmp01000 [ 0 ] = tmp [ 0 ] ;
atmp01000 [ 1 ] = tmp [ 0 ] ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
atmp010010 = list_head ( tmp [ 0 ] ) ;
tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ;
if ( check_sym ( arg1 , ef2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( term_equal ( ( * ef4 ) ( atmp010010 ) , arg1 ) ) {
FUNC_EXIT ( atmp010010 ) ;
}
}
}
atmp01000 [ 1 ] = list_tail ( atmp01000 [ 1 ] ) ;
tmp [ 0 ] = atmp01000 [ 1 ] ;
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
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , ef3sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( atmp010 , lf2sym ) ) {
{
ATerm atmp0100 = arg_0 ( atmp010 ) ;
if ( check_sym ( arg1 , ef2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
FUNC_EXIT_CONST ( constant0 , ( * ef5 ) ( ) ) ;
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
FUNC_EXIT ( make_nf2 ( lf_AUX_Parse_Table16_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

