/* This C code is generated by the asf compiler version 2.1 */

#include  "asc-support-me.h"
static Symbol lf_1sym ;
static ATerm lf_1 ( ) ;
static Symbol lf_2sym ;
static ATerm lf_2 ( ATerm arg1 ) ;
static Symbol lf_3sym ;
static ATerm lf_3 ( ) ;
void register_Bracket ( ) {
lf_1sym = ATmakeSymbol ( "prod([lit(\"1\")],cf(sort(\"Yielder\")),no-attrs)"
 , 0 , ATtrue ) ;
ATprotectSymbol ( lf_1sym ) ;
lf_2sym = ATmakeSymbol ( "prod([lit(\"give\"),cf(opt(layout)),cf(sort(\"Yielder\"))],cf(sort(\"Action\")),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_2sym ) ;
lf_3sym = ATmakeSymbol ( "prod([lit(\"2\")],cf(sort(\"Yielder\")),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_3sym ) ;
register_prod ( ATparse ( "prod([lit(\"1\")],cf(sort(\"Yielder\")),no-attrs)" ) , lf_1 , lf_1sym ) ;
register_prod ( ATparse ( "prod([lit(\"give\"),cf(opt(layout)),cf(sort(\"Yielder\"))],cf(sort(\"Action\")),no-attrs)" ) , lf_2 , lf_2sym ) ;
register_prod ( ATparse ( "prod([lit(\"2\")],cf(sort(\"Yielder\")),no-attrs)" ) , lf_3 , lf_3sym ) ;
}
void resolve_Bracket ( ) {
}
void init_Bracket ( ) {
}
ATerm lf_2 ( ATerm arg0 ) {
FUNC_ENTRY ( lf_2sym , ATmakeAppl ( lf_2sym , arg0 ) ) ;
{
ATerm ltmp [ 1 ] ;
lbl_lf_2 : ltmp [ 0 ] = arg0 ;
if ( check_sym ( ltmp [ 0 ] , lf_1sym ) ) {
( arg0 = make_nf0 ( lf_3sym ) ) ;
goto lbl_lf_2 ;
}
FUNC_EXIT ( make_nf1 ( lf_2sym , ltmp [ 0 ] ) ) ;
}
}
ATerm lf_3 ( ) {
CONS_ENTRY ( lf_3sym , ATmakeAppl0 ( lf_3sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_3sym ) ) ;
}
ATerm lf_1 ( ) {
CONS_ENTRY ( lf_1sym , ATmakeAppl0 ( lf_1sym ) ) ;
CONS_EXIT ( make_nf0 ( lf_1sym ) ) ;
}
#ifdef ASF_MAIN                                           
int main(int argc, char *argv[])                         
{                                                        
  return asc_support_main(argc, argv,                    
                          register_Bracket,                   
                          resolve_Bracket,                    
                          init_Bracket);                      
}                                                        
#endif                                                   

