#include  "support.h"
static Symbol lf_AUX_Grammar_Syntax2_1sym ;
static ATerm lf_AUX_Grammar_Syntax2_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Grammar_Syntax2 ( ) {
lf_AUX_Grammar_Syntax2_1sym = ATmakeSymbol ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Grammar_Syntax2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Grammar_Syntax2_1 , lf_AUX_Grammar_Syntax2_1sym ) ;
}
void resolve_AUX_Grammar_Syntax2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Syntax\"),w(\"\"),[ql(\"(/)\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),ql(\"<>\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[sort(\"Grammar\"),w(\"\"),ql(\"<>\"),w(\"\"),sort(\"Grammar\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Grammar-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Grammar\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar-Grammar\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Grammar_Syntax2 ( ) {
}
ATerm lf_AUX_Grammar_Syntax2_1 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 3 ] ;
FUNC_ENTRY ( lf_AUX_Grammar_Syntax2_1sym , ATmakeAppl ( lf_AUX_Grammar_Syntax2_1sym , arg0 , arg1 ) ) ;
{
ATerm ltmp [ 2 ] ;
lbl_lf_AUX_Grammar_Syntax2_1 : ltmp [ 0 ] = arg0 ;
ltmp [ 1 ] = arg1 ;
if ( check_sym ( ltmp [ 0 ] , ef1sym ) ) {
FUNC_EXIT ( ltmp [ 1 ] ) ;
}
if ( check_sym ( ltmp [ 0 ] , lf_AUX_Grammar_Syntax2_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
tmp [ 0 ] = ( * ef2 ) ( atmp01 , ltmp [ 1 ] ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ;
arg0 = lf_AUX_Grammar_Syntax2_1 ( atmp00 , tmp [ 1 ] ) ;
arg1 = tmp [ 2 ] ;
goto lbl_lf_AUX_Grammar_Syntax2_1 ;
}
}
}
}
if ( check_sym ( ltmp [ 1 ] , ef1sym ) ) {
FUNC_EXIT ( ltmp [ 0 ] ) ;
}
if ( check_sym ( ltmp [ 1 ] , lf_AUX_Grammar_Syntax2_1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
{
ATerm atmp11 = arg_1 ( arg1 ) ;
arg0 = lf_AUX_Grammar_Syntax2_1 ( ltmp [ 0 ] , atmp10 ) ;
arg1 = atmp11 ;
goto lbl_lf_AUX_Grammar_Syntax2_1 ;
}
}
}
tmp [ 0 ] = ( * ef2 ) ( ltmp [ 0 ] , ltmp [ 1 ] ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ;
arg0 = tmp [ 1 ] ;
arg1 = tmp [ 2 ] ;
goto lbl_lf_AUX_Grammar_Syntax2_1 ;
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Grammar_Syntax2_1sym , ltmp [ 0 ] , ltmp [ 1 ] ) ) ;
}
}
}

