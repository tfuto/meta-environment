/* This C code is generated by the AsfSdfCompiler version 1.0 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_Eqs_Conds7_2sym ;
static ATerm lf_AUX_Add_Eqs_Conds7_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol lf_AUX_Add_Eqs_Conds7_1sym ;
static ATerm lf_AUX_Add_Eqs_Conds7_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Add_Eqs_Conds7 ( ) {
lf_AUX_Add_Eqs_Conds7_2sym = ATmakeSymbol ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Eqs_Conds7_2sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_Add_Eqs_Conds7_1sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_Eqs_Conds7_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf_AUX_Add_Eqs_Conds7_1 , lf_AUX_Add_Eqs_Conds7_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-Eqs-Conds\"),w(\"\"),[ql(\"eqs-and-conds-for-symbols\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"Symbol\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_Eqs_Conds7_2 , lf_AUX_Add_Eqs_Conds7_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_Add_Eqs_Conds7 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sorts-Sdf-Syntax\"),w(\"\"),[sort(\"Sort\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"sort\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Sort\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attributes\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Add_Eqs_Conds7 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Add_Eqs_Conds7_2 ( ATerm arg0 ) {
{
ATerm tmp [ 5 ] ;
FUNC_ENTRY ( lf_AUX_Add_Eqs_Conds7_2sym , ATmakeAppl ( lf_AUX_Add_Eqs_Conds7_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Add_Eqs_Conds7_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
( tmp [ 2 ] = lf_AUX_Add_Eqs_Conds7_2 ( lf_AUX_Add_Eqs_Conds7_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 2 ] , ef1sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( cons ( make_list ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_Add_Eqs_Conds7_1 ( cons ( make_list ( tmp [ 0 ] ) , cons ( make_list ( ( * ef4 ) ( ( * ef5 ) ( lf4 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 61 ] , char_table [ 34 ] ) ) ) ) ) , make_list ( tmp [ 0 ] ) ) ) ) ) , ( * ef6 ) ( ( * ef7 ) ( lf4 ( ( ATerm ) ATmakeList ( 8 , char_table [ 69 ] , char_table [ 113 ] , char_table [ 117 ] , char_table [ 97 ] , char_table [ 116 ] , char_table [ 105 ] , char_table [ 111 ] , char_table [ 110 ] ) ) ) ) , ( * ef8 ) ( ) ) ) , cons ( make_list ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_Add_Eqs_Conds7_1 ( cons ( make_list ( tmp [ 0 ] ) , cons ( make_list ( ( * ef4 ) ( ( * ef5 ) ( lf4 ( ( ATerm ) ATmakeList ( 3 , char_table [ 34 ] , char_table [ 61 ] , char_table [ 34 ] ) ) ) ) ) , make_list ( tmp [ 0 ] ) ) ) ) ) , ( * ef6 ) ( ( * ef7 ) ( lf4 ( ( ATerm ) ATmakeList ( 9 , char_table [ 67 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 100 ] , char_table [ 105 ] , char_table [ 116 ] , char_table [ 105 ] , char_table [ 111 ] , char_table [ 110 ] ) ) ) ) , ( * ef8 ) ( ) ) ) , cons ( make_list ( ( * ef2 ) ( ( * ef3 ) ( lf_AUX_Add_Eqs_Conds7_1 ( cons ( make_list ( tmp [ 0 ] ) , cons ( make_list ( ( * ef4 ) ( ( * ef5 ) ( lf4 ( ( ATerm ) ATmakeList ( 4 , char_table [ 34 ] , char_table [ 33 ] , char_table [ 61 ] , char_table [ 34 ] ) ) ) ) ) , make_list ( tmp [ 0 ] ) ) ) ) ) , ( * ef6 ) ( ( * ef7 ) ( lf4 ( ( ATerm ) ATmakeList ( 9 , char_table [ 67 ] , char_table [ 111 ] , char_table [ 110 ] , char_table [ 100 ] , char_table [ 105 ] , char_table [ 116 ] , char_table [ 105 ] , char_table [ 111 ] , char_table [ 110 ] ) ) ) ) , ( * ef8 ) ( ) ) ) , make_list ( tmp [ 4 ] ) ) ) ) ) ) ) ;
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ;
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_Eqs_Conds7_2sym , arg0 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf_AUX_Add_Eqs_Conds7_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Add_Eqs_Conds7_1sym , ATmakeAppl ( lf_AUX_Add_Eqs_Conds7_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Add_Eqs_Conds7_1sym , arg0 ) ) ;
}
ATerm lf4 ( ATerm arg0 ) {
CONS_ENTRY ( lf4sym , ATmakeAppl ( lf4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf4sym , arg0 ) ) ;
}

