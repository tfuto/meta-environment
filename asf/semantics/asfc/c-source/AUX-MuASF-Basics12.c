#include "support.h"
static asymbol * lf_AUX_MuASF_Basics12_2sym;
static aterm * lf_AUX_MuASF_Basics12_2( aterm * arg1);
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * lf_AUX_MuASF_Basics12_1sym;
static aterm * lf_AUX_MuASF_Basics12_1( aterm * arg1);
static asymbol * ef3sym;
static funcptr ef3;
static asymbol * new__1__lf_AUX_MuASF_Basics12_2sym;
static aterm * new__1__lf_AUX_MuASF_Basics12_2( aterm * arg1);
void register_AUX_MuASF_Basics12( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_MuASF_Basics12_2sym= TmkSymbol( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"are-all-var-args\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf_AUX_MuASF_Basics12_1sym= TmkSymbol( "listtype(sort(\"Term\"),ql(\",\"))" , SYM_STRING);
new__1__lf_AUX_MuASF_Basics12_2sym= TmkSymbol( "new__1__lf_AUX_MuASF_Basics12_2" , SYM_STRING);
register_prod( TmakeSimple( & local , "listtype(sort(\"Term\"),ql(\",\"))") , lf_AUX_MuASF_Basics12_1 , lf_AUX_MuASF_Basics12_1sym);
register_prod( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"are-all-var-args\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)") , lf_AUX_MuASF_Basics12_2 , lf_AUX_MuASF_Basics12_2sym);
}
void resolve_AUX_MuASF_Basics12( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"/\\\\\\\\\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef3= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
}
aterm * new__1__lf_AUX_MuASF_Basics12_2( aterm * arg0) {
PROF( prof_new__1__lf_AUX_MuASF_Basics12_2);
if( check_sym( arg0 , lf_AUX_MuASF_Basics12_1sym)) {
{
aterm * atmp00= arg_0( arg0);
t_protect( atmp00);
if( not_empty_list( atmp00)) {
t_unprotect( arg0);
return ( * ef3)( );
}
}
}
return make_nf1( new__1__lf_AUX_MuASF_Basics12_2sym , arg0);
}
aterm * lf_AUX_MuASF_Basics12_2( aterm * arg0) {
{
aterm * tmp[2];
PROF( prof_lf_AUX_MuASF_Basics12_2);
if( check_sym( arg0 , lf_AUX_MuASF_Basics12_1sym)) {
{
aterm * atmp00= arg_0( arg0);
t_protect( atmp00);
if( is_single_element( atmp00)) {
t_protect( atmp00);
tmp[ 0]= list_head( atmp00);
t_unprotect( arg0);
return ( * ef1)( tmp[ 0]);
}
t_protect( atmp00);
if( not_empty_list( atmp00)) {
t_protect( atmp00);
tmp[ 0]= list_head( atmp00);
t_protect( atmp00);
tmp[ 1]= list_tail( atmp00);
t_protect( tmp[ 1]);
if( not_empty_list( tmp[ 1])) {
t_unprotect( arg0);
return ( * ef2)( ( * ef1)( tmp[ 0]) , lf_AUX_MuASF_Basics12_2( lf_AUX_MuASF_Basics12_1( make_list( tmp[ 1]))));
}
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 0]);
}
}
}
if( check_sym( arg0 , lf_AUX_MuASF_Basics12_1sym)) {
{
aterm * atmp00= arg_0( arg0);
t_protect( atmp00);
if( not_empty_list( atmp00)) {
return new__1__lf_AUX_MuASF_Basics12_2( arg0);
}
}
}
return make_nf1( lf_AUX_MuASF_Basics12_2sym , arg0);
}
}
aterm * lf_AUX_MuASF_Basics12_1( aterm * arg0) {
PROF( prof_lf_AUX_MuASF_Basics12_1);
return make_nf1( lf_AUX_MuASF_Basics12_1sym , arg0);
}

