/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Priority_Sdf_Syntax1_1sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_3sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_2sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_4sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_4 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_6sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_6 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_5sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_5 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_7sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_7 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_8sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_8 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_9sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_9 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_10sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_10 ( ATerm arg1 ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_11sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_11 ( ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_12sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_12 ( ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_13sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_13 ( ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_14sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_14 ( ) ;
static Symbol lf_AUX_Priority_Sdf_Syntax1_15sym ;
static ATerm lf_AUX_Priority_Sdf_Syntax1_15 ( ) ;
void register_AUX_Priority_Sdf_Syntax1 ( ) {
lf_AUX_Priority_Sdf_Syntax1_1sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_1sym ) ;
lf_AUX_Priority_Sdf_Syntax1_3sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_3sym ) ;
lf_AUX_Priority_Sdf_Syntax1_2sym = ATmakeSymbol ( "listtype(sort(\"Priority\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_2sym ) ;
lf_AUX_Priority_Sdf_Syntax1_4sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Group\"),w(\"\"),sort(\"Associativity\"),w(\"\"),sort(\"Group\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_4sym ) ;
lf_AUX_Priority_Sdf_Syntax1_6sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\">\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_6sym ) ;
lf_AUX_Priority_Sdf_Syntax1_5sym = ATmakeSymbol ( "listtype(sort(\"Group\"),ql(\">\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_5sym ) ;
lf_AUX_Priority_Sdf_Syntax1_7sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Associativity\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_7sym ) ;
lf_AUX_Priority_Sdf_Syntax1_8sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_8sym ) ;
lf_AUX_Priority_Sdf_Syntax1_9sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_9sym ) ;
lf_AUX_Priority_Sdf_Syntax1_10sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Associativity\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_10sym ) ;
lf_AUX_Priority_Sdf_Syntax1_11sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"bracket\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_11sym ) ;
lf_AUX_Priority_Sdf_Syntax1_12sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_12sym ) ;
lf_AUX_Priority_Sdf_Syntax1_13sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"non-assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_13sym ) ;
lf_AUX_Priority_Sdf_Syntax1_14sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"right\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_14sym ) ;
lf_AUX_Priority_Sdf_Syntax1_15sym = ATmakeSymbol ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"left\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Priority_Sdf_Syntax1_15sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"priorities\"),w(\"\"),sort(\"Priorities\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Grammar\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_1 , lf_AUX_Priority_Sdf_Syntax1_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Priority\"),ql(\",\"))" ) , lf_AUX_Priority_Sdf_Syntax1_2 , lf_AUX_Priority_Sdf_Syntax1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Priority\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priorities\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_3 , lf_AUX_Priority_Sdf_Syntax1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Group\"),w(\"\"),sort(\"Associativity\"),w(\"\"),sort(\"Group\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_4 , lf_AUX_Priority_Sdf_Syntax1_4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Group\"),ql(\">\"))" ) , lf_AUX_Priority_Sdf_Syntax1_5 , lf_AUX_Priority_Sdf_Syntax1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Group\"),w(\"\"),ql(\">\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Priority\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_6 , lf_AUX_Priority_Sdf_Syntax1_6sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Associativity\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_7 , lf_AUX_Priority_Sdf_Syntax1_7sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Productions\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_8 , lf_AUX_Priority_Sdf_Syntax1_8sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Production\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Group\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_9 , lf_AUX_Priority_Sdf_Syntax1_9sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[sort(\"Associativity\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_10 , lf_AUX_Priority_Sdf_Syntax1_10sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"bracket\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attribute\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_11 , lf_AUX_Priority_Sdf_Syntax1_11sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_12 , lf_AUX_Priority_Sdf_Syntax1_12sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"non-assoc\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_13 , lf_AUX_Priority_Sdf_Syntax1_13sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"right\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_14 , lf_AUX_Priority_Sdf_Syntax1_14sym ) ;
register_prod ( ATparse ( "prod(id(\"Priority-Sdf-Syntax\"),w(\"\"),[ql(\"left\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Associativity\"),w(\"\"),no-attrs)" ) , lf_AUX_Priority_Sdf_Syntax1_15 , lf_AUX_Priority_Sdf_Syntax1_15sym ) ;
}
void resolve_AUX_Priority_Sdf_Syntax1 ( ) {
}
void init_AUX_Priority_Sdf_Syntax1 ( ) {
}
ATerm lf_AUX_Priority_Sdf_Syntax1_15 ( ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_15sym , ATmakeAppl0 ( lf_AUX_Priority_Sdf_Syntax1_15sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Priority_Sdf_Syntax1_15sym ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_14 ( ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_14sym , ATmakeAppl0 ( lf_AUX_Priority_Sdf_Syntax1_14sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Priority_Sdf_Syntax1_14sym ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_13 ( ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_13sym , ATmakeAppl0 ( lf_AUX_Priority_Sdf_Syntax1_13sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Priority_Sdf_Syntax1_13sym ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_12 ( ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_12sym , ATmakeAppl0 ( lf_AUX_Priority_Sdf_Syntax1_12sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Priority_Sdf_Syntax1_12sym ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_11 ( ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_11sym , ATmakeAppl0 ( lf_AUX_Priority_Sdf_Syntax1_11sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_AUX_Priority_Sdf_Syntax1_11sym ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_10 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_10sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_10sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_10sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_9 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_9sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_9sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_9sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_8 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_8sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_8sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_7 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_7sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_7sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Priority_Sdf_Syntax1_7sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_5sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_6 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_6sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_6sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_4 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_4sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_4sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Priority_Sdf_Syntax1_4sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_2sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_3sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Priority_Sdf_Syntax1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Priority_Sdf_Syntax1_1sym , ATmakeAppl ( lf_AUX_Priority_Sdf_Syntax1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Priority_Sdf_Syntax1_1sym , arg0 ) ) ;
}

