#include "support.h"
static asymbol * lf_AUX_Make_Assign_Conds_C8_1sym;
static aterm * lf_AUX_Make_Assign_Conds_C8_1( aterm * arg1 , aterm * arg2);
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * ef8sym;
static funcptr ef8;
static asymbol * ef5sym;
static funcptr ef5;
static asymbol * lf4sym;
static aterm * lf4( aterm * arg1);
static asymbol * ef7sym;
static funcptr ef7;
static asymbol * lf3sym;
static aterm * lf3( aterm * arg1);
static asymbol * ef6sym;
static funcptr ef6;
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * lf2sym;
static aterm * lf2( aterm * arg1);
static asymbol * ef3sym;
static funcptr ef3;
static asymbol * ef4sym;
static funcptr ef4;
void register_AUX_Make_Assign_Conds_C8( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_Make_Assign_Conds_C8_1sym= TmkSymbol( "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"make-mc-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf4sym= TmkSymbol( "listtype(sort(\"Term\"),ql(\",\"))" , SYM_STRING);
lf3sym= TmkSymbol( "listtype(sort(\"CHAR\"))" , SYM_STRING);
lf2sym= TmkSymbol( "listtype(sort(\"Cond\"),ql(\"&\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"make-mc-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Cond\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)") , lf_AUX_Make_Assign_Conds_C8_1 , lf_AUX_Make_Assign_Conds_C8_1sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Cond\"),ql(\"&\"))") , lf2 , lf2sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"CHAR\"))") , lf3 , lf3sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Term\"),ql(\",\"))") , lf4 , lf4sym);
}
void resolve_AUX_Make_Assign_Conds_C8( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"VarEnv\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CList-VarEnv\"),w(\"\"),no-attrs)"));
ef3= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef4= lookup_func( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)"));
ef5= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef6= lookup_func( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"funid\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef7= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef8= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"!=\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef8sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"!=\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
}
aterm * lf_AUX_Make_Assign_Conds_C8_1( aterm * arg0 , aterm * arg1) {
{
aterm * tmp[2];
PROF( prof_lf_AUX_Make_Assign_Conds_C8_1);
if( check_sym( arg0 , ef1sym)) {
{
aterm * atmp00= arg_0( arg0);
{
aterm * atmp01= arg_1( arg0);
t_protect( atmp00);
t_protect( arg1);
tmp[ 0]= ( * ef4)( atmp00 , arg1);
if( m_term_equal( arg1 , tmp[ 0])) {
t_protect( atmp01);
t_protect( tmp[ 0]);
tmp[ 1]= ( * ef4)( atmp01 , tmp[ 0]);
t_protect( tmp[ 0]);
t_protect( tmp[ 1]);
if( ! term_equal( tmp[ 0] , tmp[ 1])) {
t_protect( atmp00);
t_protect( atmp01);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
return ( * ef2)( lf2( make_list( ( * ef3)( atmp00 , atmp01))) , tmp[ 1]);
}
else {
t_protect( atmp00);
t_protect( atmp01);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
return ( * ef2)( lf2( make_list( ( * ef3)( ( * ef5)( ( * ef6)( lf3( cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 45)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 113)) , cons( make_list( make_char( 117)) , cons( make_list( make_char( 97)) , make_list( make_char( 108))))))))))))) , lf4( cons( make_list( atmp00) , make_list( atmp01)))) , ( * ef7)( ( * ef6)( lf3( make_list( make_char( 116)))))))) , tmp[ 1]);
}
t_unprotect( tmp[ 1]);
}
else {
t_protect( atmp01);
t_protect( tmp[ 0]);
tmp[ 1]= ( * ef4)( atmp01 , tmp[ 0]);
if( m_term_equal( tmp[ 0] , tmp[ 1])) {
t_protect( atmp01);
t_protect( atmp00);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
return ( * ef2)( lf2( make_list( ( * ef3)( atmp01 , atmp00))) , tmp[ 1]);
}
t_unprotect( tmp[ 1]);
}
t_unprotect( tmp[ 0]);
}
}
}
if( check_sym( arg0 , ef8sym)) {
{
aterm * atmp00= arg_0( arg0);
{
aterm * atmp01= arg_1( arg0);
t_protect( atmp00);
t_protect( arg1);
tmp[ 0]= ( * ef4)( atmp00 , arg1);
if( m_term_equal( arg1 , tmp[ 0])) {
t_protect( atmp01);
t_protect( tmp[ 0]);
tmp[ 1]= ( * ef4)( atmp01 , tmp[ 0]);
if( m_term_equal( tmp[ 0] , tmp[ 1])) {
t_protect( atmp00);
t_protect( atmp01);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
return ( * ef2)( lf2( make_list( ( * ef3)( ( * ef5)( ( * ef6)( lf3( cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 45)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 113)) , cons( make_list( make_char( 117)) , cons( make_list( make_char( 97)) , make_list( make_char( 108))))))))))))) , lf4( cons( make_list( atmp00) , make_list( atmp01)))) , ( * ef7)( ( * ef6)( lf3( make_list( make_char( 102)))))))) , tmp[ 1]);
}
t_unprotect( tmp[ 1]);
}
t_unprotect( tmp[ 0]);
}
}
}
if( check_sym( arg0 , ef3sym)) {
{
aterm * atmp00= arg_0( arg0);
{
aterm * atmp01= arg_1( arg0);
t_protect( atmp01);
t_protect( arg1);
tmp[ 0]= ( * ef4)( atmp01 , arg1);
t_unprotect( arg1);
return ( * ef2)( lf2( make_list( arg0)) , tmp[ 0]);
}
}
}
return make_nf2( lf_AUX_Make_Assign_Conds_C8_1sym , arg0 , arg1);
}
}
aterm * lf2( aterm * arg0) {
PROF( prof_lf2);
return make_nf1( lf2sym , arg0);
}
aterm * lf3( aterm * arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}
aterm * lf4( aterm * arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}

