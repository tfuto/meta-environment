/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Character_Arithmetic10_1sym ;
static ATerm lf_AUX_Character_Arithmetic10_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Character_Arithmetic10 ( ) {
lf_AUX_Character_Arithmetic10_1sym = ATmakeSymbol ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"min\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Arithmetic10_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"min\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Arithmetic10_1 , lf_AUX_Character_Arithmetic10_1sym ) ;
}
void resolve_AUX_Character_Arithmetic10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"<\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"<\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Character_Arithmetic10 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Character_Arithmetic10_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Arithmetic10_1sym , ATmakeAppl ( lf_AUX_Character_Arithmetic10_1sym , arg0 , arg1 ) ) ;
if ( term_equal ( ( * ef1 ) ( arg0 , arg1 ) , ( constant0 ? constant0 : ( constant0 = ( * ef2 ) ( ) ) ) ) ) {
FUNC_EXIT ( arg0 ) ;
}
FUNC_EXIT ( arg1 ) ;
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Arithmetic10_1sym , arg0 , arg1 ) ) ;
}

