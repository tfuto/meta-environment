#include  "support.h"
static Symbol lf_AUX_Character_Class_Membership5_1sym ;
static ATerm lf_AUX_Character_Class_Membership5_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
void register_AUX_Character_Class_Membership5 ( ) {
lf_AUX_Character_Class_Membership5_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Membership\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"equiv\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Membership5_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Membership\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"equiv\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Membership5_1 , lf_AUX_Character_Class_Membership5_1sym ) ;
}
void resolve_AUX_Character_Class_Membership5 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Membership\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"sub\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Membership\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"sub\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Character_Class_Membership5 ( ) {
}
ATerm lf_AUX_Character_Class_Membership5_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Membership5_1sym , ATmakeAppl ( lf_AUX_Character_Class_Membership5_1sym , arg0 , arg1 ) ) ;
FUNC_EXIT ( ( * ef1 ) ( ( * ef2 ) ( arg0 , arg1 ) , ( * ef2 ) ( arg1 , arg0 ) ) ) ;
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Class_Membership5_1sym , arg0 , arg1 ) ) ;
}

