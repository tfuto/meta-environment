/*

    Meta-Environment - An environment for language prototyping.
    Copyright (C) 2000  Stichting Mathematisch Centrum, Amsterdam, 
    The Netherlands. 

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/
/* This C code is generated by the AsfSdfCompiler version 1.3 */

#include  "asc-support.h"
static Symbol lf_AUX_Traversals_Imports13_2sym ;
static ATerm lf_AUX_Traversals_Imports13_2 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol lf_AUX_Traversals_Imports13_1sym ;
static ATerm lf_AUX_Traversals_Imports13_1 ( ATerm arg1 ) ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Traversals_Imports13 ( ) {
lf_AUX_Traversals_Imports13_2sym = ATmakeSymbol ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"all_imports_of_impsections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Traversals_Imports13_2sym ) ;
lf_AUX_Traversals_Imports13_1sym = ATmakeSymbol ( "listtype(sort(\"ImpSection\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Traversals_Imports13_1sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Import\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "listtype(sort(\"ImpSection\"))" ) , lf_AUX_Traversals_Imports13_1 , lf_AUX_Traversals_Imports13_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Traversals-Imports\"),w(\"\"),[ql(\"all_imports_of_impsections\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"ImpSection\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) , lf_AUX_Traversals_Imports13_2 , lf_AUX_Traversals_Imports13_2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Import\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Traversals_Imports13 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Import\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Imports\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"imports\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImpSection\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Modular-Sdf-Syntax\"),w(\"\"),[ql(\"imports\"),w(\"\"),sort(\"Imports\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"ImpSection\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Traversals_Imports13 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Traversals_Imports13_2 ( ATerm arg0 ) {
{
ATerm tmp [ 8 ] ;
FUNC_ENTRY ( lf_AUX_Traversals_Imports13_2sym , ATmakeAppl ( lf_AUX_Traversals_Imports13_2sym , arg0 ) ) ;
if ( check_sym ( arg0 , lf_AUX_Traversals_Imports13_1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( not_empty_list ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
( tmp [ 1 ] = list_tail ( atmp00 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , ef1sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
( tmp [ 5 ] = lf_AUX_Traversals_Imports13_2 ( lf_AUX_Traversals_Imports13_1 ( make_list ( tmp [ 1 ] ) ) ) ) ;
if ( check_sym ( tmp [ 5 ] , ef1sym ) ) {
( tmp [ 6 ] = arg_0 ( tmp [ 5 ] ) ) ;
if ( check_sym ( tmp [ 6 ] , lf3sym ) ) {
( tmp [ 7 ] = arg_0 ( tmp [ 6 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( cons ( make_list ( tmp [ 4 ] ) , make_list ( tmp [ 7 ] ) ) ) ) ) ;
}
}
}
}
}
}
else {
FUNC_EXIT_CONST ( constant0 , ( * ef1 ) ( lf3 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp00 ) ) {
( tmp [ 0 ] = list_head ( atmp00 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef2sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef1sym ) ) {
( tmp [ 2 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 2 ] , lf3sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 2 ] ) ) ;
FUNC_EXIT ( ( * ef1 ) ( lf3 ( make_list ( tmp [ 3 ] ) ) ) ) ;
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Traversals_Imports13_2sym , arg0 ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf_AUX_Traversals_Imports13_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Traversals_Imports13_1sym , ATmakeAppl ( lf_AUX_Traversals_Imports13_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Traversals_Imports13_1sym , arg0 ) ) ;
}

