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
static Symbol lf_AUX_Literals_Sdf_Syntax1_1sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Literals_Sdf_Syntax1_2sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Literals_Sdf_Syntax1_3sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_3 ( ATerm arg1 ) ;
static Symbol lf_AUX_Literals_Sdf_Syntax1_4sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_4 ( ATerm arg1 ) ;
static Symbol lf_AUX_Literals_Sdf_Syntax1_6sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_6 ( ATerm arg1 , ATerm arg2 , ATerm arg3 , ATerm arg4 ) ;
static Symbol lf_AUX_Literals_Sdf_Syntax1_5sym ;
static ATerm lf_AUX_Literals_Sdf_Syntax1_5 ( ATerm arg1 ) ;
void register_AUX_Literals_Sdf_Syntax1 ( ) {
lf_AUX_Literals_Sdf_Syntax1_1sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_1sym ) ;
lf_AUX_Literals_Sdf_Syntax1_2sym = ATmakeSymbol ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"uqliteral\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"UQLiteral\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_2sym ) ;
lf_AUX_Literals_Sdf_Syntax1_3sym = ATmakeSymbol ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"UQLiteral\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_3sym ) ;
lf_AUX_Literals_Sdf_Syntax1_4sym = ATmakeSymbol ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_4sym ) ;
lf_AUX_Literals_Sdf_Syntax1_6sym = ATmakeSymbol ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" , 4 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_6sym ) ;
lf_AUX_Literals_Sdf_Syntax1_5sym = ATmakeSymbol ( "listtype(sort(\"Symbol\"),ql(\",\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Literals_Sdf_Syntax1_5sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf_AUX_Literals_Sdf_Syntax1_1 , lf_AUX_Literals_Sdf_Syntax1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"GEN-LexConsFuncs\"),w(\"\"),[ql(\"uqliteral\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"UQLiteral\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals_Sdf_Syntax1_2 , lf_AUX_Literals_Sdf_Syntax1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"UQLiteral\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Literal\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals_Sdf_Syntax1_3 , lf_AUX_Literals_Sdf_Syntax1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),no-attrs)" ) , lf_AUX_Literals_Sdf_Syntax1_4 , lf_AUX_Literals_Sdf_Syntax1_4sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Symbol\"),ql(\",\"))" ) , lf_AUX_Literals_Sdf_Syntax1_5 , lf_AUX_Literals_Sdf_Syntax1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"Literals-Sdf-Syntax\"),w(\"\"),[sort(\"Literal\"),w(\"\"),ql(\"(\"),w(\"\"),iter-sep(l(\"{\"),w(\"\"),sort(\"Symbol\"),w(\"\"),ql(\",\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\")\"),w(\"\"),ql(\"->\"),w(\"\"),sort(\"Symbol\"),w(\"\"),sort(\"Attributes\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Production\"),w(\"\"),attrs(l(\"{\"),w(\"\"),[l(\"avoid\")],w(\"\"),l(\"}\")))" ) , lf_AUX_Literals_Sdf_Syntax1_6 , lf_AUX_Literals_Sdf_Syntax1_6sym ) ;
}
void resolve_AUX_Literals_Sdf_Syntax1 ( ) {
}
void init_AUX_Literals_Sdf_Syntax1 ( ) {
}
ATerm lf_AUX_Literals_Sdf_Syntax1_5 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_5sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_5sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Syntax1_5sym , arg0 ) ) ;
}
ATerm lf_AUX_Literals_Sdf_Syntax1_6 ( ATerm arg0 , ATerm arg1 , ATerm arg2 , ATerm arg3 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_6sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_6sym , arg0 , arg1 , arg2 , arg3 ) ) ;
CONS_EXIT ( make_nf4 ( lf_AUX_Literals_Sdf_Syntax1_6sym , arg0 , arg1 , arg2 , arg3 ) ) ;
}
ATerm lf_AUX_Literals_Sdf_Syntax1_4 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_4sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_4sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Syntax1_4sym , arg0 ) ) ;
}
ATerm lf_AUX_Literals_Sdf_Syntax1_3 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_3sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_3sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Syntax1_3sym , arg0 ) ) ;
}
ATerm lf_AUX_Literals_Sdf_Syntax1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_2sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Syntax1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Literals_Sdf_Syntax1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Literals_Sdf_Syntax1_1sym , ATmakeAppl ( lf_AUX_Literals_Sdf_Syntax1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Literals_Sdf_Syntax1_1sym , arg0 ) ) ;
}

