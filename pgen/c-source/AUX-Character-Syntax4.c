#include  "support.h"
static Symbol lf_AUX_Character_Syntax4_1sym ;
static ATerm lf_AUX_Character_Syntax4_1 ( ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Character_Syntax4 ( ) {
lf_AUX_Character_Syntax4_1sym = ATmakeSymbol ( "prod(id(\"Character-Syntax\"),w(\"\"),[ql(\"\\\\\\\\BOT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Syntax4_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Syntax\"),w(\"\"),[ql(\"\\\\\\\\BOT\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Syntax4_1 , lf_AUX_Character_Syntax4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Character_Syntax4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Syntax\"),w(\"\"),[sort(\"NumChar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Syntax\"),w(\"\"),[sort(\"NumChar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"numchar\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NumChar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"numchar\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"NumChar\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Character_Syntax4 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Character_Syntax4_1 ( ) {
FUNC_ENTRY ( lf_AUX_Character_Syntax4_1sym , ATmakeAppl0 ( lf_AUX_Character_Syntax4_1sym ) ) ;
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( lf2 ( ( ATerm ) ATmakeList ( 2 , char_table [ 92 ] , char_table [ 48 ] ) ) ) ) ) ;
FUNC_EXIT_CONST ( constant1 , make_nf0 ( lf_AUX_Character_Syntax4_1sym ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

