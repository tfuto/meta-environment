#include  "support.h"
static Symbol lf_AUX_Character_Class_Normalization8_1sym ;
static ATerm lf_AUX_Character_Class_Normalization8_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef4sym ;
static funcptr ef4 ;
void register_AUX_Character_Class_Normalization8 ( ) {
lf_AUX_Character_Class_Normalization8_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[l(\"sorted\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Normalization8_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[l(\"sorted\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Normalization8_1 , lf_AUX_Character_Class_Normalization8_1sym ) ;
}
void resolve_AUX_Character_Class_Normalization8 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"OptCharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\"),w(\"\"),sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\"),w(\"\"),sep(\",\"),w(\"\"),l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"CharRanges\"),w(\"\"),sort(\"CharRanges\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRanges\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\"),w(\"\"),sep(\",\"),w(\"\"),l(\"memo\")],w(\"\"),l(\"}\")))" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharRange\"),w(\"\"),ql(\"-<<<\"),w(\"\"),sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharRange\"),w(\"\"),ql(\"-<<<\"),w(\"\"),sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Character_Class_Normalization8 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Character_Class_Normalization8_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Normalization8_1sym , ATmakeAppl ( lf_AUX_Character_Class_Normalization8_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( ) ) ;
}
if ( check_sym ( arg0 , ef3sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef4sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
FUNC_EXIT_CONST ( constant0 , ( * ef2 ) ( ) ) ;
}
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , ef5sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( atmp000 , ef4sym ) ) {
{
ATerm atmp0000 = arg_0 ( atmp000 ) ;
{
ATerm atmp001 = arg_1 ( atmp00 ) ;
if ( check_sym ( atmp001 , ef4sym ) ) {
{
ATerm atmp0010 = arg_0 ( atmp001 ) ;
FUNC_EXIT ( ( * ef6 ) ( atmp0000 , atmp0010 ) ) ;
}
}
{
ATerm atmp001 = arg_1 ( atmp00 ) ;
if ( check_sym ( atmp001 , ef5sym ) ) {
{
ATerm atmp0010 = arg_0 ( atmp001 ) ;
if ( check_sym ( atmp0010 , ef4sym ) ) {
{
ATerm atmp00100 = arg_0 ( atmp0010 ) ;
{
ATerm atmp0011 = arg_1 ( atmp001 ) ;
FUNC_EXIT ( ( * ef7 ) ( ( * ef6 ) ( atmp0000 , atmp00100 ) , lf_AUX_Character_Class_Normalization8_1 ( ( * ef3 ) ( ( * ef5 ) ( ( * ef4 ) ( atmp00100 ) , atmp0011 ) ) ) ) ) ;
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
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Character_Class_Normalization8_1sym , arg0 ) ) ;
}

