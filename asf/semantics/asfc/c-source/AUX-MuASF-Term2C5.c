#include "support.h"
static Symbol lf_AUX_MuASF_Term2C5_2sym;
static ATerm lf_AUX_MuASF_Term2C5_2( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 , ATerm arg6 , ATerm arg7);
static Symbol ef16sym;
static funcptr ef16;
static Symbol ef12sym;
static funcptr ef12;
static Symbol ef13sym;
static funcptr ef13;
static Symbol ef24sym;
static funcptr ef24;
static Symbol ef15sym;
static funcptr ef15;
static Symbol ef23sym;
static funcptr ef23;
static Symbol ef25sym;
static funcptr ef25;
static Symbol ef7sym;
static funcptr ef7;
static Symbol ef8sym;
static funcptr ef8;
static Symbol ef9sym;
static funcptr ef9;
static Symbol ef26sym;
static funcptr ef26;
static Symbol ef11sym;
static funcptr ef11;
static Symbol ef6sym;
static funcptr ef6;
static Symbol lf4sym;
static ATerm lf4( ATerm arg1);
static Symbol ef14sym;
static funcptr ef14;
static Symbol ef1sym;
static funcptr ef1;
static Symbol ef2sym;
static funcptr ef2;
static Symbol ef3sym;
static funcptr ef3;
static Symbol lf3sym;
static ATerm lf3( ATerm arg1);
static Symbol ef4sym;
static funcptr ef4;
static Symbol ef10sym;
static funcptr ef10;
static Symbol ef17sym;
static funcptr ef17;
static Symbol ef22sym;
static funcptr ef22;
static Symbol ef18sym;
static funcptr ef18;
static Symbol ef21sym;
static funcptr ef21;
static Symbol ef19sym;
static funcptr ef19;
static Symbol ef20sym;
static funcptr ef20;
static Symbol ef27sym;
static funcptr ef27;
static Symbol ef28sym;
static funcptr ef28;
static Symbol ef29sym;
static funcptr ef29;
static Symbol ef30sym;
static funcptr ef30;
static Symbol ef31sym;
static funcptr ef31;
static Symbol lf5sym;
static ATerm lf5( ATerm arg1);
static Symbol lf_AUX_MuASF_Term2C5_1sym;
static ATerm lf_AUX_MuASF_Term2C5_1( ATerm arg1);
static Symbol ef5sym;
static funcptr ef5;
void register_AUX_MuASF_Term2C5( ) {
lf_AUX_MuASF_Term2C5_2sym= ATmakeSymbol( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg2\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"
 , 7 , ATtrue);
ATprotectSymbol( lf_AUX_MuASF_Term2C5_2sym);
lf4sym= ATmakeSymbol( "listtype(sort(\"Expression\"),ql(\",\"))" , 1 , ATtrue);
ATprotectSymbol( lf4sym);
lf3sym= ATmakeSymbol( "listtype(sort(\"CHAR\"))" , 1 , ATtrue);
ATprotectSymbol( lf3sym);
lf5sym= ATmakeSymbol( "listtype(sort(\"Term\"),ql(\",\"))" , 1 , ATtrue);
ATprotectSymbol( lf5sym);
lf_AUX_MuASF_Term2C5_1sym= ATmakeSymbol( "listtype(sort(\"NamePair\"),ql(\",\"))" , 1 , ATtrue);
ATprotectSymbol( lf_AUX_MuASF_Term2C5_1sym);
register_prod( ATparse( "listtype(sort(\"NamePair\"),ql(\",\"))") , lf_AUX_MuASF_Term2C5_1 , lf_AUX_MuASF_Term2C5_1sym);
register_prod( ATparse( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"term2carg2\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)") , lf_AUX_MuASF_Term2C5_2 , lf_AUX_MuASF_Term2C5_2sym);
register_prod( ATparse( "listtype(sort(\"CHAR\"))") , lf3 , lf3sym);
register_prod( ATparse( "listtype(sort(\"Expression\"),ql(\",\"))") , lf4 , lf4sym);
register_prod( ATparse( "listtype(sort(\"Term\"),ql(\",\"))") , lf5 , lf5sym);
}
void resolve_AUX_MuASF_Term2C5( ) {
ef1= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef1sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Cast-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef2= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)"));
ef2sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Cast-expression\"),w(\"\"),no-attrs)"));
ef3= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef3sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Identifier\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef4= lookup_func( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef4sym= lookup_sym( ATreadFromString( "prod(id(\"caller\"),w(\"\"),[l(\"identifier\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Identifier\"),w(\"\"),no-attrs)"));
ef5= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"));
ef5sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"));
ef6= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef6sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),no-attrs)"));
ef7= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef7sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement-list\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef8= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef8sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Statement\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list\"),w(\"\"),no-attrs)"));
ef9= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef9sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[l(\"return\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement\"),w(\"\"),no-attrs)"));
ef10= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef10sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef11= lookup_func( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef11sym= lookup_sym( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef12= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"celookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)"));
ef12sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"celookup\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)"));
ef13= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)"));
ef13sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"Expression\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"E-tuple\"),w(\"\"),no-attrs)"));
ef14= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef14sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[sort(\"Primary-expression\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Argument-expression-list\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef15= lookup_func( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef15sym= lookup_sym( ATreadFromString( "prod(id(\"Pure-C\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),no-attrs)"));
ef16= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef16sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-list-var-term\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef17= lookup_func( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef17sym= lookup_sym( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[l(\"false\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef18= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef18sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef19= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funargs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)"));
ef19sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funargs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)"));
ef20= lookup_func( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)"));
ef20sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"TermList\"),w(\"\"),no-attrs)"));
ef21= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-call-id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef21sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-call-id\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef22= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef22sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"get-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FunId\"),w(\"\"),no-attrs)"));
ef23= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"is-char\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef23sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"is-char\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef24= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"translate-char\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef24sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"translate-char\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Expression\"),w(\"\"),no-attrs)"));
ef25= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef25sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[sort(\"Statement-list-opt\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Statement-list-opt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Statement-list-opt\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef26= lookup_func( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef26sym= lookup_sym( ATreadFromString( "prod(id(\"C-Basics\"),w(\"\"),[l(\"make-c-temp\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Primary-expression\"),w(\"\"),no-attrs)"));
ef27= lookup_func( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef27sym= lookup_sym( ATreadFromString( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"left\")],w(\"\"),l(\"}\")))"));
ef28= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-trans-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef28sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-trans-list-funid\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"FunId\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef29= lookup_func( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef29sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Basics\"),w(\"\"),[l(\"is-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Term\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)"));
ef30= lookup_func( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef30sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[sort(\"FunId\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Term\"),w(\"\"),no-attrs)"));
ef31= lookup_func( ATreadFromString( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"terms2cargs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"));
ef31sym= lookup_sym( ATreadFromString( "prod(id(\"MuASF-Term2C\"),w(\"\"),[l(\"terms2cargs\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"Bool\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Term\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"C-env\"),w(\"\"),l(\",\"),w(\"\"),sort(\"AInt\"),w(\"\"),l(\",\"),w(\"\"),sort(\"Expression\"),w(\"\"),l(\",\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"NamePair\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ADS-tuple\"),w(\"\"),no-attrs)"));
}
static ATerm constant0= NULL;
static ATerm constant1= NULL;
static ATerm constant2= NULL;
static ATerm constant3= NULL;
static ATerm constant4= NULL;
static ATerm constant5= NULL;
static ATerm constant6= NULL;
static ATerm constant7= NULL;
static ATerm constant8= NULL;
void init_AUX_MuASF_Term2C5( ) {
ATprotect( & constant0);
ATprotect( & constant1);
ATprotect( & constant2);
ATprotect( & constant3);
ATprotect( & constant4);
ATprotect( & constant5);
ATprotect( & constant6);
ATprotect( & constant7);
ATprotect( & constant8);
}
ATerm lf_AUX_MuASF_Term2C5_2( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 , ATerm arg5 , ATerm arg6) {
{
ATerm tmp[26];
PROF( prof_lf_AUX_MuASF_Term2C5_2);
if( check_sym( arg0 , ef11sym)) {
if( check_sym( arg6 , lf_AUX_MuASF_Term2C5_1sym)) {
{
ATerm atmp60= arg_0( arg6);
tmp[ 0]= ( constant0? constant0: ( constant0= ( * ef1)( ( * ef2)( ( * ef3)( ( * ef4)( lf3( cons( make_list( make_char( 114)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 117)) , cons( make_list( make_char( 108)) , make_list( make_char( 116))))))))))))));
if( ! term_equal( arg5 , tmp[ 0])) {
tmp[ 1]= ( * ef10)( arg1);
if( term_equal( tmp[ 1] , arg0)) {
tmp[ 2]= ( * ef16)( arg1);
if( term_equal( tmp[ 2] , ( constant1? constant1: ( constant1= ( * ef17)( ))))) {
tmp[ 3]= ( * ef12)( arg1 , arg2);
if( check_sym( tmp[ 3] , ef13sym)) {
tmp[ 4]= arg_0( tmp[ 3]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( ( constant2? constant2: ( constant2= ( * ef3)( ( * ef4)( lf3( (ATerm) ATmakeList( 9 , char_table[ 109] , char_table[ 97] , char_table[ 107] , char_table[ 101] , char_table[ 95] , char_table[ 108] , char_table[ 105] , char_table[ 115] , char_table[ 116])))))) , ( * ef6)( lf4( make_list( tmp[ 4]))))))))) , ( constant3? constant3: ( constant3= ( * ef15)( ))) , arg4);
}
}
if( term_equal( tmp[ 2] , arg0)) {
tmp[ 3]= ( * ef12)( arg1 , arg2);
if( check_sym( tmp[ 3] , ef13sym)) {
tmp[ 4]= arg_0( tmp[ 3]);
return ( * ef5)( ( * ef6)( lf4( make_list( tmp[ 4]))) , ( constant3? constant3: ( constant3= ( * ef15)( ))) , arg4);
}
}
}
tmp[ 2]= ( constant1? constant1: ( constant1= ( * ef17)( )));
if( term_equal( tmp[ 1] , tmp[ 2])) {
tmp[ 3]= ( * ef22)( arg1);
tmp[ 4]= ( * ef29)( ( * ef30)( tmp[ 3]));
if( term_equal( tmp[ 4] , arg0)) {
tmp[ 5]= ( * ef21)( tmp[ 3]);
tmp[ 6]= ( * ef19)( arg1);
if( check_sym( tmp[ 6] , ef20sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf5sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
if( not_empty_list( tmp[ 8])) {
tmp[ 9]= ( * ef31)( arg0 , lf5( make_list( tmp[ 8])) , arg2 , arg3 , arg4 , arg5 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
if( check_sym( tmp[ 9] , ef5sym)) {
tmp[ 10]= arg_0( tmp[ 9]);
tmp[ 11]= arg_1( tmp[ 9]);
tmp[ 12]= arg_2( tmp[ 9]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( tmp[ 5] , tmp[ 10])))))) , tmp[ 11] , tmp[ 12]);
}
}
}
}
}
if( term_equal( tmp[ 4] , ( constant1? constant1: ( constant1= ( * ef17)( ))))) {
tmp[ 5]= lf_AUX_MuASF_Term2C5_2( ( constant1? constant1: ( constant1= ( * ef17)( ))) , arg1 , arg2 , arg3 , arg4 , arg5 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
if( check_sym( tmp[ 5] , ef5sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
tmp[ 7]= arg_1( tmp[ 5]);
tmp[ 8]= arg_2( tmp[ 5]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( ( constant2? constant2: ( constant2= ( * ef3)( ( * ef4)( lf3( (ATerm) ATmakeList( 9 , char_table[ 109] , char_table[ 97] , char_table[ 107] , char_table[ 101] , char_table[ 95] , char_table[ 108] , char_table[ 105] , char_table[ 115] , char_table[ 116])))))) , tmp[ 6])))))) , tmp[ 7] , tmp[ 8]);
}
}
}
}
}
}
}
if( check_sym( arg0 , ef17sym)) {
if( check_sym( arg5 , ef1sym)) {
{
ATerm atmp50= arg_0( arg5);
if( check_sym( atmp50 , ef2sym)) {
{
ATerm atmp500= arg_0( atmp50);
if( check_sym( atmp500 , ef3sym)) {
{
ATerm atmp5000= arg_0( atmp500);
if( check_sym( atmp5000 , ef4sym)) {
{
ATerm atmp50000= arg_0( atmp5000);
if( check_sym( atmp50000 , lf3sym)) {
{
ATerm atmp500000= arg_0( atmp50000);
if( check_sym( arg6 , lf_AUX_MuASF_Term2C5_1sym)) {
{
ATerm atmp60= arg_0( arg6);
if( not_empty_list( atmp500000)) {
tmp[ 0]= list_head( atmp500000);
if( term_equal( tmp[ 0] , make_char( 114))) {
tmp[ 1]= list_tail( atmp500000);
{
if( not_empty_list( tmp[ 1])) {
tmp[ 2]= list_head( tmp[ 1]);
if( term_equal( tmp[ 2] , make_char( 101))) {
tmp[ 3]= list_tail( tmp[ 1]);
{
if( not_empty_list( tmp[ 3])) {
tmp[ 4]= list_head( tmp[ 3]);
if( term_equal( tmp[ 4] , make_char( 115))) {
tmp[ 5]= list_tail( tmp[ 3]);
{
if( not_empty_list( tmp[ 5])) {
tmp[ 6]= list_head( tmp[ 5]);
if( term_equal( tmp[ 6] , make_char( 117))) {
tmp[ 7]= list_tail( tmp[ 5]);
{
if( not_empty_list( tmp[ 7])) {
tmp[ 8]= list_head( tmp[ 7]);
if( term_equal( tmp[ 8] , make_char( 108))) {
tmp[ 9]= list_tail( tmp[ 7]);
{
if( is_single_element( tmp[ 9])) {
tmp[ 10]= list_head( tmp[ 9]);
if( term_equal( tmp[ 10] , make_char( 116))) {
tmp[ 11]= ( * ef10)( arg1);
if( term_equal( tmp[ 11] , arg0)) {
tmp[ 12]= ( * ef18)( arg1 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
tmp[ 13]= ( * ef21)( tmp[ 12]);
tmp[ 14]= ( * ef19)( arg1);
if( check_sym( tmp[ 14] , ef20sym)) {
tmp[ 15]= arg_0( tmp[ 14]);
if( check_sym( tmp[ 15] , lf5sym)) {
tmp[ 16]= arg_0( tmp[ 15]);
if( not_empty_list( tmp[ 16])) {
tmp[ 17]= ( * ef1)( ( * ef2)( ( * ef26)( arg4)));
tmp[ 18]= ( * ef22)( arg1);
tmp[ 19]= ( * ef27)( ( * ef28)( tmp[ 18]) , ( * ef29)( ( * ef30)( tmp[ 18])));
tmp[ 20]= ( * ef31)( tmp[ 19] , lf5( make_list( tmp[ 16])) , arg2 , arg3 , arg4 , tmp[ 17] , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
if( check_sym( tmp[ 20] , ef5sym)) {
tmp[ 21]= arg_0( tmp[ 20]);
tmp[ 22]= arg_1( tmp[ 20]);
tmp[ 23]= arg_2( tmp[ 20]);
if( check_sym( tmp[ 21] , ef6sym)) {
tmp[ 24]= arg_0( tmp[ 21]);
if( check_sym( tmp[ 24] , lf4sym)) {
tmp[ 25]= arg_0( tmp[ 24]);
if( not_empty_list( tmp[ 25])) {
return ( * ef5)( ( constant4? constant4: ( constant4= ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef3)( ( * ef4)( lf3( (ATerm) ATmakeList( 6 , char_table[ 114] , char_table[ 101] , char_table[ 115] , char_table[ 117] , char_table[ 108] , char_table[ 116]))))))))))) , ( * ef25)( tmp[ 22] , ( * ef7)( ( * ef8)( ( * ef9)( ( * ef1)( ( * ef2)( ( * ef14)( tmp[ 13] , ( * ef6)( lf4( make_list( tmp[ 25])))))))))) , tmp[ 23]);
}
}
}
}
}
}
}
if( term_equal( ( * ef19)( arg1) , ( constant5? constant5: ( constant5= ( * ef20)( lf5( make_list( null( )))))))) {
tmp[ 13]= ( * ef21)( tmp[ 12]);
return ( * ef5)( ( constant4? constant4: ( constant4= ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef3)( ( * ef4)( lf3( (ATerm) ATmakeList( 6 , char_table[ 114] , char_table[ 101] , char_table[ 115] , char_table[ 117] , char_table[ 108] , char_table[ 116]))))))))))) , ( * ef7)( ( * ef8)( ( * ef9)( ( * ef1)( ( * ef2)( ( * ef14)( tmp[ 13] , ( constant6? constant6: ( constant6= ( * ef6)( lf4( make_list( null( )))))))))))) , arg4);
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
if( check_sym( arg6 , lf_AUX_MuASF_Term2C5_1sym)) {
{
ATerm atmp60= arg_0( arg6);
tmp[ 0]= ( constant0? constant0: ( constant0= ( * ef1)( ( * ef2)( ( * ef3)( ( * ef4)( lf3( cons( make_list( make_char( 114)) , cons( make_list( make_char( 101)) , cons( make_list( make_char( 115)) , cons( make_list( make_char( 117)) , cons( make_list( make_char( 108)) , make_list( make_char( 116))))))))))))));
if( ! term_equal( arg5 , tmp[ 0])) {
tmp[ 1]= ( * ef10)( arg1);
if( term_equal( tmp[ 1] , arg0)) {
tmp[ 2]= ( * ef19)( arg1);
if( term_equal( tmp[ 2] , ( constant5? constant5: ( constant5= ( * ef20)( lf5( make_list( null( )))))))) {
tmp[ 3]= ( * ef22)( arg1);
if( term_equal( ( * ef23)( tmp[ 3]) , ( constant7? constant7: ( constant7= ( * ef11)( ))))) {
tmp[ 4]= ( * ef24)( tmp[ 3]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( ( constant8? constant8: ( constant8= ( * ef3)( ( * ef4)( lf3( (ATerm) ATmakeList( 9 , char_table[ 109] , char_table[ 97] , char_table[ 107] , char_table[ 101] , char_table[ 95] , char_table[ 99] , char_table[ 104] , char_table[ 97] , char_table[ 114])))))) , ( * ef6)( lf4( make_list( tmp[ 4]))))))))) , ( constant3? constant3: ( constant3= ( * ef15)( ))) , arg4);
}
tmp[ 3]= ( * ef18)( arg1 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
if( term_equal( ( * ef23)( tmp[ 3]) , arg0)) {
tmp[ 4]= ( * ef21)( tmp[ 3]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( tmp[ 4] , ( constant6? constant6: ( constant6= ( * ef6)( lf4( make_list( null( )))))))))))) , ( constant3? constant3: ( constant3= ( * ef15)( ))) , arg4);
}
}
tmp[ 3]= ( * ef22)( arg1);
tmp[ 4]= ( * ef18)( arg1 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
tmp[ 5]= ( * ef21)( tmp[ 4]);
tmp[ 6]= ( * ef19)( arg1);
if( check_sym( tmp[ 6] , ef20sym)) {
tmp[ 7]= arg_0( tmp[ 6]);
if( check_sym( tmp[ 7] , lf5sym)) {
tmp[ 8]= arg_0( tmp[ 7]);
if( not_empty_list( tmp[ 8])) {
tmp[ 9]= ( * ef27)( ( * ef28)( tmp[ 3]) , ( * ef29)( ( * ef30)( tmp[ 3])));
tmp[ 10]= ( * ef31)( tmp[ 9] , lf5( make_list( tmp[ 8])) , arg2 , arg3 , arg4 , arg5 , lf_AUX_MuASF_Term2C5_1( make_list( atmp60)));
if( check_sym( tmp[ 10] , ef5sym)) {
tmp[ 11]= arg_0( tmp[ 10]);
tmp[ 12]= arg_1( tmp[ 10]);
tmp[ 13]= arg_2( tmp[ 10]);
return ( * ef5)( ( * ef6)( lf4( make_list( ( * ef1)( ( * ef2)( ( * ef14)( tmp[ 5] , tmp[ 11])))))) , tmp[ 12] , tmp[ 13]);
}
}
}
}
}
if( term_equal( tmp[ 1] , ( constant7? constant7: ( constant7= ( * ef11)( ))))) {
tmp[ 2]= ( * ef12)( arg1 , arg2);
if( check_sym( tmp[ 2] , ef13sym)) {
tmp[ 3]= arg_0( tmp[ 2]);
return ( * ef5)( ( * ef6)( lf4( make_list( tmp[ 3]))) , ( constant3? constant3: ( constant3= ( * ef15)( ))) , arg4);
}
}
}
}
}
}
if( check_sym( arg5 , ef1sym)) {
{
ATerm atmp50= arg_0( arg5);
if( check_sym( atmp50 , ef2sym)) {
{
ATerm atmp500= arg_0( atmp50);
if( check_sym( atmp500 , ef3sym)) {
{
ATerm atmp5000= arg_0( atmp500);
if( check_sym( atmp5000 , ef4sym)) {
{
ATerm atmp50000= arg_0( atmp5000);
if( check_sym( atmp50000 , lf3sym)) {
{
ATerm atmp500000= arg_0( atmp50000);
if( check_sym( arg6 , lf_AUX_MuASF_Term2C5_1sym)) {
{
ATerm atmp60= arg_0( arg6);
if( not_empty_list( atmp500000)) {
if( term_equal( list_head( atmp500000) , make_char( 114))) {
tmp[ 0]= list_tail( atmp500000);
if( not_empty_list( tmp[ 0])) {
if( term_equal( list_head( tmp[ 0]) , make_char( 101))) {
tmp[ 1]= list_tail( tmp[ 0]);
if( not_empty_list( tmp[ 1])) {
if( term_equal( list_head( tmp[ 1]) , make_char( 115))) {
tmp[ 2]= list_tail( tmp[ 1]);
if( not_empty_list( tmp[ 2])) {
if( term_equal( list_head( tmp[ 2]) , make_char( 117))) {
tmp[ 3]= list_tail( tmp[ 2]);
if( not_empty_list( tmp[ 3])) {
if( term_equal( list_head( tmp[ 3]) , make_char( 108))) {
tmp[ 4]= list_tail( tmp[ 3]);
if( is_single_element( tmp[ 4])) {
if( term_equal( list_head( tmp[ 4]) , make_char( 116))) {
if( term_equal( ( * ef10)( arg1) , ( constant7? constant7: ( constant7= ( * ef11)( ))))) {
tmp[ 5]= ( * ef12)( arg1 , arg2);
if( check_sym( tmp[ 5] , ef13sym)) {
tmp[ 6]= arg_0( tmp[ 5]);
return ( * ef5)( ( * ef6)( lf4( make_list( tmp[ 6]))) , ( * ef7)( ( * ef8)( ( * ef9)( tmp[ 6]))) , arg4);
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
return make_nf7( lf_AUX_MuASF_Term2C5_2sym , arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6);
}
}
ATerm lf_AUX_MuASF_Term2C5_1( ATerm arg0) {
PROF( prof_lf_AUX_MuASF_Term2C5_1);
return make_nf1( lf_AUX_MuASF_Term2C5_1sym , arg0);
}
ATerm lf5( ATerm arg0) {
PROF( prof_lf5);
return make_nf1( lf5sym , arg0);
}
ATerm lf3( ATerm arg0) {
PROF( prof_lf3);
return make_nf1( lf3sym , arg0);
}
ATerm lf4( ATerm arg0) {
PROF( prof_lf4);
return make_nf1( lf4sym , arg0);
}

