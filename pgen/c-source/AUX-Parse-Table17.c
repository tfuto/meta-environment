#include  "support.h"
static Symbol lf_AUX_Parse_Table17_1sym ;
static ATerm lf_AUX_Parse_Table17_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef4sym ;
static funcptr ef4 ;
void register_AUX_Parse_Table17 ( ) {
lf_AUX_Parse_Table17_1sym = ATmakeSymbol ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Parse_Table17_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"State\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) , lf_AUX_Parse_Table17_1 , lf_AUX_Parse_Table17_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"State\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Parse_Table17 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"states\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"State-List\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"states\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Int\"),w(\"\"),l(\",\"),w(\"\"),sort(\"State-List\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State-List\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State-List\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"kernel\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Vertex\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"kernel\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Vertex\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"State\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"last\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"last\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"Int\"),w(\"\"),ql(\"+\"),w(\"\"),sort(\"Int\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"IntCon\"),w(\"\"),[sort(\"NatCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntCon\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"natcon\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NatCon\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"last\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"last\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"id\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"kernel\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"State\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"kernel\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-state\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-state\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"State\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Parse_Table17 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Parse_Table17_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_Parse_Table17_1sym , ATmakeAppl ( lf_AUX_Parse_Table17_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef3sym ) ) {
tmp [ 0 ] = arg_0 ( arg0 ) ;
tmp [ 1 ] = arg_1 ( arg0 ) ;
if ( check_sym ( tmp [ 0 ] , ef4sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 1 ] , ef5sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ;
if ( check_sym ( tmp [ 3 ] , lf2sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
tmp [ 5 ] = tmp [ 4 ] ;
tmp [ 6 ] = tmp [ 4 ] ;
while ( not_empty_list ( tmp [ 4 ] ) ) {
tmp [ 7 ] = list_head ( tmp [ 4 ] ) ;
tmp [ 4 ] = list_tail ( tmp [ 4 ] ) ;
if ( term_equal ( ( * ef6 ) ( tmp [ 7 ] ) , arg1 ) ) {
FUNC_EXIT ( ( * ef1 ) ( arg0 , ( * ef2 ) ( tmp [ 7 ] ) ) ) ;
}
tmp [ 6 ] = list_tail ( tmp [ 6 ] ) ;
tmp [ 4 ] = tmp [ 6 ] ;
}
}
}
}
}
tmp [ 0 ] = ( * ef12 ) ( arg0 ) ;
if ( check_sym ( tmp [ 0 ] , ef4sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = ( * ef13 ) ( ( * ef14 ) ( ( constant0 ? constant0 : ( constant0 = ( * ef15 ) ( ) ) ) , arg1 ) , ( * ef4 ) ( tmp [ 1 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef7 ) ( ( * ef8 ) ( arg0 , ( * ef9 ) ( ( * ef4 ) ( tmp [ 1 ] ) , ( * ef4 ) ( ( * ef10 ) ( ( * ef11 ) ( lf3 ( make_list ( make_char ( 49 ) ) ) ) ) ) ) ) , ( * ef4 ) ( tmp [ 1 ] ) , tmp [ 2 ] ) , ( * ef4 ) ( tmp [ 1 ] ) ) ) ;
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Parse_Table17_1sym , arg0 , arg1 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

