#include  "support.h"
static Symbol lf_AUX_Character_Class_Normalization15_1sym ;
static ATerm lf_AUX_Character_Class_Normalization15_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Character_Class_Normalization15 ( ) {
lf_AUX_Character_Class_Normalization15_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Normalization15_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Normalization15_1 , lf_AUX_Character_Class_Normalization15_1sym ) ;
}
void resolve_AUX_Character_Class_Normalization15 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Character_Class_Normalization15 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Character_Class_Normalization15_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Normalization15_1sym , ATmakeAppl ( lf_AUX_Character_Class_Normalization15_1sym , arg0 , arg1 ) ) ;
if ( term_equal ( arg0 , arg1 ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ) ) ;
}
else {
FUNC_EXIT_CONST ( constant1 , ( * ef2 ) ( ) ) ;
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Class_Normalization15_1sym , arg0 , arg1 ) ) ;
}

