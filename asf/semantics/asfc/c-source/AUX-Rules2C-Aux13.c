#include "support.h"
static Symbol lf_AUX_Rules2C_Aux13_2sym;
static ATerm lf_AUX_Rules2C_Aux13_2( ATerm arg1 , ATerm arg2);
static Symbol ef2sym;
static funcptr ef2;
static Symbol lf3sym;
static ATerm lf3( ATerm arg1);
static Symbol lf4sym;
static ATerm lf4( ATerm arg1);
static Symbol ef3sym;
static funcptr ef3;
static Symbol ef1sym;
static funcptr ef1;
static Symbol lf_AUX_Rules2C_Aux13_1sym;
static ATerm lf_AUX_Rules2C_Aux13_1( ATerm arg1);
void register_AUX_Rules2C_Aux13( ) {
lf_AUX_Rules2C_Aux13_2sym= ATmakeSymbol( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-same-lhs-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"
 , 2 , ATtrue);
ATprotectSymbol( lf_AUX_Rules2C_Aux13_2sym);
lf3sym= ATmakeSymbol( "listtype(sort(\"FV-Path\"),ql(\",\"))" , 1 , ATtrue);
ATprotectSymbol( lf3sym);
lf4sym= ATmakeSymbol( "listtype(sort(\"Cond\"),ql(\"&\"))" , 1 , ATtrue);
ATprotectSymbol( lf4sym);
lf_AUX_Rules2C_Aux13_1sym= ATmakeSymbol( "listtype(sort(\"C-Rule\"),ql(\";\"))" , 1 , ATtrue);
ATprotectSymbol( lf_AUX_Rules2C_Aux13_1sym);
register_prod( ATparse( "listtype(sort(\"C-Rule\"),ql(\";\"))") , lf_AUX_Rules2C_Aux13_1 , lf_AUX_Rules2C_Aux13_1sym);
register_prod( ATparse( "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"select-same-lhs-cond\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)") , lf_AUX_Rules2C_Aux13_2 , lf_AUX_Rules2C_Aux13_2sym);
register_prod( ATparse( "listtype(sort(\"FV-Path\"),ql(\",\"))") , lf3 , lf3sym);
register_prod( ATparse( "listtype(sort(\"Cond\"),ql(\"&\"))") , lf4 , lf4sym);
}
void resolve_AUX_Rules2C_Aux13( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-RuleListPair\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"Term\"),w(\"\"),ql(\"=:\"),w(\"\"),sort(\"Term\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cond\"),w(\"\"),no-attrs)"));
}
static ATerm constant0= NULL;
void init_AUX_Rules2C_Aux13( ) {
ATprotect( & constant0);
}
ATerm lf_AUX_Rules2C_Aux13_2( ATerm arg0 , ATerm arg1) {
{
ATerm tmp[29];
PROF( prof_lf_AUX_Rules2C_Aux13_2);
if( check_sym( arg0 , ef2sym)) {
{
ATerm atmp00= arg_0( arg0);
if( check_sym( atmp00 , lf3sym)) {
{
ATerm atmp000= arg_0( atmp00);
{
ATerm atmp01= arg_1( arg0);
if( check_sym( atmp01 , lf4sym)) {
{
ATerm atmp010= arg_0( atmp01);
{
ATerm atmp02= arg_2( arg0);
{
ATerm atmp03= arg_3( arg0);
{
ATerm atmp04= arg_4( arg0);
if( check_sym( arg1 , lf_AUX_Rules2C_Aux13_1sym)) {
{
ATerm atmp10= arg_0( arg1);
if( not_empty_list( atmp010)) {
tmp[ 0]= list_head( atmp010);
tmp[ 1]= list_tail( atmp010);
if( not_empty_list( atmp10)) {
tmp[ 2]= list_head( atmp10);
tmp[ 3]= list_tail( atmp10);
if( check_sym( tmp[ 0] , ef3sym)) {
tmp[ 4]= arg_0( tmp[ 0]);
tmp[ 5]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 2] , ef2sym)) {
tmp[ 6]= arg_0( tmp[ 2]);
tmp[ 7]= arg_1( tmp[ 2]);
tmp[ 8]= arg_2( tmp[ 2]);
tmp[ 9]= arg_3( tmp[ 2]);
tmp[ 10]= arg_4( tmp[ 2]);
if( check_sym( tmp[ 6] , lf3sym)) {
tmp[ 11]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf4sym)) {
tmp[ 12]= arg_0( tmp[ 7]);
if( not_empty_list( tmp[ 12])) {
tmp[ 13]= list_head( tmp[ 12]);
tmp[ 14]= list_tail( tmp[ 12]);
if( check_sym( tmp[ 13] , ef3sym)) {
tmp[ 15]= arg_0( tmp[ 13]);
tmp[ 16]= arg_1( tmp[ 13]);
if( ! term_equal( tmp[ 4] , tmp[ 15])) {
tmp[ 17]= lf_AUX_Rules2C_Aux13_2( ( * ef2)( lf3( make_list( atmp000)) , lf4( cons( make_list( ( * ef3)( tmp[ 4] , tmp[ 5])) , make_list( tmp[ 1]))) , atmp02 , atmp03 , atmp04) , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 3])));
if( check_sym( tmp[ 17] , ef1sym)) {
tmp[ 18]= arg_0( tmp[ 17]);
tmp[ 19]= arg_1( tmp[ 17]);
if( check_sym( tmp[ 18] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 20]= arg_0( tmp[ 18]);
if( check_sym( tmp[ 19] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 21]= arg_0( tmp[ 19]);
return ( * ef1)( lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 20])) , lf_AUX_Rules2C_Aux13_1( cons( make_list( ( * ef2)( lf3( make_list( tmp[ 11])) , lf4( cons( make_list( ( * ef3)( tmp[ 15] , tmp[ 16])) , make_list( tmp[ 14]))) , tmp[ 8] , tmp[ 9] , tmp[ 10])) , make_list( tmp[ 21]))));
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
}
}
}
}
if( check_sym( arg1 , lf_AUX_Rules2C_Aux13_1sym)) {
{
ATerm atmp10= arg_0( arg1);
if( not_empty_list( atmp10)) {
tmp[ 0]= list_head( atmp10);
{
tmp[ 1]= list_tail( atmp10);
if( ! term_equal( arg0 , tmp[ 0])) {
if( check_sym( arg0 , ef2sym)) {
tmp[ 2]= arg_0( arg0);
tmp[ 3]= arg_1( arg0);
tmp[ 4]= arg_2( arg0);
tmp[ 5]= arg_3( arg0);
tmp[ 6]= arg_4( arg0);
{
if( check_sym( tmp[ 2] , lf3sym)) {
tmp[ 7]= arg_0( tmp[ 2]);
{
if( check_sym( tmp[ 3] , lf4sym)) {
tmp[ 8]= arg_0( tmp[ 3]);
{
if( not_empty_list( tmp[ 8])) {
tmp[ 9]= list_head( tmp[ 8]);
{
tmp[ 10]= list_tail( tmp[ 8]);
{
if( check_sym( tmp[ 9] , ef3sym)) {
tmp[ 11]= arg_0( tmp[ 9]);
tmp[ 12]= arg_1( tmp[ 9]);
{
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 13]= arg_0( tmp[ 0]);
tmp[ 14]= arg_1( tmp[ 0]);
tmp[ 15]= arg_2( tmp[ 0]);
tmp[ 16]= arg_3( tmp[ 0]);
tmp[ 17]= arg_4( tmp[ 0]);
{
if( check_sym( tmp[ 13] , lf3sym)) {
tmp[ 18]= arg_0( tmp[ 13]);
{
if( check_sym( tmp[ 14] , lf4sym)) {
tmp[ 19]= arg_0( tmp[ 14]);
{
if( ! not_empty_list( tmp[ 19])) {
tmp[ 20]= lf_AUX_Rules2C_Aux13_2( arg0 , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 1])));
if( check_sym( tmp[ 20] , ef1sym)) {
tmp[ 21]= arg_0( tmp[ 20]);
tmp[ 22]= arg_1( tmp[ 20]);
if( check_sym( tmp[ 21] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 23]= arg_0( tmp[ 21]);
if( check_sym( tmp[ 22] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 24]= arg_0( tmp[ 22]);
return ( * ef1)( lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 23])) , lf_AUX_Rules2C_Aux13_1( cons( make_list( tmp[ 0]) , make_list( tmp[ 24]))));
}
}
}
}
else {
tmp[ 20]= list_head( tmp[ 19]);
tmp[ 21]= list_tail( tmp[ 19]);
if( check_sym( tmp[ 20] , ef3sym)) {
tmp[ 22]= arg_0( tmp[ 20]);
tmp[ 23]= arg_1( tmp[ 20]);
if( term_equal( tmp[ 11] , tmp[ 22])) {
tmp[ 24]= lf_AUX_Rules2C_Aux13_2( arg0 , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 1])));
if( check_sym( tmp[ 24] , ef1sym)) {
tmp[ 25]= arg_0( tmp[ 24]);
tmp[ 26]= arg_1( tmp[ 24]);
if( check_sym( tmp[ 25] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 27]= arg_0( tmp[ 25]);
if( check_sym( tmp[ 26] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 28]= arg_0( tmp[ 26]);
return ( * ef1)( lf_AUX_Rules2C_Aux13_1( cons( make_list( tmp[ 0]) , make_list( tmp[ 27]))) , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 28])));
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
}
}
}
}
else {
tmp[ 2]= lf_AUX_Rules2C_Aux13_2( arg0 , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 1])));
if( check_sym( tmp[ 2] , ef1sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
tmp[ 4]= arg_1( tmp[ 2]);
if( check_sym( tmp[ 3] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 5]= arg_0( tmp[ 3]);
if( check_sym( tmp[ 4] , lf_AUX_Rules2C_Aux13_1sym)) {
tmp[ 6]= arg_0( tmp[ 4]);
return ( * ef1)( lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 5])) , lf_AUX_Rules2C_Aux13_1( make_list( tmp[ 6])));
}
}
}
}
}
}
else {
return ( * ef1)( lf_AUX_Rules2C_Aux13_1( make_list( arg0)) , ( constant0? constant0: ( constant0= lf_AUX_Rules2C_Aux13_1( make_list( null( ))))));
}
}
}
return make_nf2( lf_AUX_Rules2C_Aux13_2sym , arg0 , arg1);
}
}
ATerm lf_AUX_Rules2C_Aux13_1( ATerm arg0) {
PROF( prof_lf_AUX_Rules2C_Aux13_1);
return make_nf1( lf_AUX_Rules2C_Aux13_1sym , arg0);
}
ATerm lf4( ATerm arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}
ATerm lf3( ATerm arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}

