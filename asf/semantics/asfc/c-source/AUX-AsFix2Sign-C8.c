#include  "support.h"
static Symbol lf_AUX_AsFix2Sign_C8_1sym ;
static ATerm lf_AUX_AsFix2Sign_C8_1 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef10sym ;
static funcptr ef10 ;
static Symbol ef11sym ;
static funcptr ef11 ;
static Symbol ef7sym ;
static funcptr ef7 ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_AsFix2Sign_C8 ( ) {
lf_AUX_AsFix2Sign_C8_1sym = ATmakeSymbol ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"section2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)"
 , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_AsFix2Sign_C8_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"AFun\"),ql(\".\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"FuncDef\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"section2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)" ) , lf_AUX_AsFix2Sign_C8_1 , lf_AUX_AsFix2Sign_C8_1sym ) ;
register_prod ( ATparse ( "listtype(sort(\"AFun\"),ql(\".\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"FuncDef\"),ql(\";\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_AsFix2Sign_C8 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"lexfuncs2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"lexfuncs2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[l(\"get-cons\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATerm\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"lexical-syntax\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"lexical-syntax\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\".\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"ParseTrees\"),w(\"\"),[sort(\"ATerm\"),w(\"\"),ql(\"[\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"AFun\"),w(\"\"),ql(\".\"),w(\"\"),l(\"}\"),w(\"\"),l(\"+\")),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"productions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"ATerms\"),w(\"\"),[sort(\"ATermList\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ATerm\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"SortList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncSortStruct\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"MuASF-SingleSorted\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"FuncDef\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),no-attrs)" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"context-free-syntax\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix-Constructors\"),w(\"\"),[ql(\"context-free-syntax\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"AFun\"),w(\"\"),no-attrs)" ) ) ;
ef10 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cffuncs2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef10sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[l(\"cffuncs2sign\"),w(\"\"),l(\"(\"),w(\"\"),sort(\"ATermList\"),w(\"\"),l(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),l(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef11 = lookup_func ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
ef11sym = lookup_sym ( ATreadFromString ( "prod(id(\"AsFix2Sign-C\"),w(\"\"),[ql(\"(\"),w(\"\"),sort(\"FuncDefList\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"NameTable\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"FNT-tuple\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
static ATerm constant3 = NULL ;
void init_AUX_AsFix2Sign_C8 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
ATprotect ( & constant3 ) ;
}
ATerm lf_AUX_AsFix2Sign_C8_1 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
{
ATerm tmp [ 8 ] ;
PROF ( prof_lf_AUX_AsFix2Sign_C8_1 ) ;
tmp [ 0 ] = ( * ef2 ) ( arg0 ) ;
if ( term_equal ( tmp [ 0 ] , ( constant0 ? constant0 : ( constant0 = ( * ef3 ) ( ) ) ) ) ) {
tmp [ 1 ] = ( * ef4 ) ( arg0 , ( constant1 ? constant1 : ( constant1 = lf2 ( make_list ( ( * ef5 ) ( ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef6sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
return ( * ef1 ) ( tmp [ 2 ] , arg1 , arg2 ) ;
}
}
if ( term_equal ( tmp [ 0 ] , ( constant2 ? constant2 : ( constant2 = ( * ef9 ) ( ) ) ) ) ) {
tmp [ 1 ] = ( * ef4 ) ( arg0 , ( constant1 ? constant1 : ( constant1 = lf2 ( make_list ( ( * ef5 ) ( ) ) ) ) ) ) ;
if ( check_sym ( tmp [ 1 ] , ef6sym ) ) {
tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ;
tmp [ 3 ] = ( * ef10 ) ( tmp [ 2 ] , arg2 ) ;
if ( check_sym ( tmp [ 3 ] , ef11sym ) ) {
tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ;
tmp [ 5 ] = arg_1 ( tmp [ 3 ] ) ;
if ( check_sym ( tmp [ 4 ] , ef8sym ) ) {
tmp [ 6 ] = arg_0 ( tmp [ 4 ] ) ;
if ( check_sym ( tmp [ 6 ] , lf3sym ) ) {
tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ;
return ( * ef7 ) ( ( * ef8 ) ( lf3 ( make_list ( tmp [ 7 ] ) ) ) , arg1 , tmp [ 5 ] ) ;
}
}
}
}
}
return ( * ef7 ) ( ( constant3 ? constant3 : ( constant3 = ( * ef8 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ) , arg1 , arg2 ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
PROF ( prof_lf3 ) ;
return make_nf1 ( lf3sym , arg0 ) ;
}
ATerm lf2 ( ATerm arg0 ) {
PROF ( prof_lf2 ) ;
return make_nf1 ( lf2sym , arg0 ) ;
}

