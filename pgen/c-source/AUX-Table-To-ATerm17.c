#include  "support.h"
static Symbol lf_AUX_Table_To_ATerm17_2sym ;
static ATerm lf_AUX_Table_To_ATerm17_2 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Table_To_ATerm17_1sym ;
static ATerm lf_AUX_Table_To_ATerm17_1 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
void register_AUX_Table_To_ATerm17 ( ) {
lf_AUX_Table_To_ATerm17_2sym = ATmakeSymbol ( "prod(id(\"Table-To-ATerm\"),w(\"\"),[l(\"prs2aterm\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"Label-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Table_To_ATerm17_2sym ) ;
lf_AUX_Table_To_ATerm17_1sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Table_To_ATerm17_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf_AUX_Table_To_ATerm17_1 , lf_AUX_Table_To_ATerm17_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Table-To-ATerm\"),w(\"\"),[l(\"prs2aterm\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"Label-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) , lf_AUX_Table_To_ATerm17_2 , lf_AUX_Table_To_ATerm17_2sym ) ;
}
void resolve_AUX_Table_To_ATerm17 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerm-Lists\"),w(\"\"),[sort(\"ATermList\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Table-To-ATerm\"),w(\"\"),[l(\"pr2aterm\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Priority\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Label-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Table-To-ATerm\"),w(\"\"),[l(\"pr2aterm\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Priority\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Label-Table\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[ql(\"[\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATermList\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Table_To_ATerm17 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Table_To_ATerm17_2 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 4 ] ;
FUNC_ENTRY ( lf_AUX_Table_To_ATerm17_2sym , ATmakeAppl ( lf_AUX_Table_To_ATerm17_2sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Table_To_ATerm17_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( ! not_empty_list ( atmp00 ) ) {
FUNC_EXIT_CONST ( constant0 , ( * ef3 ) ( ) ) ;
}
else {
tmp [ 0 ] = list_head ( atmp00 ) ;
tmp [ 1 ] = list_tail ( atmp00 ) ;
tmp [ 2 ] = ( * ef2 ) ( tmp [ 0 ] , arg1 ) ;
tmp [ 3 ] = lf_AUX_Table_To_ATerm17_2 ( lf_AUX_Table_To_ATerm17_1 ( make_list ( tmp [ 1 ] ) ) , arg1 ) ;
FUNC_EXIT ( ( * ef1 ) ( tmp [ 2 ] , tmp [ 3 ] ) ) ;
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Table_To_ATerm17_2sym , arg0 , arg1 ) ) ;
}
}
ATerm lf_AUX_Table_To_ATerm17_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Table_To_ATerm17_1sym , ATmakeAppl ( lf_AUX_Table_To_ATerm17_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Table_To_ATerm17_1sym , arg0 ) ) ;
}

