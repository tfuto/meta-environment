#include  "asc-support.h"
static Symbol lf_AUX_Sdf2_Parse_Table7_1sym ;
static ATerm lf_AUX_Sdf2_Parse_Table7_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Sdf2_Parse_Table7 ( ) {
lf_AUX_Sdf2_Parse_Table7_1sym = ATmakeSymbol ( "prod(id(\"Sdf2-Parse-Table\"),w(\"\"),[l(\"normalize\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SDF\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Parse_Table7_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Parse-Table\"),w(\"\"),[l(\"normalize\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SDF\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Parse_Table7_1 , lf_AUX_Sdf2_Parse_Table7_1sym ) ;
}
void resolve_AUX_Sdf2_Parse_Table7 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"definition\"),w(\"\"),sort(\"Definition\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SDF\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"definition\"),w(\"\"),sort(\"Definition\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SDF\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[l(\"normalize\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"SDF\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[l(\"normalize\"),w(\"\"),ql(\"[[\"),w(\"\"),sort(\"SDF\"),w(\"\"),ql(\"]]\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"ModuleName\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<START>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Syntax\"),w(\"\"),[ql(\"<START>\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) ) ;
}
void init_AUX_Sdf2_Parse_Table7 ( ) {
}
ATerm lf_AUX_Sdf2_Parse_Table7_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Sdf2_Parse_Table7_1sym , ATmakeAppl ( lf_AUX_Sdf2_Parse_Table7_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
FUNC_EXIT ( ( * ef2 ) ( arg1 , arg0 , ( * ef3 ) ( ) ) ) ;
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Sdf2_Parse_Table7_1sym , arg0 , arg1 ) ) ;
}

