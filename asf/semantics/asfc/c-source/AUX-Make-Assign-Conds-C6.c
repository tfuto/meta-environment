#include "support.h"
static asymbol * lf_AUX_Make_Assign_Conds_C6_2sym;
static aterm * lf_AUX_Make_Assign_Conds_C6_2( aterm * arg1 , aterm * arg2);
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * lf_AUX_Make_Assign_Conds_C6_1sym;
static aterm * lf_AUX_Make_Assign_Conds_C6_1( aterm * arg1);
void register_AUX_Make_Assign_Conds_C6( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_Make_Assign_Conds_C6_2sym= TmkSymbol( "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf_AUX_Make_Assign_Conds_C6_1sym= TmkSymbol( "listtype(sort(\"Term\"),ql(\",\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "listtype(sort(\"Term\"),ql(\",\"))") , lf_AUX_Make_Assign_Conds_C6_1 , lf_AUX_Make_Assign_Conds_C6_1sym);
register_prod( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-terms\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)") , lf_AUX_Make_Assign_Conds_C6_2 , lf_AUX_Make_Assign_Conds_C6_2sym);
}
void resolve_AUX_Make_Assign_Conds_C6( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Make-Assign-Conds-C\"),w(\"\"),[l(\"inspect-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"IntVarEnv\"),w(\"\"),no-attrs)"));
}
aterm * lf_AUX_Make_Assign_Conds_C6_2( aterm * arg0 , aterm * arg1) {
{
aterm * tmp[4];
PROF( prof_lf_AUX_Make_Assign_Conds_C6_2);
if( check_sym( arg0 , lf_AUX_Make_Assign_Conds_C6_1sym)) {
{
aterm * atmp00= arg_0( arg0);
if( m_is_single_element( atmp00)) {
tmp[ 0]= m_list_head( atmp00);
t_unprotect( arg0);
return ( * ef1)( tmp[ 0] , arg1);
}
if( m_not_empty_list( atmp00)) {
tmp[ 0]= m_list_head( atmp00);
tmp[ 1]= m_list_tail( atmp00);
if( m_not_empty_list( tmp[ 1])) {
t_protect( tmp[ 0]);
t_protect( arg1);
tmp[ 2]= lf_AUX_Make_Assign_Conds_C6_2( lf_AUX_Make_Assign_Conds_C6_1( make_list( tmp[ 0])) , arg1);
t_protect( tmp[ 1]);
t_protect( tmp[ 2]);
tmp[ 3]= lf_AUX_Make_Assign_Conds_C6_2( lf_AUX_Make_Assign_Conds_C6_1( make_list( tmp[ 1])) , tmp[ 2]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 2]);
return tmp[ 3];
}
t_unprotect( tmp[ 1]);
t_unprotect( tmp[ 0]);
}
}
}
return make_nf2( lf_AUX_Make_Assign_Conds_C6_2sym , arg0 , arg1);
}
}
aterm * lf_AUX_Make_Assign_Conds_C6_1( aterm * arg0) {
PROF( prof_lf_AUX_Make_Assign_Conds_C6_1);
return make_nf1( lf_AUX_Make_Assign_Conds_C6_1sym , arg0);
}

