#include  "support.h"
static Symbol lf_AUX_Character_Class_Normalization14_1sym ;
static ATerm lf_AUX_Character_Class_Normalization14_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
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
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
void register_AUX_Character_Class_Normalization14 ( ) {
lf_AUX_Character_Class_Normalization14_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"(=\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Normalization14_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"(=\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Normalization14_1 , lf_AUX_Character_Class_Normalization14_1sym ) ;
}
void resolve_AUX_Character_Class_Normalization14 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"(-\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharClass\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"CharClass\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClass\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Character_Class_Normalization14 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Character_Class_Normalization14_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Normalization14_1sym , ATmakeAppl ( lf_AUX_Character_Class_Normalization14_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef3sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
if ( check_sym ( atmp0000 , ef5sym ) ) {
{
ATerm atmp00000 = arg_0 ( atmp0000 ) ;
FUNC_EXIT ( ( * ef6 ) ( atmp00000 , arg1 ) ) ;
}
}
}
}
}
}
}
}
if ( term_equal ( arg0 , arg1 ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ) ) ;
}
FUNC_EXIT ( ( * ef7 ) ( ( * ef8 ) ( arg0 , arg1 ) , arg1 ) ) ;
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Class_Normalization14_1sym , arg0 , arg1 ) ) ;
}

