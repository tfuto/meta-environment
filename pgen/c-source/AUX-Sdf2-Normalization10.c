/*

    PGEN - the SDF2 parse table generator.
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
static Symbol lf_AUX_Sdf2_Normalization10_1_recursivesym ;
static ATerm lf_AUX_Sdf2_Normalization10_1_recursive ( ATerm arg1 ) ;
static Symbol lf_AUX_Sdf2_Normalization10_1sym ;
static ATerm lf_AUX_Sdf2_Normalization10_1 ( ATerm arg1 ) ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol lf2sym ;
static ATerm lf2 ( ATerm arg1 ) ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol lf3sym ;
static ATerm lf3 ( ATerm arg1 ) ;
void register_AUX_Sdf2_Normalization10 ( ) {
lf_AUX_Sdf2_Normalization10_1_recursivesym = ATmakeSymbol ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Normalization10_1_recursivesym ) ;
lf_AUX_Sdf2_Normalization10_1sym = ATmakeSymbol ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Sdf2_Normalization10_1sym ) ;
lf2sym = ATmakeSymbol ( "listtype(sort(\"Restriction\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf2sym ) ;
lf3sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf3sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Normalization10_1 , lf_AUX_Sdf2_Normalization10_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),ql(\"-CF\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) , lf_AUX_Sdf2_Normalization10_1_recursive , lf_AUX_Sdf2_Normalization10_1_recursivesym ) ;
register_prod ( ATparse ( "listtype(sort(\"Restriction\"))" ) , lf2 , lf2sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"))" ) , lf3 , lf3sym ) ;
}
void resolve_AUX_Sdf2_Normalization10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[iter(sort(\"Restriction\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Projection\"),w(\"\"),[sort(\"Restrictions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Projection\"),w(\"\"),[sort(\"Restrictions\"),w(\"\"),ql(\"++\"),w(\"\"),sort(\"Restrictions\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restrictions\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"right\")],w(\"\"),l(\"}\")))" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"-/-\"),w(\"\"),sort(\"Lookaheads\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restriction\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Restrictions-Sdf-Syntax\"),w(\"\"),[sort(\"Symbols\"),w(\"\"),ql(\"-/-\"),w(\"\"),sort(\"Lookaheads\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Restriction\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Symbols\"),w(\"\"),[iter(sort(\"Symbol\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-CFr\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Sdf2-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"Symbols\"),w(\"\"),ql(\"-CFr\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbols\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Sdf2_Normalization10 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Sdf2_Normalization10_1 ( ATerm arg0 ) {
{
ATerm tmp [ 5 ] ;
FUNC_ENTRY ( lf_AUX_Sdf2_Normalization10_1sym , ATmakeAppl ( lf_AUX_Sdf2_Normalization10_1sym , arg0 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
{
ATerm atmp000 = arg_0 ( atmp00 ) ;
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef4sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( ( * ef5 ) ( make_nf1 ( ef4sym , lf3 ( make_list ( tmp [ 4 ] ) ) ) ) , tmp [ 2 ] ) ) ) ) ) ;
}
}
}
}
}
}
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( atmp00 , lf2sym ) ) {
( tmp [ 0 ] = arg_0 ( atmp00 ) ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Sdf2_Normalization10_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Sdf2_Normalization10_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Sdf2_Normalization10_1sym , arg0 ) ) ;
}
}
ATerm lf_AUX_Sdf2_Normalization10_1_recursive ( ATerm arg0 ) {
{
ATerm tmp [ 5 ] ;
FUNC_ENTRY ( lf_AUX_Sdf2_Normalization10_1_recursivesym , ATmakeAppl ( lf_AUX_Sdf2_Normalization10_1_recursivesym , arg0 ) ) ;
{
ATerm atmp00 = arg0 ;
{
ATerm atmp000 = atmp00 ;
if ( term_equal ( make_nf1 ( ef1sym , lf2 ( make_list ( atmp000 ) ) ) , ( constant0 ? constant0 : ( constant0 = make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ) ) ) {
FUNC_EXIT_CONST ( constant0 , make_nf1 ( ef1sym , lf2 ( make_list ( null ( ) ) ) ) ) ;
}
if ( is_single_element ( atmp000 ) ) {
( tmp [ 0 ] = list_head ( atmp000 ) ) ;
if ( check_sym ( tmp [ 0 ] , ef3sym ) ) {
( tmp [ 1 ] = arg_0 ( tmp [ 0 ] ) ) ;
( tmp [ 2 ] = arg_1 ( tmp [ 0 ] ) ) ;
if ( check_sym ( tmp [ 1 ] , ef4sym ) ) {
( tmp [ 3 ] = arg_0 ( tmp [ 1 ] ) ) ;
if ( check_sym ( tmp [ 3 ] , lf3sym ) ) {
( tmp [ 4 ] = arg_0 ( tmp [ 3 ] ) ) ;
FUNC_EXIT ( make_nf1 ( ef1sym , lf2 ( make_list ( ( * ef3 ) ( ( * ef5 ) ( make_nf1 ( ef4sym , lf3 ( make_list ( tmp [ 4 ] ) ) ) ) , tmp [ 2 ] ) ) ) ) ) ;
}
}
}
}
}
{
ATerm atmp00 = arg0 ;
( tmp [ 0 ] = atmp00 ) ;
{
ATerm atmp0000 [ 2 ] ;
( atmp0000 [ 0 ] = tmp [ 0 ] ) ;
if ( not_empty_list ( tmp [ 0 ] ) ) {
( tmp [ 0 ] = list_tail ( tmp [ 0 ] ) ) ;
( atmp0000 [ 1 ] = tmp [ 0 ] ) ;
while ( not_empty_list ( tmp [ 0 ] ) ) {
if ( not_empty_list ( tmp [ 0 ] ) ) {
FUNC_EXIT ( ( * ef2 ) ( lf_AUX_Sdf2_Normalization10_1_recursive ( slice ( atmp0000 [ 0 ] , atmp0000 [ 1 ] ) ) , lf_AUX_Sdf2_Normalization10_1_recursive ( tmp [ 0 ] ) ) ) ;
}
( atmp0000 [ 1 ] = list_tail ( atmp0000 [ 1 ] ) ) ;
( tmp [ 0 ] = atmp0000 [ 1 ] ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf1 ( lf_AUX_Sdf2_Normalization10_1_recursivesym , ( * ef1 ) ( lf2 ( arg0 ) ) ) ) ;
}
}
ATerm lf3 ( ATerm arg0 ) {
CONS_ENTRY ( lf3sym , ATmakeAppl ( lf3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf3sym , arg0 ) ) ;
}
ATerm lf2 ( ATerm arg0 ) {
CONS_ENTRY ( lf2sym , ATmakeAppl ( lf2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf2sym , arg0 ) ) ;
}

