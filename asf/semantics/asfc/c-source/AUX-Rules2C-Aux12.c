#include "support.h"
static asymbol * lf_AUX_Rules2C_Aux12_2sym;
static aterm * lf_AUX_Rules2C_Aux12_2( aterm * arg1 , aterm * arg2);
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * lf3sym;
static aterm * lf3( aterm * arg1);
static asymbol * lf4sym;
static aterm * lf4( aterm * arg1);
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * lf_AUX_Rules2C_Aux12_1sym;
static aterm * lf_AUX_Rules2C_Aux12_1( aterm * arg1);
void register_AUX_Rules2C_Aux12( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_Rules2C_Aux12_2sym= TmkSymbol( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-same-list-pat\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf3sym= TmkSymbol( "listtype(sort(\"FV-Path\"),ql(\",\"))" , SYM_STRING);
lf4sym= TmkSymbol( "listtype(sort(\"Cond\"),ql(\"&\"))" , SYM_STRING);
lf_AUX_Rules2C_Aux12_1sym= TmkSymbol( "listtype(sort(\"C-Rule\"),ql(\";\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "listtype(sort(\"C-Rule\"),ql(\";\"))") , lf_AUX_Rules2C_Aux12_1 , lf_AUX_Rules2C_Aux12_1sym);
register_prod( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-same-list-pat\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)") , lf_AUX_Rules2C_Aux12_2 , lf_AUX_Rules2C_Aux12_2sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"FV-Path\"),ql(\",\"))") , lf3 , lf3sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Cond\"),ql(\"&\"))") , lf4 , lf4sym);
}
void resolve_AUX_Rules2C_Aux12( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
}
aterm * lf_AUX_Rules2C_Aux12_2( aterm * arg0 , aterm * arg1) {
{
aterm * tmp[16];
PROF( prof_lf_AUX_Rules2C_Aux12_2);
if( check_sym( arg1 , lf_AUX_Rules2C_Aux12_1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( m_not_empty_list( atmp10)) {
tmp[ 0]= m_list_head( atmp10);
{
tmp[ 1]= m_list_tail( atmp10);
{
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 2]= arg_0( tmp[ 0]);
tmp[ 3]= arg_1( tmp[ 0]);
tmp[ 4]= arg_2( tmp[ 0]);
tmp[ 5]= arg_3( tmp[ 0]);
tmp[ 6]= arg_4( tmp[ 0]);
{
if( check_sym( tmp[ 2] , lf3sym)) {
tmp[ 7]= arg_0( tmp[ 2]);
{
if( check_sym( tmp[ 3] , lf4sym)) {
tmp[ 8]= arg_0( tmp[ 3]);
{
if( m_not_empty_list( tmp[ 7])) {
tmp[ 9]= m_list_head( tmp[ 7]);
{
tmp[ 10]= m_list_tail( tmp[ 7]);
{
t_protect( arg0);
t_protect( tmp[ 1]);
tmp[ 11]= lf_AUX_Rules2C_Aux12_2( arg0 , lf_AUX_Rules2C_Aux12_1( make_list( tmp[ 1])));
if( check_sym( tmp[ 11] , ef1sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
tmp[ 13]= arg_1( tmp[ 11]);
if( check_sym( tmp[ 12] , lf_AUX_Rules2C_Aux12_1sym)) {
tmp[ 14]= arg_0( tmp[ 12]);
if( check_sym( tmp[ 13] , lf_AUX_Rules2C_Aux12_1sym)) {
tmp[ 15]= arg_0( tmp[ 13]);
t_protect( tmp[ 14]);
t_protect( tmp[ 8]);
t_protect( tmp[ 4]);
t_protect( tmp[ 5]);
t_protect( tmp[ 6]);
t_protect( tmp[ 15]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 11]);
return ( * ef1)( lf_AUX_Rules2C_Aux12_1( make_list( tmp[ 14])) , lf_AUX_Rules2C_Aux12_1( cons( make_list( ( * ef2)( lf3( cons( make_list( tmp[ 9]) , make_list( tmp[ 10]))) , lf4( make_list( tmp[ 8])) , tmp[ 4] , tmp[ 5] , tmp[ 6])) , make_list( tmp[ 15]))));
}
}
}
t_unprotect( tmp[ 11]);
if( m_term_equal( arg0 , tmp[ 9])) {
t_protect( arg0);
t_protect( tmp[ 1]);
tmp[ 11]= lf_AUX_Rules2C_Aux12_2( arg0 , lf_AUX_Rules2C_Aux12_1( make_list( tmp[ 1])));
if( check_sym( tmp[ 11] , ef1sym)) {
tmp[ 12]= arg_0( tmp[ 11]);
tmp[ 13]= arg_1( tmp[ 11]);
if( check_sym( tmp[ 12] , lf_AUX_Rules2C_Aux12_1sym)) {
tmp[ 14]= arg_0( tmp[ 12]);
if( check_sym( tmp[ 13] , lf_AUX_Rules2C_Aux12_1sym)) {
tmp[ 15]= arg_0( tmp[ 13]);
t_protect( tmp[ 8]);
t_protect( tmp[ 4]);
t_protect( tmp[ 5]);
t_protect( tmp[ 6]);
t_protect( tmp[ 14]);
t_protect( tmp[ 15]);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 9]);
t_unprotect( tmp[ 11]);
return ( * ef1)( lf_AUX_Rules2C_Aux12_1( cons( make_list( ( * ef2)( lf3( cons( make_list( arg0) , make_list( tmp[ 10]))) , lf4( make_list( tmp[ 8])) , tmp[ 4] , tmp[ 5] , tmp[ 6])) , make_list( tmp[ 14]))) , lf_AUX_Rules2C_Aux12_1( make_list( tmp[ 15])));
}
}
}
t_unprotect( tmp[ 11]);
}
}
t_unprotect( tmp[ 10]);
}
t_unprotect( tmp[ 9]);
}
}
}
}
}
}
}
}
t_unprotect( tmp[ 1]);
}
t_unprotect( tmp[ 0]);
}
else {
t_unprotect( arg0);
t_unprotect( arg1);
return ( * ef1)( lf_AUX_Rules2C_Aux12_1( make_list( null( ))) , lf_AUX_Rules2C_Aux12_1( make_list( null( ))));
}
}
}
return make_nf2( lf_AUX_Rules2C_Aux12_2sym , arg0 , arg1);
}
}
aterm * lf_AUX_Rules2C_Aux12_1( aterm * arg0) {
PROF( prof_lf_AUX_Rules2C_Aux12_1);
return make_nf1( lf_AUX_Rules2C_Aux12_1sym , arg0);
}
aterm * lf4( aterm * arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}
aterm * lf3( aterm * arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}

