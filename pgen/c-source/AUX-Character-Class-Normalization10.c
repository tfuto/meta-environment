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
static Symbol lf_AUX_Character_Class_Normalization10_1sym ;
static ATerm lf_AUX_Character_Class_Normalization10_1 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol ef8sym ;
static funcptr ef8 ;
static Symbol ef9sym ;
static funcptr ef9 ;
static Symbol ef3sym ;
static funcptr ef3 ;
static Symbol ef4sym ;
static funcptr ef4 ;
static Symbol ef5sym ;
static funcptr ef5 ;
static Symbol ef1sym ;
static funcptr ef1 ;
static Symbol ef6sym ;
static funcptr ef6 ;
static Symbol ef2sym ;
static funcptr ef2 ;
static Symbol ef7sym ;
static funcptr ef7 ;
void register_AUX_Character_Class_Normalization10 ( ) {
lf_AUX_Character_Class_Normalization10_1sym = ATmakeSymbol ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharRange\"),w(\"\"),ql(\"|>\"),w(\"\"),sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Result\"),w(\"\"),no-attrs)"
 , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Character_Class_Normalization10_1sym ) ;
register_prod ( ATparse ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[sort(\"CharRange\"),w(\"\"),ql(\"|>\"),w(\"\"),sort(\"CharRange\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Result\"),w(\"\"),no-attrs)" ) , lf_AUX_Character_Class_Normalization10_1 , lf_AUX_Character_Class_Normalization10_1sym ) ;
}
void resolve_AUX_Character_Class_Normalization10 ( ) {
ef1 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef1sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"-\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef2 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"CharRange\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Result\"),w(\"\"),no-attrs)" ) ) ;
ef2sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Normalization\"),w(\"\"),[ql(\"<\"),w(\"\"),sort(\"CharRange\"),w(\"\"),ql(\">\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Result\"),w(\"\"),no-attrs)" ) ) ;
ef3 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"max\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef3sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"max\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\",\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef4 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"<=\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef4sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"<=\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef5sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[ql(\"true\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef6 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"succ\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef6sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[ql(\"succ\"),w(\"\"),ql(\"(\"),w(\"\"),sort(\"Character\"),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Character\"),w(\"\"),no-attrs)" ) ) ;
ef7 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef7sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Class-Syntax\"),w(\"\"),[sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"CharRange\"),w(\"\"),no-attrs)" ) ) ;
ef8 = lookup_func ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef8sym = lookup_sym ( ATreadFromString ( "prod(id(\"Booleans\"),w(\"\"),[sort(\"Bool\"),w(\"\"),ql(\"\\\\\\\\/\"),w(\"\"),sort(\"Bool\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"assoc\")],w(\"\"),l(\"}\")))" ) ) ;
ef9 = lookup_func ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
ef9sym = lookup_sym ( ATreadFromString ( "prod(id(\"Character-Arithmetic\"),w(\"\"),[sort(\"Character\"),w(\"\"),ql(\"==\"),w(\"\"),sort(\"Character\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Bool\"),w(\"\"),no-attrs)" ) ) ;
}
static ATerm constant0 = NULL ;
void init_AUX_Character_Class_Normalization10 ( ) {
ATprotect ( & constant0 ) ;
}
ATerm lf_AUX_Character_Class_Normalization10_1 ( ATerm arg0 , ATerm arg1 ) {
FUNC_ENTRY ( lf_AUX_Character_Class_Normalization10_1sym , ATmakeAppl ( lf_AUX_Character_Class_Normalization10_1sym , arg0 , arg1 ) ) ;
if ( check_sym ( arg0 , ef1sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
{
ATerm atmp01 = arg_1 ( arg0 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
{
ATerm atmp11 = arg_1 ( arg1 ) ;
if ( term_equal ( ( * ef4 ) ( atmp00 , atmp10 ) , ( constant0 ? constant0 : ( constant0 = ( * ef5 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( atmp10 , ( * ef6 ) ( atmp01 ) ) , ( constant0 ? constant0 : ( constant0 = ( * ef5 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef1 ) ( atmp00 , ( * ef3 ) ( atmp01 , atmp11 ) ) ) ) ;
}
}
}
}
}
if ( check_sym ( arg1 , ef7sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( term_equal ( ( * ef4 ) ( atmp00 , atmp10 ) , ( constant0 ? constant0 : ( constant0 = ( * ef5 ) ( ) ) ) ) ) {
if ( term_equal ( ( * ef4 ) ( atmp10 , ( * ef6 ) ( atmp01 ) ) , ( constant0 ? constant0 : ( constant0 = ( * ef5 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef1 ) ( atmp00 , ( * ef3 ) ( atmp01 , atmp10 ) ) ) ) ;
}
}
}
}
}
}
}
if ( check_sym ( arg0 , ef7sym ) ) {
{
ATerm atmp00 = arg_0 ( arg0 ) ;
if ( check_sym ( arg1 , ef1sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
{
ATerm atmp11 = arg_1 ( arg1 ) ;
if ( term_equal ( ( * ef8 ) ( ( * ef9 ) ( atmp00 , atmp10 ) , ( * ef9 ) ( ( * ef6 ) ( atmp00 ) , atmp10 ) ) , ( constant0 ? constant0 : ( constant0 = ( * ef5 ) ( ) ) ) ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef1 ) ( atmp00 , atmp11 ) ) ) ;
}
}
}
}
if ( check_sym ( arg1 , ef7sym ) ) {
{
ATerm atmp10 = arg_0 ( arg1 ) ;
if ( term_equal ( ( * ef6 ) ( atmp00 ) , atmp10 ) ) {
FUNC_EXIT ( ( * ef2 ) ( ( * ef1 ) ( atmp00 , atmp10 ) ) ) ;
}
if ( term_equal ( atmp00 , atmp10 ) ) {
FUNC_EXIT ( ( * ef2 ) ( arg0 ) ) ;
}
}
}
}
}
FUNC_EXIT ( make_nf2 ( lf_AUX_Character_Class_Normalization10_1sym , arg0 , arg1 ) ) ;
}

