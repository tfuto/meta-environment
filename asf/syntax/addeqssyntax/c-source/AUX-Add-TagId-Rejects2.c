/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Add_TagId_Rejects2_1_recursivesym ;
static ATerm lf_AUX_Add_TagId_Rejects2_1_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Add_TagId_Rejects2_1sym ;
static ATerm lf_AUX_Add_TagId_Rejects2_1 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Add_TagId_Rejects2 ( ) {
lf_AUX_Add_TagId_Rejects2_1_recursivesym = ATmakeSymbol ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tagid-rejects\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_TagId_Rejects2_1_recursivesym ) ;
lf_AUX_Add_TagId_Rejects2_1sym = ATmakeSymbol ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tagid-rejects\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Add_TagId_Rejects2_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Module\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Production\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tagid-rejects\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_TagId_Rejects2_1 , lf_AUX_Add_TagId_Rejects2_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tagid-rejects\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Definition\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) , lf_AUX_Add_TagId_Rejects2_1_recursive , lf_AUX_Add_TagId_Rejects2_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Module\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Production\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Add_TagId_Rejects2 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Module\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Definition\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Module\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Definition\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Kernel-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Production\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tir-for-mod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Add-TagId-Rejects\"),w(\"\"),[ql(\"add-tir-for-mod\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Module\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Productions\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Add_TagId_Rejects2 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Add_TagId_Rejects2_1 ( ATerm arg0 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_Add_TagId_Rejects2_1sym , ATmakeAppl ( lf_AUX_Add_TagId_Rejects2_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( ! not_empty_list ( atmp000 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef2sym , lf3 ( make_list ( null ( ) ) ) ) ) ;
}
else {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
( tmp [ 1 ] = list_tail ( atmp000 ) ) ;
( tmp [ 2 ] = ( * ef3 ) ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = lf_AUX_Add_TagId_Rejects2_1 ( make_nf1 ( ef1sym , lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , lf3sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef2sym , lf3 ( cons ( make_list ( tmp [ 4 ] ) , make_list ( tmp [ 7 ] ) ) ) ) ) ;
}
}
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_TagId_Rejects2_1sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Add_TagId_Rejects2_1_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_Add_TagId_Rejects2_1_recursivesym , ATmakeAppl ( lf_AUX_Add_TagId_Rejects2_1_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
{
ATerm atmp000 = atmp00 ;
if ( ! not_empty_list ( atmp000 ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef2sym , lf3 ( make_list ( null ( ) ) ) ) ) ;
}
else {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
( tmp [ 1 ] = list_tail ( atmp000 ) ) ;
( tmp [ 2 ] = ( * ef3 ) ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , ef2sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = lf_AUX_Add_TagId_Rejects2_1 ( make_nf1 ( ef1sym , lf2 ( make_list ( tmp [ 1 ] ) ) ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef2sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , lf3sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef2sym , lf3 ( cons ( make_list ( tmp [ 4 ] ) , make_list ( tmp [ 7 ] ) ) ) ) ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Add_TagId_Rejects2_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

