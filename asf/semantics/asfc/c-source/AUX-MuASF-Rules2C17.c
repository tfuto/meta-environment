#include "support.h"
static asymbol * lf_AUX_MuASF_Rules2C17_3sym;
static aterm * lf_AUX_MuASF_Rules2C17_3( aterm * arg1 , aterm * arg2 , aterm * arg3 , aterm * arg4 , aterm * arg5 , aterm * arg6 , aterm * arg7);
static asymbol * ef1sym;
static funcptr ef1;
static asymbol * ef8sym;
static funcptr ef8;
static asymbol * ef35sym;
static funcptr ef35;
static asymbol * ef36sym;
static funcptr ef36;
static asymbol * ef32sym;
static funcptr ef32;
static asymbol * ef33sym;
static funcptr ef33;
static asymbol * ef34sym;
static funcptr ef34;
static asymbol * ef4sym;
static funcptr ef4;
static asymbol * ef31sym;
static funcptr ef31;
static asymbol * ef37sym;
static funcptr ef37;
static asymbol * ef9sym;
static funcptr ef9;
static asymbol * ef5sym;
static funcptr ef5;
static asymbol * ef10sym;
static funcptr ef10;
static asymbol * ef6sym;
static funcptr ef6;
static asymbol * ef13sym;
static funcptr ef13;
static asymbol * ef3sym;
static funcptr ef3;
static asymbol * lf5sym;
static aterm * lf5( aterm * arg1);
static asymbol * ef14sym;
static funcptr ef14;
static asymbol * ef15sym;
static funcptr ef15;
static asymbol * lf6sym;
static aterm * lf6( aterm * arg1);
static asymbol * ef16sym;
static funcptr ef16;
static asymbol * ef17sym;
static funcptr ef17;
static asymbol * ef18sym;
static funcptr ef18;
static asymbol * lf_AUX_MuASF_Rules2C17_1sym;
static aterm * lf_AUX_MuASF_Rules2C17_1( aterm * arg1);
static asymbol * ef2sym;
static funcptr ef2;
static asymbol * ef38sym;
static funcptr ef38;
static asymbol * lf4sym;
static aterm * lf4( aterm * arg1);
static asymbol * ef7sym;
static funcptr ef7;
static asymbol * ef39sym;
static funcptr ef39;
static asymbol * ef40sym;
static funcptr ef40;
static asymbol * ef42sym;
static funcptr ef42;
static asymbol * lf9sym;
static aterm * lf9( aterm * arg1);
static asymbol * lf_AUX_MuASF_Rules2C17_2sym;
static aterm * lf_AUX_MuASF_Rules2C17_2( aterm * arg1);
static asymbol * ef41sym;
static funcptr ef41;
static asymbol * ef43sym;
static funcptr ef43;
static asymbol * ef29sym;
static funcptr ef29;
static asymbol * ef20sym;
static funcptr ef20;
static asymbol * ef22sym;
static funcptr ef22;
static asymbol * ef30sym;
static funcptr ef30;
static asymbol * ef11sym;
static funcptr ef11;
static asymbol * ef23sym;
static funcptr ef23;
static asymbol * ef12sym;
static funcptr ef12;
static asymbol * lf7sym;
static aterm * lf7( aterm * arg1);
static asymbol * ef24sym;
static funcptr ef24;
static asymbol * ef25sym;
static funcptr ef25;
static asymbol * lf8sym;
static aterm * lf8( aterm * arg1);
static asymbol * ef19sym;
static funcptr ef19;
static asymbol * ef21sym;
static funcptr ef21;
static asymbol * ef26sym;
static funcptr ef26;
static asymbol * ef27sym;
static funcptr ef27;
static asymbol * ef28sym;
static funcptr ef28;
void register_AUX_MuASF_Rules2C17( ) {
arena local;
TinitArena( NULL , & local);
lf_AUX_MuASF_Rules2C17_3sym= TmkSymbol( "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"listpattern2cstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"A-set\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)"
 , SYM_STRING);
lf5sym= TmkSymbol( "listtype(sort(\"Cond\"),ql(\"&\"))" , SYM_STRING);
lf6sym= TmkSymbol( "listtype(sort(\"TE-pair\"),ql(\",\"))" , SYM_STRING);
lf_AUX_MuASF_Rules2C17_1sym= TmkSymbol( "listtype(sort(\"FV-Path\"),ql(\",\"))" , SYM_STRING);
lf4sym= TmkSymbol( "listtype(sort(\"AInt\"),ql(\",\"))" , SYM_STRING);
lf9sym= TmkSymbol( "listtype(sort(\"C-Rule\"),ql(\";\"))" , SYM_STRING);
lf_AUX_MuASF_Rules2C17_2sym= TmkSymbol( "listtype(sort(\"NamePair\"),ql(\",\"))" , SYM_STRING);
lf7sym= TmkSymbol( "listtype(sort(\"CHAR\"))" , SYM_STRING);
lf8sym= TmkSymbol( "listtype(sort(\"Expression\"),ql(\",\"))" , SYM_STRING);
register_prod( TmakeSimple( & local , "listtype(sort(\"FV-Path\"),ql(\",\"))") , lf_AUX_MuASF_Rules2C17_1 , lf_AUX_MuASF_Rules2C17_1sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"NamePair\"),ql(\",\"))") , lf_AUX_MuASF_Rules2C17_2 , lf_AUX_MuASF_Rules2C17_2sym);
register_prod( TmakeSimple( & local , "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"listpattern2cstats\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),sort(\"A-set\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)") , lf_AUX_MuASF_Rules2C17_3 , lf_AUX_MuASF_Rules2C17_3sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"AInt\"),ql(\",\"))") , lf4 , lf4sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Cond\"),ql(\"&\"))") , lf5 , lf5sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"TE-pair\"),ql(\",\"))") , lf6 , lf6sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"CHAR\"))") , lf7 , lf7sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"Expression\"),ql(\",\"))") , lf8 , lf8sym);
register_prod( TmakeSimple( & local , "listtype(sort(\"C-Rule\"),ql(\";\"))") , lf9 , lf9sym);
}
void resolve_AUX_MuASF_Rules2C17( ) {
arena local;
TinitArena( NULL , & local);
ef1= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef2= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),no-attrs)"));
ef3= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"FV-Path\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Cond\"),w(\"\"),ql(\"&\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\"|\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"|\"),w(\"\"),sort(\"C-env\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),no-attrs)"));
ef4= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef5= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef6= lookup_func( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef7= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADSI-tuple\"),w(\"\"),no-attrs)"));
ef8= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef8sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Declaration-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Declaration-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef9= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef9sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef10= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef10sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef11= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef11sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef12= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef12sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef13= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-atmp\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef13sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-atmp\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef14= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"C-env\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"C-env\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef14sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"C-env\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"C-env\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef15= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),no-attrs)"));
ef15sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"C-env\"),w(\"\"),no-attrs)"));
ef16= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),no-attrs)"));
ef16sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TE-pair\"),w(\"\"),no-attrs)"));
ef17= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)"));
ef17sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Declaration-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)"));
ef18= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-decl\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)"));
ef18sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-decl\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)"));
ef19= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef19sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef20= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef20sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef21= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef21sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef22= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef22sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef23= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef23sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef24= lookup_func( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef24sym= lookup_sym( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef25= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef25sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef26= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef26sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[l(\"if\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef27= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef27sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[ql(\"{\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef28= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)"));
ef28sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list-opt\"),w(\"\"),no-attrs)"));
ef29= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef29sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef30= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef30sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Expression\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef31= lookup_func( TmakeSimple( & local , "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"is-star-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef31sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"is-star-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef32= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef32sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef33= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef33sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Integer-constant\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef34= lookup_func( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)"));
ef34sym= lookup_sym( TmakeSimple( & local , "prod(id(\"caller\"),w(\"\"),[l(\"integer-constant\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Integer-constant\"),w(\"\"),no-attrs)"));
ef35= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-array-decl\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)"));
ef35sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-array-decl\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Declaration-list\"),w(\"\"),no-attrs)"));
ef36= lookup_func( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef36sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Pure-C\"),w(\"\"),[l(\"while\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\"),w(\"\"),sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef37= lookup_func( TmakeSimple( & local , "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"is-plus-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef37sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Remove-Lists-Aux\"),w(\"\"),[l(\"is-plus-var\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef38= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef38sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef39= lookup_func( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef39sym= lookup_sym( TmakeSimple( & local , "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef40= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef40sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[l(\"make-c-expression\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef41= lookup_func( TmakeSimple( & local , "prod(id(\"ANumerals\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AInt\"),w(\"\"),no-attrs)"));
ef41sym= lookup_sym( TmakeSimple( & local , "prod(id(\"ANumerals\"),w(\"\"),[l(\"succ\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AInt\"),w(\"\"),no-attrs)"));
ef42= lookup_func( TmakeSimple( & local , "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats2\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"A-set\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"));
ef42sym= lookup_sym( TmakeSimple( & local , "prod(id(\"MuASF-Rules2C\"),w(\"\"),[l(\"asfrules2cstats2\"),w(\"\"),l(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"C-Rule\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"A-set\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"));
ef43= lookup_func( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"));
ef43sym= lookup_sym( TmakeSimple( & local , "prod(id(\"Rules2C-Aux\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SlI-tuple\"),w(\"\"),no-attrs)"));
}
aterm * lf_AUX_MuASF_Rules2C17_3( aterm * arg0 , aterm * arg1 , aterm * arg2 , aterm * arg3 , aterm * arg4 , aterm * arg5 , aterm * arg6) {
{
aterm * tmp[14];
PROF( prof_lf_AUX_MuASF_Rules2C17_3);
if( check_sym( arg0 , ef6sym)) {
if( check_sym( arg1 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( check_sym( arg2 , ef3sym)) {
{
aterm * atmp20= arg_0( arg2);
if( check_sym( atmp20 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp200= arg_0( atmp20);
{
aterm * atmp21= arg_1( arg2);
if( check_sym( atmp21 , lf5sym)) {
{
aterm * atmp210= arg_0( atmp21);
{
aterm * atmp22= arg_2( arg2);
{
aterm * atmp23= arg_3( arg2);
{
aterm * atmp24= arg_4( arg2);
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
t_protect( atmp10);
tmp[ 4]= list_tail( atmp10);
t_protect( tmp[ 4]);
if( not_empty_list( tmp[ 4])) {
t_protect( tmp[ 1]);
if( term_equal( ( * ef9)( tmp[ 1]) , ( * ef5)( ))) {
t_protect( tmp[ 1]);
t_protect( arg0);
if( term_equal( ( * ef10)( tmp[ 1]) , arg0)) {
t_protect( tmp[ 3]);
tmp[ 5]= ( * ef11)( ( * ef12)( ( * ef13)( lf4( make_list( tmp[ 3])))));
t_protect( arg0);
t_protect( tmp[ 4]);
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 6]= lf_AUX_MuASF_Rules2C17_3( arg0 , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 4])) , ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 5]))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 5])))))) , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 6] , ef7sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
tmp[ 8]= arg_1( tmp[ 6]);
tmp[ 9]= arg_2( tmp[ 6]);
t_protect( tmp[ 3]);
tmp[ 10]= ( * ef17)( ( * ef18)( lf4( make_list( tmp[ 3]))));
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 5]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 8]);
tmp[ 11]= ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 5] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 97)) , cons( make_list( make_char( 105)) , make_list( make_char( 108))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , tmp[ 8])))));
t_protect( tmp[ 7]);
t_protect( tmp[ 9]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef7)( ( * ef8)( tmp[ 7] , tmp[ 10]) , tmp[ 11] , tmp[ 9]);
}
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 5]);
}
}
}
t_unprotect( tmp[ 4]);
}
}
t_unprotect( tmp[ 0]);
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
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 1] , ef38sym)) {
tmp[ 3]= arg_0( tmp[ 1]);
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 4]= arg_0( tmp[ 2]);
t_protect( atmp10);
tmp[ 5]= list_tail( atmp10);
t_protect( tmp[ 5]);
if( not_empty_list( tmp[ 5])) {
t_protect( tmp[ 3]);
t_protect( arg0);
if( term_equal( ( * ef4)( ( * ef38)( tmp[ 3])) , arg0)) {
t_protect( arg6);
tmp[ 6]= ( * ef11)( ( * ef39)( arg6));
t_protect( tmp[ 3]);
t_protect( tmp[ 6]);
t_protect( atmp50);
tmp[ 7]= ( * ef40)( tmp[ 3] , tmp[ 6] , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)));
t_protect( arg0);
t_protect( tmp[ 5]);
t_protect( arg2);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 8]= lf_AUX_MuASF_Rules2C17_3( arg0 , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 5])) , arg2 , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , ( * ef41)( arg6));
if( check_sym( tmp[ 8] , ef7sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
tmp[ 10]= arg_1( tmp[ 8]);
tmp[ 11]= arg_2( tmp[ 8]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 6]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( tmp[ 10]);
tmp[ 12]= ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 6] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 97)) , cons( make_list( make_char( 105)) , make_list( make_char( 108))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , ( * ef19)( ( * ef21)( ( * ef26)( tmp[ 7] , ( * ef27)( ( * ef28)( ) , tmp[ 10])))))))));
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef7)( tmp[ 9] , tmp[ 12] , tmp[ 11]);
}
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 6]);
}
}
t_unprotect( tmp[ 5]);
}
}
}
t_unprotect( tmp[ 0]);
}
}
}
}
}
}
if( check_sym( arg0 , ef5sym)) {
if( check_sym( arg1 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( check_sym( arg2 , ef3sym)) {
{
aterm * atmp20= arg_0( arg2);
if( check_sym( atmp20 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp200= arg_0( atmp20);
{
aterm * atmp21= arg_1( arg2);
if( check_sym( atmp21 , lf5sym)) {
{
aterm * atmp210= arg_0( atmp21);
{
aterm * atmp22= arg_2( arg2);
{
aterm * atmp23= arg_3( arg2);
{
aterm * atmp24= arg_4( arg2);
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
t_protect( atmp10);
tmp[ 4]= list_tail( atmp10);
t_protect( tmp[ 4]);
if( not_empty_list( tmp[ 4])) {
t_protect( tmp[ 1]);
t_protect( arg0);
if( term_equal( ( * ef9)( tmp[ 1]) , arg0)) {
t_protect( tmp[ 1]);
if( term_equal( ( * ef10)( tmp[ 1]) , ( * ef6)( ))) {
t_protect( tmp[ 3]);
tmp[ 5]= ( * ef11)( ( * ef12)( ( * ef13)( lf4( make_list( tmp[ 3])))));
t_protect( tmp[ 4]);
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 6]= lf_AUX_MuASF_Rules2C17_3( ( * ef6)( ) , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 4])) , ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 5]))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 5])))))) , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 6] , ef7sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
tmp[ 8]= arg_1( tmp[ 6]);
tmp[ 9]= arg_2( tmp[ 6]);
t_protect( tmp[ 3]);
tmp[ 10]= ( * ef17)( ( * ef18)( lf4( make_list( tmp[ 3]))));
t_protect( arg3);
t_protect( tmp[ 5]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 8]);
tmp[ 11]= ( * ef29)( ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 5] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 97)) , cons( make_list( make_char( 105)) , make_list( make_char( 108))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , tmp[ 8]);
t_protect( tmp[ 7]);
t_protect( tmp[ 9]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef7)( ( * ef8)( tmp[ 7] , tmp[ 10]) , tmp[ 11] , tmp[ 9]);
}
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 5]);
}
}
}
t_unprotect( tmp[ 4]);
}
}
t_unprotect( tmp[ 0]);
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
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 1] , ef38sym)) {
tmp[ 3]= arg_0( tmp[ 1]);
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 4]= arg_0( tmp[ 2]);
t_protect( atmp10);
tmp[ 5]= list_tail( atmp10);
t_protect( tmp[ 5]);
if( not_empty_list( tmp[ 5])) {
t_protect( tmp[ 3]);
if( term_equal( ( * ef4)( ( * ef38)( tmp[ 3])) , ( * ef6)( ))) {
t_protect( arg6);
tmp[ 6]= ( * ef11)( ( * ef39)( arg6));
t_protect( tmp[ 3]);
t_protect( tmp[ 6]);
t_protect( atmp50);
tmp[ 7]= ( * ef40)( tmp[ 3] , tmp[ 6] , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)));
t_protect( tmp[ 5]);
t_protect( arg2);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 8]= lf_AUX_MuASF_Rules2C17_3( ( * ef6)( ) , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 5])) , arg2 , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , ( * ef41)( arg6));
if( check_sym( tmp[ 8] , ef7sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
tmp[ 10]= arg_1( tmp[ 8]);
tmp[ 11]= arg_2( tmp[ 8]);
t_protect( arg3);
t_protect( tmp[ 6]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( tmp[ 10]);
tmp[ 12]= ( * ef29)( ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 6] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 97)) , cons( make_list( make_char( 105)) , make_list( make_char( 108))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , ( * ef19)( ( * ef21)( ( * ef26)( tmp[ 7] , ( * ef27)( ( * ef28)( ) , tmp[ 10])))));
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef7)( tmp[ 9] , tmp[ 12] , tmp[ 11]);
}
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 6]);
}
}
t_unprotect( tmp[ 5]);
}
}
}
t_unprotect( tmp[ 0]);
}
}
}
}
}
}
if( check_sym( arg1 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp10= arg_0( arg1);
if( check_sym( arg2 , ef3sym)) {
{
aterm * atmp20= arg_0( arg2);
if( check_sym( atmp20 , lf_AUX_MuASF_Rules2C17_1sym)) {
{
aterm * atmp200= arg_0( atmp20);
{
aterm * atmp21= arg_1( arg2);
if( check_sym( atmp21 , lf5sym)) {
{
aterm * atmp210= arg_0( atmp21);
{
aterm * atmp22= arg_2( arg2);
{
aterm * atmp23= arg_3( arg2);
{
aterm * atmp24= arg_4( arg2);
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( is_single_element( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
{
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
t_protect( tmp[ 1]);
tmp[ 4]= ( * ef9)( tmp[ 1]);
t_protect( tmp[ 4]);
if( term_equal( tmp[ 4] , ( * ef5)( ))) {
tmp[ 5]= ( * ef5)( );
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
if( term_equal( ( * ef31)( tmp[ 1]) , tmp[ 5])) {
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( arg3);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 6]= ( * ef42)( lf9( make_list( ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , arg3))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , arg3)))))))) , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 6] , ef43sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
tmp[ 8]= arg_1( tmp[ 6]);
t_protect( tmp[ 7]);
t_protect( tmp[ 8]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef7)( ( * ef28)( ) , tmp[ 7] , tmp[ 8]);
}
t_unprotect( tmp[ 6]);
}
t_protect( tmp[ 1]);
t_protect( tmp[ 5]);
if( term_equal( ( * ef37)( tmp[ 1]) , tmp[ 5])) {
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( arg3);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 6]= ( * ef42)( lf9( make_list( ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , arg3))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , arg3)))))))) , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 6] , ef43sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
tmp[ 8]= arg_1( tmp[ 6]);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 7]);
tmp[ 9]= ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , tmp[ 7]))));
t_protect( tmp[ 8]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
return ( * ef7)( ( * ef28)( ) , tmp[ 9] , tmp[ 8]);
}
t_unprotect( tmp[ 6]);
}
t_protect( tmp[ 1]);
if( term_equal( ( * ef10)( tmp[ 1]) , ( * ef6)( ))) {
t_protect( tmp[ 3]);
tmp[ 6]= ( * ef11)( ( * ef12)( ( * ef13)( lf4( make_list( tmp[ 3])))));
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( tmp[ 6]);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( tmp[ 6]);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 7]= ( * ef42)( lf9( make_list( ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 6]))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , tmp[ 6])))))))) , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 7] , ef43sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
tmp[ 9]= arg_1( tmp[ 7]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 6]);
t_protect( arg3);
t_protect( tmp[ 8]);
tmp[ 10]= ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 110)) , cons( make_list( make_char( 103)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 110)) , make_list( make_char( 116))))))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 6] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , tmp[ 8])))));
t_protect( tmp[ 3]);
tmp[ 11]= ( * ef17)( ( * ef18)( lf4( make_list( tmp[ 3]))));
t_protect( tmp[ 9]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef7)( tmp[ 11] , tmp[ 10] , tmp[ 9]);
}
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 6]);
}
t_unprotect( tmp[ 5]);
}
t_unprotect( tmp[ 4]);
}
}
}
if( check_sym( tmp[ 0] , ef1sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
if( check_sym( tmp[ 1] , lf_AUX_MuASF_Rules2C17_1sym)) {
tmp[ 2]= arg_0( tmp[ 1]);
t_protect( tmp[ 2]);
if( not_empty_list( tmp[ 2])) {
t_protect( tmp[ 2]);
tmp[ 3]= list_head( tmp[ 2]);
if( check_sym( tmp[ 3] , ef2sym)) {
tmp[ 4]= arg_0( tmp[ 3]);
tmp[ 5]= arg_1( tmp[ 3]);
if( check_sym( tmp[ 5] , lf4sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
t_protect( tmp[ 2]);
tmp[ 7]= list_tail( tmp[ 2]);
t_protect( tmp[ 7]);
if( not_empty_list( tmp[ 7])) {
t_protect( tmp[ 4]);
if( term_equal( ( * ef4)( tmp[ 4]) , ( * ef5)( ))) {
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( atmp24);
t_protect( atmp50);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg5);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 3]);
return lf_AUX_MuASF_Rules2C17_3( arg0 , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 7])) , ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , atmp23 , atmp24) , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
}
}
t_unprotect( tmp[ 7]);
}
}
t_unprotect( tmp[ 3]);
}
}
}
t_unprotect( tmp[ 0]);
}
t_protect( atmp10);
if( not_empty_list( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
{
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
{
t_protect( atmp10);
tmp[ 4]= list_tail( atmp10);
t_protect( tmp[ 4]);
if( not_empty_list( tmp[ 4])) {
t_protect( tmp[ 1]);
tmp[ 5]= ( * ef9)( tmp[ 1]);
t_protect( tmp[ 5]);
if( term_equal( tmp[ 5] , ( * ef5)( ))) {
tmp[ 6]= ( * ef5)( );
t_protect( tmp[ 1]);
t_protect( tmp[ 6]);
if( term_equal( ( * ef37)( tmp[ 1]) , tmp[ 6])) {
t_protect( tmp[ 3]);
tmp[ 7]= ( * ef13)( lf4( make_list( tmp[ 3])));
t_protect( tmp[ 4]);
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 8]= lf_AUX_MuASF_Rules2C17_3( ( * ef5)( ) , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 4])) , ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 115)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 99)) , make_list( make_char( 101))))))))) , ( * ef25)( lf8( cons( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48))))))))) , make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49))))))))))))))))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 115)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 99)) , make_list( make_char( 101))))))))) , ( * ef25)( lf8( cons( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48))))))))) , make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))))))))))))))) , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 8] , ef7sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
tmp[ 10]= arg_1( tmp[ 8]);
tmp[ 11]= arg_2( tmp[ 8]);
t_protect( tmp[ 3]);
tmp[ 12]= ( * ef17)( ( * ef35)( lf4( make_list( tmp[ 3]))));
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 10]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( arg3);
tmp[ 13]= ( * ef19)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48)))))))) , arg3))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 97)) , cons( make_list( make_char( 105)) , make_list( make_char( 108))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))) , ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))) , arg3))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef36)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( tmp[ 10] , ( * ef19)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))) , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 110)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 120)) , make_list( make_char( 116))))))))))))))) , ( * ef25)( lf8( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))))))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49))))))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))))))))))));
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef7)( ( * ef8)( tmp[ 9] , tmp[ 12]) , tmp[ 13] , tmp[ 11]);
}
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 7]);
}
t_protect( tmp[ 1]);
t_protect( tmp[ 6]);
if( term_equal( ( * ef31)( tmp[ 1]) , tmp[ 6])) {
t_protect( tmp[ 3]);
tmp[ 7]= ( * ef13)( lf4( make_list( tmp[ 3])));
t_protect( tmp[ 4]);
t_protect( atmp200);
t_protect( atmp210);
t_protect( atmp22);
t_protect( atmp23);
t_protect( tmp[ 1]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( atmp24);
t_protect( tmp[ 1]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 8]= lf_AUX_MuASF_Rules2C17_3( ( * ef5)( ) , lf_AUX_MuASF_Rules2C17_1( make_list( tmp[ 4])) , ( * ef3)( lf_AUX_MuASF_Rules2C17_1( make_list( atmp200)) , lf5( make_list( atmp210)) , atmp22 , ( * ef14)( atmp23 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 115)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 99)) , make_list( make_char( 101))))))))) , ( * ef25)( lf8( cons( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48))))))))) , make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49))))))))))))))))))) , ( * ef14)( atmp24 , ( * ef15)( lf6( make_list( ( * ef16)( tmp[ 1] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 115)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 99)) , make_list( make_char( 101))))))))) , ( * ef25)( lf8( cons( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48))))))))) , make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))))))))))))))) , arg3 , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , arg6);
if( check_sym( tmp[ 8] , ef7sym)) {
tmp[ 9]= arg_0( tmp[ 8]);
tmp[ 10]= arg_1( tmp[ 8]);
tmp[ 11]= arg_2( tmp[ 8]);
t_protect( tmp[ 3]);
tmp[ 12]= ( * ef17)( ( * ef35)( lf4( make_list( tmp[ 3]))));
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 10]);
t_protect( tmp[ 7]);
t_protect( tmp[ 7]);
t_protect( arg3);
t_protect( tmp[ 7]);
t_protect( arg3);
tmp[ 13]= ( * ef19)( ( * ef20)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 48)))))))) , arg3))) , ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))) , arg3))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef36)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 110)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 121)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , make_list( make_char( 116)))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( tmp[ 10] , ( * ef19)( ( * ef20)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef30)( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))) , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 110)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 120)) , make_list( make_char( 116))))))))))))))) , ( * ef25)( lf8( make_list( ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49)))))))))))))))) , ( * ef22)( ( * ef30)( arg3 , ( * ef11)( ( * ef32)( ( * ef12)( tmp[ 7]) , ( * ef11)( ( * ef33)( ( * ef34)( lf7( make_list( make_char( 49))))))))))) , ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3)))))))))))));
t_protect( tmp[ 9]);
t_protect( tmp[ 11]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 4]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 8]);
return ( * ef7)( ( * ef8)( tmp[ 9] , tmp[ 12]) , tmp[ 13] , tmp[ 11]);
}
t_unprotect( tmp[ 8]);
t_unprotect( tmp[ 7]);
}
t_unprotect( tmp[ 6]);
}
t_unprotect( tmp[ 5]);
}
t_unprotect( tmp[ 4]);
}
}
}
}
t_unprotect( tmp[ 0]);
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
if( check_sym( arg5 , lf_AUX_MuASF_Rules2C17_2sym)) {
{
aterm * atmp50= arg_0( arg5);
t_protect( atmp10);
if( is_single_element( atmp10)) {
t_protect( atmp10);
tmp[ 0]= list_head( atmp10);
if( check_sym( tmp[ 0] , ef2sym)) {
tmp[ 1]= arg_0( tmp[ 0]);
tmp[ 2]= arg_1( tmp[ 0]);
if( check_sym( tmp[ 1] , ef38sym)) {
tmp[ 3]= arg_0( tmp[ 1]);
if( check_sym( tmp[ 2] , lf4sym)) {
tmp[ 4]= arg_0( tmp[ 2]);
t_protect( arg6);
tmp[ 5]= ( * ef11)( ( * ef39)( arg6));
t_protect( tmp[ 3]);
t_protect( tmp[ 5]);
t_protect( atmp50);
tmp[ 6]= ( * ef40)( tmp[ 3] , tmp[ 5] , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)));
t_protect( arg2);
t_protect( arg4);
t_protect( atmp50);
t_protect( arg6);
tmp[ 7]= ( * ef42)( lf9( make_list( arg2)) , arg4 , lf_AUX_MuASF_Rules2C17_2( make_list( atmp50)) , ( * ef41)( arg6));
if( check_sym( tmp[ 7] , ef43sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
tmp[ 9]= arg_1( tmp[ 7]);
t_protect( arg3);
t_protect( arg3);
t_protect( arg3);
t_protect( tmp[ 5]);
t_protect( arg3);
t_protect( tmp[ 6]);
t_protect( tmp[ 8]);
tmp[ 10]= ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef26)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 110)) , cons( make_list( make_char( 103)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 108)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 109)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 110)) , make_list( make_char( 116))))))))))))))))))))) , ( * ef25)( lf8( make_list( arg3))))) , ( * ef27)( ( * ef28)( ) , ( * ef29)( ( * ef19)( ( * ef20)( ( * ef21)( ( * ef22)( ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 112)) , cons( make_list( make_char( 114)) , cons( make_list( make_char( 111)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 99)) , make_list( make_char( 116))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))) , ( * ef22)( ( * ef30)( tmp[ 5] , ( * ef11)( ( * ef23)( ( * ef12)( ( * ef24)( lf7( cons( make_list( make_char( 108)) , cons( make_list( make_char( 105)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 116)) , cons( make_list( make_char( 95)) , cons( make_list( make_char( 104)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 97)) , make_list( make_char( 100))))))))))))) , ( * ef25)( lf8( make_list( arg3))))))))) , ( * ef19)( ( * ef21)( ( * ef26)( tmp[ 6] , ( * ef27)( ( * ef28)( ) , tmp[ 8])))))))));
t_protect( tmp[ 9]);
t_unprotect( arg0);
t_unprotect( arg1);
t_unprotect( arg2);
t_unprotect( arg3);
t_unprotect( arg4);
t_unprotect( arg5);
t_unprotect( arg6);
t_unprotect( tmp[ 0]);
t_unprotect( tmp[ 5]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 7]);
return ( * ef7)( ( * ef28)( ) , tmp[ 10] , tmp[ 9]);
}
t_unprotect( tmp[ 7]);
t_unprotect( tmp[ 6]);
t_unprotect( tmp[ 5]);
}
}
}
t_unprotect( tmp[ 0]);
}
}
}
}
}
return make_nf7( lf_AUX_MuASF_Rules2C17_3sym , arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6);
}
}
aterm * lf8( aterm * arg0) {
PROF( prof_lf8);
return make_nf1( lf8sym , arg0);
}
aterm * lf7( aterm * arg0) {
PROF( prof_lf7);
return make_nf1( lf7sym , arg0);
}
aterm * lf_AUX_MuASF_Rules2C17_2( aterm * arg0) {
PROF( prof_lf_AUX_MuASF_Rules2C17_2);
return make_nf1( lf_AUX_MuASF_Rules2C17_2sym , arg0);
}
aterm * lf9( aterm * arg0) {
PROF( prof_lf9);
return make_nf1( lf9sym , arg0);
}
aterm * lf4( aterm * arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}
aterm * lf_AUX_MuASF_Rules2C17_1( aterm * arg0) {
PROF( prof_lf_AUX_MuASF_Rules2C17_1);
return make_nf1( lf_AUX_MuASF_Rules2C17_1sym , arg0);
}
aterm * lf6( aterm * arg0) {
PROF( prof_lf6);
return make_nf1( lf6sym , arg0);
}
aterm * lf5( aterm * arg0) {
PROF( prof_lf5);
return make_nf1( lf5sym , arg0);
}

