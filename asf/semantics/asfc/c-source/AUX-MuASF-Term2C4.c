#include  "support.h"
static Symbol lf_AUX_MuASF_Term2C4_2sym ;
static ATerm lf_AUX_MuASF_Term2C4_2 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 , ATerm arg6 , ATerm arg7 , ATerm arg8 ) ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef16sym ;
static funcptr ef16 ;
static Symbol ef20sym ;
static funcptr ef20 ;
static Symbol ef17sym ;
static funcptr ef17 ;
static Symbol ef22sym ;
static funcptr ef22 ;
static Symbol ef21sym ;
static funcptr ef21 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
static Symbol ef18sym ;
static funcptr ef18 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol lf4sym ;
static ATerm lf4 ( ATerm arg1 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef19sym ;
static funcptr ef19 ;
static Symbol ef12sym ;
static funcptr ef12 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef13sym ;
static funcptr ef13 ;
static Symbol ef14sym ;
static funcptr ef14 ;
static Symbol ef15sym ;
static funcptr ef15 ;
static Symbol ef23sym ;
static funcptr ef23 ;
static Symbol lf_AUX_MuASF_Term2C4_1sym ;
static ATerm lf_AUX_MuASF_Term2C4_1 ( ATerm arg1 ) ;
void register_AUX_MuASF_Term2C4 ( ) {
lf_AUX_MuASF_Term2C4_2sym = ATmakeSymbol ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"
 , 8 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Term2C4_2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
lf4sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf4sym ) ;
lf_AUX_MuASF_Term2C4_1sym = ATmakeSymbol ( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_MuASF_Term2C4_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"NamePair\"),ql(\",\"))" ) , lf_AUX_MuASF_Term2C4_1 , lf_AUX_MuASF_Term2C4_1sym ) ;
register_prod ( ATparse ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)" ) , lf_AUX_MuASF_Term2C4_2 , lf_AUX_MuASF_Term2C4_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Expression\"),ql(\",\"))" ) , lf3 , lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf4 , lf4sym ) ;
}
void resolve_AUX_MuASF_Term2C4 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"cecontains\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef12sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"cecontains\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef13 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"celookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef13sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[l(\"celookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef14 = lookup_func ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef14sym = lookup_sym ( ATreadFromString ( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef15 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"unquote-plain-argument\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef15sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"unquote-plain-argument\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef16 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef16sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)" ) ) ;
ef17 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef17sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef18 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef18sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef19 = lookup_func ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"is-memo\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef19sym = lookup_sym ( ATreadFromString ( "prod(id(\"VarEnv\"),w(\"\"),[l(\"is-memo\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef20 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef20sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)" ) ) ;
ef21 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef21sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)" ) ) ;
ef22 = lookup_func ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef22sym = lookup_sym ( ATreadFromString ( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)" ) ) ;
ef23 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg2\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef23sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg2\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"IntCon\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
static ATerm constant3 = NULL ;
static ATerm constant4 = NULL ;
static ATerm constant5 = NULL ;
static ATerm constant6 = NULL ;
static ATerm constant7 = NULL ;
void init_AUX_MuASF_Term2C4 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
ATprotect ( & constant3 ) ;
ATprotect ( & constant4 ) ;
ATprotect ( & constant5 ) ;
ATprotect ( & constant6 ) ;
ATprotect ( & constant7 ) ;
}
ATerm lf_AUX_MuASF_Term2C4_2 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 , ATerm arg6 , ATerm arg7 ) {
{
ATerm tmp [ 15 ] ;
PROF ( prof_lf_AUX_MuASF_Term2C4_2 ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
if ( check_sym ( arg7 , lf_AUX_MuASF_Term2C4_1sym ) ) {
{
ATerm atmp70 = arg_0 ( arg7 ) ;
tmp [ 0 ] = ( constant0 ? constant0 : ( constant0 = ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( cons ( make_list ( make_char ( 114 ) ) , cons ( make_list ( make_char ( 101 ) ) , cons ( make_list ( make_char ( 115 ) ) , cons ( make_list ( make_char ( 117 ) ) , cons ( make_list ( make_char ( 108 ) ) , make_list ( make_char ( 116 ) ) ) ) ) ) ) ) ) ) ) ) ) ) ;
if ( ! term_equal ( arg5 , tmp [ 0 ] ) ) {
tmp [ 1 ] = ( * ef10 ) ( arg1 ) ;
if ( term_equal ( tmp [ 1 ] , arg0 ) ) {
if ( term_equal ( ( * ef12 ) ( arg1 , arg3 ) , arg0 ) ) {
tmp [ 2 ] = ( * ef13 ) ( arg1 , arg3 ) ;
if ( check_sym ( tmp [ 2 ] , ef14sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ;
tmp [ 4 ] = ( * ef15 ) ( tmp [ 3 ] , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
return ( * ef2 ) ( ( * ef3 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) , ( constant1 ? constant1 : ( constant1 = ( * ef9 ) ( ) ) ) , arg4 ) ;
}
}
}
if ( term_equal ( tmp [ 1 ] , ( constant2 ? constant2 : ( constant2 = ( * ef11 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef12 ) ( arg1 , arg3 ) , arg0 ) ) {
tmp [ 2 ] = ( * ef13 ) ( arg1 , arg3 ) ;
if ( check_sym ( tmp [ 2 ] , ef14sym ) ) {
tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ;
tmp [ 4 ] = ( * ef15 ) ( tmp [ 3 ] , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
return ( * ef2 ) ( ( * ef3 ) ( lf3 ( make_list ( ( * ef4 ) ( ( * ef5 ) ( ( * ef6 ) ( ( constant3 ? constant3 : ( constant3 = ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 9 , char_table [ 109 ] , char_table [ 97 ] , char_table [ 107 ] , char_table [ 101 ] , char_table [ 95 ] , char_table [ 108 ] , char_table [ 105 ] , char_table [ 115 ] , char_table [ 116 ] ) ) ) ) ) ) , ( * ef3 ) ( lf3 ( make_list ( tmp [ 4 ] ) ) ) ) ) ) ) ) ) , ( constant1 ? constant1 : ( constant1 = ( * ef9 ) ( ) ) ) , arg4 ) ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef11sym ) ) {
if ( check_sym ( arg5 , ef4sym ) ) {
{
ATerm atmp50 = arg_0 ( arg5 ) ;
if ( check_sym ( atmp50 , ef5sym ) ) {
{
ATerm atmp500 = arg_0 ( atmp50 ) ;
if ( check_sym ( atmp500 , ef7sym ) ) {
{
ATerm atmp5000 = arg_0 ( atmp500 ) ;
if ( check_sym ( atmp5000 , ef8sym ) ) {
{
ATerm atmp50000 = arg_0 ( atmp5000 ) ;
if ( check_sym ( atmp50000 , lf4sym ) ) {
{
ATerm atmp500000 = arg_0 ( atmp50000 ) ;
if ( check_sym ( arg7 , lf_AUX_MuASF_Term2C4_1sym ) ) {
{
ATerm atmp70 = arg_0 ( arg7 ) ;
if ( not_empty_list ( atmp500000 ) ) {
tmp [ 0 ] = list_head ( atmp500000 ) ;
if ( term_equal ( tmp [ 0 ] , make_char ( 114 ) ) ) {
tmp [ 1 ] = list_tail ( atmp500000 ) ;
{
if ( not_empty_list ( tmp [ 1 ] ) ) {
tmp [ 2 ] = list_head ( tmp [ 1 ] ) ;
if ( term_equal ( tmp [ 2 ] , make_char ( 101 ) ) ) {
tmp [ 3 ] = list_tail ( tmp [ 1 ] ) ;
{
if ( not_empty_list ( tmp [ 3 ] ) ) {
tmp [ 4 ] = list_head ( tmp [ 3 ] ) ;
if ( term_equal ( tmp [ 4 ] , make_char ( 115 ) ) ) {
tmp [ 5 ] = list_tail ( tmp [ 3 ] ) ;
{
if ( not_empty_list ( tmp [ 5 ] ) ) {
tmp [ 6 ] = list_head ( tmp [ 5 ] ) ;
if ( term_equal ( tmp [ 6 ] , make_char ( 117 ) ) ) {
tmp [ 7 ] = list_tail ( tmp [ 5 ] ) ;
{
if ( not_empty_list ( tmp [ 7 ] ) ) {
tmp [ 8 ] = list_head ( tmp [ 7 ] ) ;
if ( term_equal ( tmp [ 8 ] , make_char ( 108 ) ) ) {
tmp [ 9 ] = list_tail ( tmp [ 7 ] ) ;
{
if ( is_single_element ( tmp [ 9 ] ) ) {
tmp [ 10 ] = list_head ( tmp [ 9 ] ) ;
if ( term_equal ( tmp [ 10 ] , make_char ( 116 ) ) ) {
tmp [ 11 ] = ( * ef19 ) ( arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
if ( term_equal ( tmp [ 11 ] , arg0 ) ) {
if ( term_equal ( ( * ef12 ) ( arg1 , arg3 ) , ( constant4 ? constant4 : ( constant4 = ( * ef1 ) ( ) ) ) ) ) {
tmp [ 12 ] = ( * ef13 ) ( arg1 , arg3 ) ;
if ( check_sym ( tmp [ 12 ] , ef14sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
tmp [ 14 ] = ( * ef15 ) ( tmp [ 13 ] , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
return ( * ef2 ) ( ( * ef3 ) ( lf3 ( make_list ( tmp [ 14 ] ) ) ) , ( * ef16 ) ( ( * ef17 ) ( ( * ef18 ) ( tmp [ 14 ] ) ) ) , arg4 ) ;
}
}
}
if ( term_equal ( tmp [ 11 ] , ( constant4 ? constant4 : ( constant4 = ( * ef1 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef12 ) ( arg1 , arg3 ) , ( constant4 ? constant4 : ( constant4 = ( * ef1 ) ( ) ) ) ) ) {
tmp [ 12 ] = ( * ef13 ) ( arg1 , arg3 ) ;
if ( check_sym ( tmp [ 12 ] , ef14sym ) ) {
tmp [ 13 ] = arg_0 ( tmp [ 12 ] ) ;
tmp [ 14 ] = ( * ef15 ) ( tmp [ 13 ] , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
return ( * ef2 ) ( ( * ef3 ) ( lf3 ( make_list ( tmp [ 14 ] ) ) ) , ( * ef16 ) ( ( * ef20 ) ( ( * ef20 ) ( ( * ef17 ) ( ( * ef21 ) ( ( * ef22 ) ( ( constant5 ? constant5 : ( constant5 = ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 6 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 115 ] , char_table [ 117 ] , char_table [ 108 ] , char_table [ 116 ] ) ) ) ) ) ) ) ) , tmp [ 14 ] ) ) ) , ( constant6 ? constant6 : ( constant6 = ( * ef21 ) ( ( * ef4 ) ( ( * ef5 ) ( ( * ef6 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 10 , char_table [ 112 ] , char_table [ 117 ] , char_table [ 116 ] , char_table [ 95 ] , char_table [ 114 ] , char_table [ 101 ] , char_table [ 115 ] , char_table [ 117 ] , char_table [ 108 ] , char_table [ 116 ] ) ) ) ) , ( * ef3 ) ( lf3 ( cons ( make_list ( ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 5 , char_table [ 116 ] , char_table [ 97 ] , char_table [ 98 ] , char_table [ 108 ] , char_table [ 101 ] ) ) ) ) ) ) ) , cons ( make_list ( ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 6 , char_table [ 105 ] , char_table [ 110 ] , char_table [ 116 ] , char_table [ 101 ] , char_table [ 114 ] , char_table [ 109 ] ) ) ) ) ) ) ) , make_list ( ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 6 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 115 ] , char_table [ 117 ] , char_table [ 108 ] , char_table [ 116 ] ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) , ( constant7 ? constant7 : ( constant7 = ( * ef18 ) ( ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( ( ATerm ) ATmakeList ( 6 , char_table [ 114 ] , char_table [ 101 ] , char_table [ 115 ] , char_table [ 117 ] , char_table [ 108 ] , char_table [ 116 ] ) ) ) ) ) ) ) ) ) ) ) , arg4 ) ;
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
}
}
}
}
}
}
}
}
if ( check_sym ( arg7 , lf_AUX_MuASF_Term2C4_1sym ) ) {
{
ATerm atmp70 = arg_0 ( arg7 ) ;
if ( ! term_equal ( arg5 , ( * ef4 ) ( ( * ef5 ) ( ( * ef7 ) ( ( * ef8 ) ( lf4 ( cons ( make_list ( make_char ( 114 ) ) , cons ( make_list ( make_char ( 101 ) ) , cons ( make_list ( make_char ( 115 ) ) , cons ( make_list ( make_char ( 117 ) ) , cons ( make_list ( make_char ( 108 ) ) , make_list ( make_char ( 116 ) ) ) ) ) ) ) ) ) ) ) ) ) ) {
if ( term_equal ( ( * ef12 ) ( arg1 , arg3 ) , ( constant4 ? constant4 : ( constant4 = ( * ef1 ) ( ) ) ) ) ) {
tmp [ 0 ] = ( * ef13 ) ( arg1 , arg3 ) ;
if ( check_sym ( tmp [ 0 ] , ef14sym ) ) {
tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ;
tmp [ 2 ] = ( * ef15 ) ( tmp [ 1 ] , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
return ( * ef2 ) ( ( * ef3 ) ( lf3 ( make_list ( tmp [ 2 ] ) ) ) , ( constant1 ? constant1 : ( constant1 = ( * ef9 ) ( ) ) ) , arg4 ) ;
}
}
}
}
}
}
if ( check_sym ( arg7 , lf_AUX_MuASF_Term2C4_1sym ) ) {
{
ATerm atmp70 = arg_0 ( arg7 ) ;
return ( * ef23 ) ( arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , lf_AUX_MuASF_Term2C4_1 ( make_list ( atmp70 ) ) ) ;
}
}
return make_nf8 ( lf_AUX_MuASF_Term2C4_2sym , arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 ) ;
}
}
ATerm lf_AUX_MuASF_Term2C4_1 ( ATerm arg0 ) {
PROF ( prof_lf_AUX_MuASF_Term2C4_1 ) ;
return make_nf1 ( lf_AUX_MuASF_Term2C4_1sym , arg0 ) ;
}
ATerm lf4 ( ATerm arg0 ) {
PROF ( prof_lf4 ) ;
return make_nf1 ( lf4sym , arg0 ) ;
}
ATerm lf3 ( ATerm arg0 ) {
PROF ( prof_lf3 ) ;
return make_nf1 ( lf3sym , arg0 ) ;
}

