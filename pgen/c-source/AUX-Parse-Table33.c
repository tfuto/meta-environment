#include  "support.h"
static Symbol lf_AUX_Parse_Table33_1sym ;
static ATerm lf_AUX_Parse_Table33_1 ( ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
void register_AUX_Parse_Table33 ( ) {
lf_AUX_Parse_Table33_1sym = ATmakeSymbol ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-action-table\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Table\"),w(\"\"),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Parse_Table33_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Action-Entry\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
register_prod ( ATparse ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"new-action-table\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Table\"),w(\"\"),no-attrs)" ) , lf_AUX_Parse_Table33_1 , lf_AUX_Parse_Table33_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Action-Entry\"),ql(\",\"))" ) , lf2 , lf2sym ) ;
}
void resolve_AUX_Parse_Table33 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"actions\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Action-Entries\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Table\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[l(\"actions\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Action-Entries\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Table\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Action-Entry\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Entries\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Parse-Table\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Action-Entry\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Action-Entries\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
void init_AUX_Parse_Table33 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
}
ATerm lf_AUX_Parse_Table33_1 ( ) {
FUNC_ENTRY ( lf_AUX_Parse_Table33_1sym , ATmakeAppl0 ( lf_AUX_Parse_Table33_1sym ) ) ;
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( ( * ef2 ) ( lf2 ( make_list ( null ( ) ) ) ) ) ) ;
FUNC_EXIT_CONST ( constant1 , make_nf0 ( lf_AUX_Parse_Table33_1sym ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

