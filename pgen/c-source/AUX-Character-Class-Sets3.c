#include  "support.h"
static Symbol lf_AUX_Character_Class_Sets3_1sym ;
static ATerm lf_AUX_Character_Class_Sets3_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Character_Class_Sets3 ( ) {
lf_AUX_Character_Class_Sets3_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Sets\"),w(\"\"),[sort(\"CharClassSet\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"CharClassSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClassSet\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Sets3_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"CharClass\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Sets\"),w(\"\"),[sort(\"CharClassSet\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"CharClassSet\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClassSet\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Character_Class_Sets3_1 , lf_AUX_Character_Class_Sets3_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CharClass\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Character_Class_Sets3 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Sets\"),w(\"\"),[ql(\"{\"),w(\"\"),iter(sort(\"CharClass\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClassSet\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Sets\"),w(\"\"),[ql(\"{\"),w(\"\"),iter(sort(\"CharClass\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharClassSet\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Character_Class_Sets3 ( ) {
}
ATerm lf_AUX_Character_Class_Sets3_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Sets3_1sym , ATmakeAppl ( lf_AUX_Character_Class_Sets3_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf2sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
FUNC_EXIT ( ( * ef1 ) ( lf2 ( cons ( make_list ( atmp000 ) , make_list ( atmp100 ) ) ) ) ) ;
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Class_Sets3_1sym , arg0 , arg1 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

