/* This C code is generated by the asf compiler version 2.2 */

#include  "asc-support-me.h"
static Symbol lf_1sym ;
static ATerm lf_1 ( ATerm arg1 ) ;
static Symbol lf_list_2sym ;
static ATerm lf_list_2 ( ATerm arg1 ) ;
static Symbol lf_accu_td_3sym ;
static ATerm lf_accu_td_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_list_4sym ;
static ATerm lf_list_4 ( ATerm arg1 ) ;
static Symbol lf_5sym ;
static ATerm lf_5 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_list_6sym ;
static ATerm lf_list_6 ( ATerm arg1 ) ;
void register_NumberTree ( ) {
lf_1sym = ATmakeSymbol ( "prod([lit(\"do-collect\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(sort(\"Tree\")),cf(opt(layout)),lit(\")\")],cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_1sym ) ;
lf_list_2sym = ATmakeSymbol ( "list(cf(iter-star-sep(sort(\"Number\"),lit(\";\"))))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_list_2sym ) ;
lf_accu_td_3sym = ATmakeSymbol ( "prod([lit(\"collect\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),sort(\"***TRAVERSED***\"),cf(opt(layout)),lit(\",\"),cf(opt(layout)),cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),cf(opt(layout)),lit(\")\")],cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),attrs([term(\"traversal\"(\"accu\",\"top-down\"))]))" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_accu_td_3sym ) ;
lf_list_4sym = ATmakeSymbol ( "list(cf(iter-sep(sort(\"Tree\"),lit(\",\"))))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_list_4sym ) ;
lf_5sym = ATmakeSymbol ( "prod([cf(sort(\"Number\")),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(iter-sep(sort(\"Tree\"),lit(\",\"))),cf(opt(layout)),lit(\")\")],cf(sort(\"Tree\")),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_5sym ) ;
lf_list_6sym = ATmakeSymbol ( "list(cf(iter-star-sep(sort(\"Tree\"),lit(\",\"))))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_list_6sym ) ;
register_prod ( ATparse ( "prod([lit(\"do-collect\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(sort(\"Tree\")),cf(opt(layout)),lit(\")\")],cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),no-attrs)" ) , lf_1 , lf_1sym ) ;
register_prod ( ATparse ( "list(cf(iter-star-sep(sort(\"Number\"),lit(\";\"))))" ) , lf_list_2 , lf_list_2sym ) ;
register_prod ( ATparse ( "prod([lit(\"collect\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),sort(\"***TRAVERSED***\"),cf(opt(layout)),lit(\",\"),cf(opt(layout)),cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),cf(opt(layout)),lit(\")\")],cf(iter-star-sep(sort(\"Number\"),lit(\";\"))),attrs([term(\"traversal\"(\"accu\",\"top-down\"))]))" ) , lf_accu_td_3 , lf_accu_td_3sym ) ;
register_prod ( ATparse ( "list(cf(iter-sep(sort(\"Tree\"),lit(\",\"))))" ) , lf_list_4 , lf_list_4sym ) ;
register_prod ( ATparse ( "prod([cf(sort(\"Number\")),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(iter-sep(sort(\"Tree\"),lit(\",\"))),cf(opt(layout)),lit(\")\")],cf(sort(\"Tree\")),no-attrs)" ) , lf_5 , lf_5sym ) ;
register_prod ( ATparse ( "list(cf(iter-star-sep(sort(\"Tree\"),lit(\",\"))))" ) , lf_list_6 , lf_list_6sym ) ;
}
void resolve_NumberTree ( ) {
}
void init_NumberTree ( ) {
}
ATerm lf_accu_td_3 ( ATerm arg0 , ATerm arg1 ) {
{
ATerm tmp [ 2 ] ;
FUNC_ENTRY ( lf_accu_td_3sym , ATmakeAppl ( lf_accu_td_3sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_5sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( atmp01 , lf_list_4sym ) ) {
{
ATerm atmp010 = arg_0 ( atmp01 ) ;
if ( check_sym ( arg1 , lf_list_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( not_empty_list ( atmp010 ) ) {
( tmp [ 0 ] = lf_accu_td_3 ( make_nf1 ( lf_list_6sym , make_list ( atmp010 ) ) , make_nf1 ( lf_list_2sym , cons ( make_list ( atmp10 ) , make_list ( atmp00 ) ) ) ) ) ;
if ( check_sym ( tmp [ 0 ] , lf_list_2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
FUNC_EXIT ( lf_list_2 ( make_list ( tmp [ 1 ] ) ) ) ;
}
}
}
}
}
}
}
}
}
if ( check_sym ( arg1 , lf_list_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( term_equal ( get_sort ( arg0 ) , parse_sort ( "cf(sort(\"Number\"))" ) ) ) {
FUNC_EXIT ( lf_list_2 ( cons ( make_list ( atmp10 ) , make_list ( arg0 ) ) ) ) ;
}
}
}
FUNC_EXIT ( call_kids_accu ( lf_accu_td_3 , arg0 , arg1 , ATempty ) ) ;
}
}
ATerm lf_1 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_1sym , ATmakeAppl ( lf_1sym , arg0 ) ) ;
FUNC_EXIT ( lf_accu_td_3 ( arg0 , make_nf1 ( lf_list_2sym , make_list ( null ( ) ) ) ) ) ;
FUNC_EXIT ( make_nf1 ( lf_1sym , arg0 ) ) ;
}
ATerm lf_list_6 ( ATerm arg0 ) {
CONS_ENTRY ( lf_list_6sym , ATmakeAppl ( lf_list_6sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_list_6sym , arg0 ) ) ;
}
ATerm lf_5 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_5sym , ATmakeAppl ( lf_5sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_5sym , arg0 , arg1 ) ) ;
}
ATerm lf_list_4 ( ATerm arg0 ) {
CONS_ENTRY ( lf_list_4sym , ATmakeAppl ( lf_list_4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_list_4sym , arg0 ) ) ;
}
ATerm lf_list_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_list_2sym , ATmakeAppl ( lf_list_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_list_2sym , arg0 ) ) ;
}
#ifdef ASF_MAIN                                           
int main(int argc, char *argv[])                         
{                                                        
  return asc_support_main(argc, argv,                    
                          register_NumberTree,                   
                          resolve_NumberTree,                    
                          init_NumberTree);                      
}                                                        
#endif                                                   
