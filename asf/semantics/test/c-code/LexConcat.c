/* This C code is generated by the asf compiler version 2.2 */

#include  "asc-support-me.h"
static Symbol lf_list_1sym ;
static ATerm lf_list_1 ( ATerm arg1 ) ;
static Symbol lf_2sym ;
static ATerm lf_2 ( ATerm arg1 ) ;
static Symbol lf_3sym ;
static ATerm lf_3 ( ATerm arg1 , ATerm arg2 ) ;
void register_LexConcat ( ) {
lf_list_1sym = ATmakeSymbol ( "list(iter-star(char-class([range(0,255)])))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_list_1sym ) ;
lf_2sym = ATmakeSymbol ( "prod([lex(sort(\"ID\"))],cf(sort(\"ID\")),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_2sym ) ;
lf_3sym = ATmakeSymbol ( "prod([lit(\"concat\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(sort(\"ID\")),cf(opt(layout)),lit(\",\"),cf(opt(layout)),cf(sort(\"ID\")),cf(opt(layout)),lit(\")\")],cf(sort(\"ID\")),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_3sym ) ;
register_prod ( ATparse ( "list(iter-star(char-class([range(0,255)])))" ) , lf_list_1 , lf_list_1sym ) ;
register_prod ( ATparse ( "prod([lex(sort(\"ID\"))],cf(sort(\"ID\")),no-attrs)" ) , lf_2 , lf_2sym ) ;
register_prod ( ATparse ( "prod([lit(\"concat\"),cf(opt(layout)),lit(\"(\"),cf(opt(layout)),cf(sort(\"ID\")),cf(opt(layout)),lit(\",\"),cf(opt(layout)),cf(sort(\"ID\")),cf(opt(layout)),lit(\")\")],cf(sort(\"ID\")),no-attrs)" ) , lf_3 , lf_3sym ) ;
}
void resolve_LexConcat ( ) {
}
void init_LexConcat ( ) {
}
ATerm lf_3 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_3sym , ATmakeAppl ( lf_3sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , lf_2sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf_list_1sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( check_sym ( arg1 , lf_2sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( check_sym ( atmp10 , lf_list_1sym ) ) {
{
ATerm atmp100 = arg_0 ( atmp10 ) ;
if ( not_empty_list ( atmp000 ) ) {
if ( not_empty_list ( atmp100 ) ) {
FUNC_EXIT ( make_nf1 ( lf_2sym , make_nf1 ( lf_list_1sym , cons ( make_list ( atmp000 ) , cons ( make_list_char ( 95 ) , make_list ( atmp100 ) ) ) ) ) ) ;
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
FUNC_EXIT ( make_nf2 ( lf_3sym , arg0 , arg1 ) ) ;
}
ATerm lf_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_2sym , ATmakeAppl ( lf_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_2sym , arg0 ) ) ;
}
ATerm lf_list_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_list_1sym , ATmakeAppl ( lf_list_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_list_1sym , arg0 ) ) ;
}
#ifdef ASF_MAIN                                           
int main(int argc, char *argv[])                         
{                                                        
  return asc_support_main(argc, argv,                    
                          register_LexConcat,                   
                          resolve_LexConcat,                    
                          init_LexConcat);                      
}                                                        
#endif                                                   
