#include  "support.h"
static Symbol lf_AUX_Action_Longest_Match2_1sym ;
static ATerm lf_AUX_Action_Longest_Match2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol lf5sym ;
static ATerm lf5 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
void register_AUX_Action_Longest_Match2 ( ) {
lf_AUX_Action_Longest_Match2_1sym = ATmakeSymbol ( "prod(id(\"Action-Longest-Match\"),w(\"\"),[l(\"filter\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Action_Longest_Match2_1sym ) ;
lf5sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf5sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"Label\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"STPair\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Restriction\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Action-Longest-Match\"),w(\"\"),[l(\"filter\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),no-attrs)" ) , lf_AUX_Action_Longest_Match2_1 , lf_AUX_Action_Longest_Match2_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Restriction\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"STPair\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Label\"))" ) , lf4 , lf4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf5 , lf5sym ) ;
}
void resolve_AUX_Action_Longest_Match2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"STPair\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[ql(\"[\"),w(\"\"),iter(sort(\"STPair\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Label\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"STPair\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Label\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"STPair\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Earley-Graphs\"),w(\"\"),[sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Label\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Earley-Graphs\"),w(\"\"),[sort(\"Symbol\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Label\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[sort(\"Symbol-Table\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbol-Table\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbol-Tables\"),w(\"\"),[sort(\"Symbol-Table\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Symbol-Table\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol-Table\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Labels\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Labels\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Labels\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Labels\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Labels\"),w(\"\"),[iter(sort(\"Label\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Labels\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Labels\"),w(\"\"),[iter(sort(\"Label\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Labels\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"CC-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"/\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\"),w(\"\"),sep(\",\"),w(\"\"),l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"/\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\"),w(\"\"),sep(\",\"),w(\"\"),l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"Action-PCC\"),w(\"\"),[l(\"union\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"Action-PCC\"),w(\"\"),[l(\"union\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"LabelSet\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Projection\"),w(\"\"),[l(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Projection\"),w(\"\"),[l(\"proj\"),w(\"\"),ql(\"_\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Lookahead\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Lookahead\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookaheads\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Lookahead\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Earley-Graphs\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Label\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Earley-Graphs\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Label\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Action_Longest_Match2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Action_Longest_Match2_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 13 ] ;
FUNC_ENTRY ( lf_AUX_Action_Longest_Match2_1sym , ATmakeAppl ( lf_AUX_Action_Longest_Match2_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf3sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( not_empty_list ( atmp100 ) ) {
tmp [ 0 ] = list_head ( atmp100 ) ;
{
tmp [ 1 ] = list_tail ( atmp100 ) ;
{
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 3 ] = arg_1 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 2 ] , ef4sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 2 ] ) ;
tmp [ 5 ] = ( * ef11 ) ( tmp [ 4 ] , ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef12sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 6 ] , ef13sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef2 ) ( lf3 ( make_list ( ( * ef3 ) ( ( * ef4 ) ( tmp [ 4 ] ) , ( * ef6 ) ( ( * ef7 ) ( lf4 ( make_list ( ( * ef4 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( tmp [ 3 ] ) , tmp [ 7 ] ) ) ) ) ) ) ) ) ) ) ) , lf_AUX_Action_Longest_Match2_1 ( ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) , ( * ef2 ) ( lf3 ( make_list ( tmp [ 1 ] ) ) ) ) ) ) ;
}
}
}
if ( check_sym ( tmp [ 2 ] , ef14sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 2 ] ) ;
if ( check_sym ( tmp [ 4 ] , ef15sym ) ) {
tmp [ 5 ] = arg_0 ( tmp [ 4 ] ) ;
tmp [ 6 ] = arg_1 ( tmp [ 4 ] ) ;
tmp [ 7 ] = arg_2 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 5 ] , ef16sym ) ) {
tmp [ 8 ] = arg_0 ( tmp [ 5 ] ) ;
if ( check_sym ( tmp [ 8 ] , lf5sym ) ) {
tmp [ 9 ] = arg_0 ( tmp [ 8 ] ) ;
tmp [ 10 ] = ( * ef11 ) ( tmp [ 6 ] , ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) ) ;
if ( check_sym ( tmp [ 10 ] , ef12sym ) ) {
tmp [ 11 ] = arg_0 ( tmp [ 10 ] ) ;
if ( check_sym ( tmp [ 11 ] , ef13sym ) ) {
tmp [ 12 ] = arg_0 ( tmp [ 11 ] ) ;
FUNC_EXIT ( ( * ef5 ) ( ( * ef2 ) ( lf3 ( make_list ( ( * ef3 ) ( ( * ef14 ) ( ( * ef15 ) ( ( * ef16 ) ( lf5 ( make_list ( tmp [ 9 ] ) ) ) , tmp [ 6 ] , tmp [ 7 ] ) ) , ( * ef6 ) ( ( * ef7 ) ( lf4 ( make_list ( ( * ef4 ) ( ( * ef8 ) ( ( * ef9 ) ( ( * ef10 ) ( tmp [ 3 ] ) , tmp [ 12 ] ) ) ) ) ) ) ) ) ) ) ) , lf_AUX_Action_Longest_Match2_1 ( ( * ef1 ) ( lf2 ( make_list ( atmp000 ) ) ) , ( * ef2 ) ( lf3 ( make_list ( tmp [ 1 ] ) ) ) ) ) ) ;
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
else {
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Action_Longest_Match2_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}
ATerm lf5 ( ATerm arg0 ) {
CONS_ENTRY ( lf5sym , ATmakeAppl ( lf5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf5sym , arg0 ) ) ;
}

