#include  "support.h"
static Symbol lf_AUX_Parse_Table13_1sym ;
static ATerm lf_AUX_Parse_Table13_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Parse_Table13 ( ) {
lf_AUX_Parse_Table13_1sym = ATmakeSymbol ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table-Int\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Parse_Table13_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table-Int\"),w(\"\"),no-attrs)" ) , lf_AUX_Parse_Table13_1 , lf_AUX_Parse_Table13_1sym ) ;
}
void resolve_AUX_Parse_Table13 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Parse-Table\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table-Int\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Parse-Table\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table-Int\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"states\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"states\"),w(\"\"),ql(\":=\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Parse-Table\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Basic-Integers\"),w(\"\"),[sort(\"IntCon\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Int\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"States\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Vertex\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"states\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[sort(\"Parse-Table\"),w(\"\"),ql(\"[\"),w(\"\"),l(\"states\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"States\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Int\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"States-Int\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Parse_Table13 ( ) {
}
ATerm lf_AUX_Parse_Table13_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 4 ] ;
FUNC_ENTRY ( lf_AUX_Parse_Table13_1sym , ATmakeAppl ( lf_AUX_Parse_Table13_1sym , arg0 , arg1 ) ) ;
tmp [ 0 ] = ( * ef4 ) ( ( * ef5 ) ( arg0 ) , arg1 ) ;
if ( check_sym ( tmp [ 0 ] , ef6sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ;
if ( check_sym ( tmp [ 2 ] , ef3sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( arg0 , tmp [ 1 ] ) , ( * ef3 ) ( tmp [ 3 ] ) ) ) ;
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Parse_Table13_1sym , arg0 , arg1 ) ) ;
}
}

