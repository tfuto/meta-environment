#include "support.h"
static asymbol * lf_AUX_Rules2C_Aux8_2sym;
static aterm * lf_AUX_Rules2C_Aux8_2( aterm * arg1 , aterm * arg2);
static asymbol * ef5sym;
static funcptr ef5;
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * lf3sym;
static aterm * lf3( aterm * arg1);
static asymbol * ef3sym;
static funcptr ef3;
static asymbol * lf4sym;
static aterm * lf4( aterm * arg1);
static asymbol * lf5sym;
static aterm * lf5( aterm * arg1);
static asymbol * ef4sym;
static funcptr ef4;
static asymbol * ef6sym;
static funcptr ef6;
static asymbol * ef7sym;
static funcptr ef7;
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * lf_AUX_Rules2C_Aux8_1sym;
static aterm * lf_AUX_Rules2C_Aux8_1( aterm * arg1);
void register_AUX_Rules2C_Aux8( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_Rules2C_Aux8_2sym= TmkSymbol( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf3sym= TmkSymbol( "listtype(sort(\"FV-Path\"),ql(\",\"))" , SYM_STRING);
lf4sym= TmkSymbol( "listtype(sort(\"AInt\"),ql(\",\"))" , SYM_STRING);
lf5sym= TmkSymbol( "listtype(sort(\"Cond\"),ql(\"&\"))" , SYM_STRING);
lf_AUX_Rules2C_Aux8_1sym= TmkSymbol( "listtype(sort(\"C-Rule\"),ql(\";\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "listtype(sort(\"C-Rule\"),ql(\";\"))") , lf_AUX_Rules2C_Aux8_1 , lf_AUX_Rules2C_Aux8_1sym);
register_prod( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-on-ofs-first-arg\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)") , lf_AUX_Rules2C_Aux8_2 , lf_AUX_Rules2C_Aux8_2sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"FV-Path\"),ql(\",\"))") , lf3 , lf3sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"AInt\"),ql(\",\"))") , lf4 , lf4sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Cond\"),ql(\"&\"))") , lf5 , lf5sym);
}
void resolve_AUX_Rules2C_Aux8( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef3= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef4= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef5= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef6= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef7= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
}
aterm * lf_AUX_Rules2C_Aux8_2( aterm * arg0 , aterm * arg1) {
{
aterm * tmp[21];
PROF( prof_lf_AUX_Rules2C_Aux8_2);
if( check_sym( arg1 , lf_AUX_Rules2C_Aux8_1sym)) {
{
aterm * atmp10= arg_0( arg1);
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
tmp[ 3]= arg_2( tmp[ 0]);
tmp[ 4]= arg_3( tmp[ 0]);
tmp[ 5]= arg_4( tmp[ 0]);
{
if( check_sym( tmp[ 1] , lf3sym)) {
tmp[ 6]= arg_0( tmp[ 1]);
{
if( check_sym( tmp[ 2] , lf5sym)) {
tmp[ 7]= arg_0( tmp[ 2]);
t_protect( tmp[ 6]);
if( not_empty_list( tmp[ 6])) {
t_protect( tmp[ 6]);
tmp[ 8]= list_head( tmp[ 6]);
if( check_sym( tmp[ 8] , ef3sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
tmp[ 10]= arg_1( tmp[ 8]);
{
if( check_sym( tmp[ 10] , lf4sym)) {
tmp[ 11]= arg_0( tmp[ 10]);
{
t_protect( tmp[ 6]);
tmp[ 12]= list_tail( tmp[ 6]);
{
t_protect( atmp10);
tmp[ 13]= list_tail( atmp10);
t_protect( tmp[ 9]);
tmp[ 14]= ( * ef4)( tmp[ 9]);
t_protect( tmp[ 14]);
if( term_equal( tmp[ 14] , ( * ef6)( ))) {
t_protect( tmp[ 9]);
t_protect( arg0);
if( term_equal( ( * ef7)( tmp[ 9]) , arg0)) {
t_protect( arg0);
t_protect( tmp[ 13]);
tmp[ 15]= lf_AUX_Rules2C_Aux8_2( arg0 , lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 13])));
if( check_sym( tmp[ 15] , ef1sym)) {
tmp[ 16]= arg_0( tmp[ 15]);
tmp[ 17]= arg_1( tmp[ 15]);
if( check_sym( tmp[ 16] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 18]= arg_0( tmp[ 16]);
if( check_sym( tmp[ 17] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 19]= arg_0( tmp[ 17]);
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_protect( tmp[ 7]);
t_protect( tmp[ 3]);
t_protect( tmp[ 4]);
t_protect( tmp[ 5]);
t_protect( tmp[ 18]);
t_protect( tmp[ 19]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 13]);
t_unprotect( tmp[ 14]);
t_unprotect( tmp[ 15]);
return ( * ef1)( lf_AUX_Rules2C_Aux8_1( cons( make_list( ( * ef2)( lf3( cons( make_list( ( * ef3)( tmp[ 9] , lf4( make_list( tmp[ 11])))) , make_list( tmp[ 12]))) , lf5( make_list( tmp[ 7])) , tmp[ 3] , tmp[ 4] , tmp[ 5])) , make_list( tmp[ 18]))) , lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 19])));
}
}
}
t_unprotect( tmp[ 15]);
}
t_protect( tmp[ 9]);
tmp[ 15]= ( * ef7)( tmp[ 9]);
t_protect( arg0);
t_protect( tmp[ 15]);
if( ! term_equal( arg0 , tmp[ 15])) {
t_protect( arg0);
t_protect( tmp[ 13]);
tmp[ 16]= lf_AUX_Rules2C_Aux8_2( arg0 , lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 13])));
if( check_sym( tmp[ 16] , ef1sym)) {
tmp[ 17]= arg_0( tmp[ 16]);
tmp[ 18]= arg_1( tmp[ 16]);
if( check_sym( tmp[ 17] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 19]= arg_0( tmp[ 17]);
if( check_sym( tmp[ 18] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 20]= arg_0( tmp[ 18]);
t_protect( tmp[ 19]);
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_protect( tmp[ 7]);
t_protect( tmp[ 3]);
t_protect( tmp[ 4]);
t_protect( tmp[ 5]);
t_protect( tmp[ 20]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 13]);
t_unprotect( tmp[ 14]);
t_unprotect( tmp[ 15]);
t_unprotect( tmp[ 16]);
return ( * ef1)( lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 19])) , lf_AUX_Rules2C_Aux8_1( cons( make_list( ( * ef2)( lf3( cons( make_list( ( * ef3)( tmp[ 9] , lf4( make_list( tmp[ 11])))) , make_list( tmp[ 12]))) , lf5( make_list( tmp[ 7])) , tmp[ 3] , tmp[ 4] , tmp[ 5])) , make_list( tmp[ 20]))));
}
}
}
t_unprotect( tmp[ 16]);
}
t_unprotect( tmp[ 15]);
}
t_protect( tmp[ 14]);
if( term_equal( tmp[ 14] , ( * ef5)( ))) {
t_protect( arg0);
t_protect( tmp[ 13]);
tmp[ 15]= lf_AUX_Rules2C_Aux8_2( arg0 , lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 13])));
if( check_sym( tmp[ 15] , ef1sym)) {
tmp[ 16]= arg_0( tmp[ 15]);
tmp[ 17]= arg_1( tmp[ 15]);
if( check_sym( tmp[ 16] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 18]= arg_0( tmp[ 16]);
if( check_sym( tmp[ 17] , lf_AUX_Rules2C_Aux8_1sym)) {
tmp[ 19]= arg_0( tmp[ 17]);
t_protect( tmp[ 18]);
t_protect( tmp[ 19]);
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_protect( tmp[ 7]);
t_protect( tmp[ 3]);
t_protect( tmp[ 4]);
t_protect( tmp[ 5]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 13]);
t_unprotect( tmp[ 14]);
t_unprotect( tmp[ 15]);
return ( * ef1)( lf_AUX_Rules2C_Aux8_1( make_list( tmp[ 18])) , lf_AUX_Rules2C_Aux8_1( cons( make_list( tmp[ 19]) , make_list( ( * ef2)( lf3( cons( make_list( ( * ef3)( tmp[ 9] , lf4( make_list( tmp[ 11])))) , make_list( tmp[ 12]))) , lf5( make_list( tmp[ 7])) , tmp[ 3] , tmp[ 4] , tmp[ 5])))));
}
}
}
t_unprotect( tmp[ 15]);
}
t_unprotect( tmp[ 14]);
t_unprotect( tmp[ 13]);
}
t_unprotect( tmp[ 12]);
}
}
}
}
t_unprotect( tmp[ 8]);
}
}
}
}
}
}
t_unprotect( tmp[ 0]);
}
else {
t_unprotect( arg0);
t_unprotect( arg1);
return ( * ef1)( lf_AUX_Rules2C_Aux8_1( make_list( null( ))) , lf_AUX_Rules2C_Aux8_1( make_list( null( ))));
}
}
}
return make_nf2( lf_AUX_Rules2C_Aux8_2sym , arg0 , arg1);
}
}
aterm * lf_AUX_Rules2C_Aux8_1( aterm * arg0) {
PROF( prof_lf_AUX_Rules2C_Aux8_1);
return make_nf1( lf_AUX_Rules2C_Aux8_1sym , arg0);
}
aterm * lf5( aterm * arg0) {
PROF( prof_lf5);
return make_nf1( lf5sym , arg0);
}
aterm * lf4( aterm * arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}
aterm * lf3( aterm * arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}

