#include  "support.h"
static Symbol lf_AUX_Dot_Graphs1_1sym ;
static ATerm lf_AUX_Dot_Graphs1_1 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_2sym ;
static ATerm lf_AUX_Dot_Graphs1_2 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_3sym ;
static ATerm lf_AUX_Dot_Graphs1_3 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_4sym ;
static ATerm lf_AUX_Dot_Graphs1_4 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_5sym ;
static ATerm lf_AUX_Dot_Graphs1_5 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_6sym ;
static ATerm lf_AUX_Dot_Graphs1_6 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_8sym ;
static ATerm lf_AUX_Dot_Graphs1_8 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_7sym ;
static ATerm lf_AUX_Dot_Graphs1_7 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_9sym ;
static ATerm lf_AUX_Dot_Graphs1_9 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_10sym ;
static ATerm lf_AUX_Dot_Graphs1_10 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_11sym ;
static ATerm lf_AUX_Dot_Graphs1_11 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_12sym ;
static ATerm lf_AUX_Dot_Graphs1_12 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_13sym ;
static ATerm lf_AUX_Dot_Graphs1_13 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_14sym ;
static ATerm lf_AUX_Dot_Graphs1_14 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_15sym ;
static ATerm lf_AUX_Dot_Graphs1_15 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_16sym ;
static ATerm lf_AUX_Dot_Graphs1_16 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_17sym ;
static ATerm lf_AUX_Dot_Graphs1_17 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_19sym ;
static ATerm lf_AUX_Dot_Graphs1_19 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_18sym ;
static ATerm lf_AUX_Dot_Graphs1_18 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_20sym ;
static ATerm lf_AUX_Dot_Graphs1_20 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_21sym ;
static ATerm lf_AUX_Dot_Graphs1_21 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_22sym ;
static ATerm lf_AUX_Dot_Graphs1_22 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_23sym ;
static ATerm lf_AUX_Dot_Graphs1_23 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_24sym ;
static ATerm lf_AUX_Dot_Graphs1_24 ( ) ;
static Symbol lf_AUX_Dot_Graphs1_25sym ;
static ATerm lf_AUX_Dot_Graphs1_25 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Dot_Graphs1_26sym ;
static ATerm lf_AUX_Dot_Graphs1_26 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Dot_Graphs1_27sym ;
static ATerm lf_AUX_Dot_Graphs1_27 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_28sym ;
static ATerm lf_AUX_Dot_Graphs1_28 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Dot_Graphs1_29sym ;
static ATerm lf_AUX_Dot_Graphs1_29 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_30sym ;
static ATerm lf_AUX_Dot_Graphs1_30 ( ATerm arg1 , ATerm arg2 , ATerm arg3 ) ;
static Symbol lf_AUX_Dot_Graphs1_31sym ;
static ATerm lf_AUX_Dot_Graphs1_31 ( ATerm arg1 , ATerm arg2 ) ;
static Symbol lf_AUX_Dot_Graphs1_32sym ;
static ATerm lf_AUX_Dot_Graphs1_32 ( ATerm arg1 ) ;
static Symbol lf_AUX_Dot_Graphs1_33sym ;
static ATerm lf_AUX_Dot_Graphs1_33 ( ) ;
static Symbol lf_AUX_Dot_Graphs1_34sym ;
static ATerm lf_AUX_Dot_Graphs1_34 ( ) ;
void register_AUX_Dot_Graphs1 ( ) {
lf_AUX_Dot_Graphs1_1sym = ATmakeSymbol ( "listtype(sort(\"CHAR\"))"
 , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_1sym ) ;
lf_AUX_Dot_Graphs1_2sym = ATmakeSymbol ( "prod(id(\"caller\"),w(\"\"),[l(\"id\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_2sym ) ;
lf_AUX_Dot_Graphs1_3sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"graph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_3sym ) ;
lf_AUX_Dot_Graphs1_4sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"digraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_4sym ) ;
lf_AUX_Dot_Graphs1_5sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"strict\"),w(\"\"),ql(\"graph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_5sym ) ;
lf_AUX_Dot_Graphs1_6sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"strict\"),w(\"\"),ql(\"digraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_6sym ) ;
lf_AUX_Dot_Graphs1_8sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Stmt\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_8sym ) ;
lf_AUX_Dot_Graphs1_7sym = ATmakeSymbol ( "listtype(sort(\"Stmt\"),ql(\";\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_7sym ) ;
lf_AUX_Dot_Graphs1_9sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Attr-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_9sym ) ;
lf_AUX_Dot_Graphs1_10sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_10sym ) ;
lf_AUX_Dot_Graphs1_11sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Edge-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_11sym ) ;
lf_AUX_Dot_Graphs1_12sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"SubGraph\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_12sym ) ;
lf_AUX_Dot_Graphs1_13sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_13sym ) ;
lf_AUX_Dot_Graphs1_14sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"graph\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_14sym ) ;
lf_AUX_Dot_Graphs1_15sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"node\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_15sym ) ;
lf_AUX_Dot_Graphs1_16sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"edge\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_16sym ) ;
lf_AUX_Dot_Graphs1_17sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_17sym ) ;
lf_AUX_Dot_Graphs1_19sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[iter(sort(\"Attr\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_19sym ) ;
lf_AUX_Dot_Graphs1_18sym = ATmakeSymbol ( "listtype(sort(\"Attr\"))" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_18sym ) ;
lf_AUX_Dot_Graphs1_20sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Id\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Stmt\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_20sym ) ;
lf_AUX_Dot_Graphs1_21sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_21sym ) ;
lf_AUX_Dot_Graphs1_22sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_22sym ) ;
lf_AUX_Dot_Graphs1_23sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Opt-Attrs\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_23sym ) ;
lf_AUX_Dot_Graphs1_24sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Opt-Attrs\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_24sym ) ;
lf_AUX_Dot_Graphs1_25sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Id\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Edge-Stmt\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_25sym ) ;
lf_AUX_Dot_Graphs1_26sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"SubGraph\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Edge-Stmt\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_26sym ) ;
lf_AUX_Dot_Graphs1_27sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"Node-Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_27sym ) ;
lf_AUX_Dot_Graphs1_28sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),sort(\"EdgeRHS\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_28sym ) ;
lf_AUX_Dot_Graphs1_29sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"SubGraph\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_29sym ) ;
lf_AUX_Dot_Graphs1_30sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),sort(\"EdgeRHS\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" , 3 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_30sym ) ;
lf_AUX_Dot_Graphs1_31sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"subgraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),no-attrs)" , 2 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_31sym ) ;
lf_AUX_Dot_Graphs1_32sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"subgraph\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),no-attrs)" , 1 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_32sym ) ;
lf_AUX_Dot_Graphs1_33sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"->\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeOp\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_33sym ) ;
lf_AUX_Dot_Graphs1_34sym = ATmakeSymbol ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"--\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeOp\"),w(\"\"),no-attrs)" , 0 , ATtrue ) ;
ATprotectSymbol ( lf_AUX_Dot_Graphs1_34sym ) ;
register_prod ( ATparse ( "listtype(sort(\"CHAR\"))" ) , lf_AUX_Dot_Graphs1_1 , lf_AUX_Dot_Graphs1_1sym ) ;
register_prod ( ATparse ( "prod(id(\"caller\"),w(\"\"),[l(\"id\"),w(\"\"),ql(\"(\"),w(\"\"),iter(sort(\"CHAR\"),w(\"\"),l(\"+\")),w(\"\"),ql(\")\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Id\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_2 , lf_AUX_Dot_Graphs1_2sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"graph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_3 , lf_AUX_Dot_Graphs1_3sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"digraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_4 , lf_AUX_Dot_Graphs1_4sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"strict\"),w(\"\"),ql(\"graph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_5 , lf_AUX_Dot_Graphs1_5sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"strict\"),w(\"\"),ql(\"digraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Graph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_6 , lf_AUX_Dot_Graphs1_6sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Stmt\"),ql(\";\"))" ) , lf_AUX_Dot_Graphs1_7 , lf_AUX_Dot_Graphs1_7sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[iter-sep(l(\"{\"),w(\"\"),sort(\"Stmt\"),w(\"\"),ql(\";\"),w(\"\"),l(\"}\"),w(\"\"),l(\"*\")),w(\"\"),ql(\";\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_8 , lf_AUX_Dot_Graphs1_8sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Attr-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_9 , lf_AUX_Dot_Graphs1_9sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_10 , lf_AUX_Dot_Graphs1_10sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Edge-Stmt\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_11 , lf_AUX_Dot_Graphs1_11sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"SubGraph\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_12 , lf_AUX_Dot_Graphs1_12sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_13 , lf_AUX_Dot_Graphs1_13sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"graph\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_14 , lf_AUX_Dot_Graphs1_14sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"node\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_15 , lf_AUX_Dot_Graphs1_15sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[l(\"edge\"),w(\"\"),ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_16 , lf_AUX_Dot_Graphs1_16sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\"=\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_17 , lf_AUX_Dot_Graphs1_17sym ) ;
register_prod ( ATparse ( "listtype(sort(\"Attr\"))" ) , lf_AUX_Dot_Graphs1_18 , lf_AUX_Dot_Graphs1_18sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[iter(sort(\"Attr\"),w(\"\"),l(\"*\"))],w(\"\"),l(\"->\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_19 , lf_AUX_Dot_Graphs1_19sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Id\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_20 , lf_AUX_Dot_Graphs1_20sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_21 , lf_AUX_Dot_Graphs1_21sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Id\"),w(\"\"),ql(\":\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_22 , lf_AUX_Dot_Graphs1_22sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"[\"),w(\"\"),sort(\"Attr-List\"),w(\"\"),ql(\"]\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Opt-Attrs\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_23 , lf_AUX_Dot_Graphs1_23sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[],w(\"\"),l(\"->\"),w(\"\"),sort(\"Opt-Attrs\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_24 , lf_AUX_Dot_Graphs1_24sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"Node-Id\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Edge-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_25 , lf_AUX_Dot_Graphs1_25sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"SubGraph\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),sort(\"Opt-Attrs\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"Edge-Stmt\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_26 , lf_AUX_Dot_Graphs1_26sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"Node-Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_27 , lf_AUX_Dot_Graphs1_27sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"Node-Id\"),w(\"\"),sort(\"EdgeRHS\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_28 , lf_AUX_Dot_Graphs1_28sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"SubGraph\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_29 , lf_AUX_Dot_Graphs1_29sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[sort(\"EdgeOp\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),sort(\"EdgeRHS\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeRHS\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_30 , lf_AUX_Dot_Graphs1_30sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"subgraph\"),w(\"\"),sort(\"Id\"),w(\"\"),ql(\"{\"),w(\"\"),sort(\"Stmt-List\"),w(\"\"),ql(\"}\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_31 , lf_AUX_Dot_Graphs1_31sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"subgraph\"),w(\"\"),sort(\"Id\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"SubGraph\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_32 , lf_AUX_Dot_Graphs1_32sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"->\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeOp\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_33 , lf_AUX_Dot_Graphs1_33sym ) ;
register_prod ( ATparse ( "prod(id(\"Dot-Graphs\"),w(\"\"),[ql(\"--\")],w(\"\"),l(\"->\"),w(\"\"),sort(\"EdgeOp\"),w(\"\"),no-attrs)" ) , lf_AUX_Dot_Graphs1_34 , lf_AUX_Dot_Graphs1_34sym ) ;
}
void resolve_AUX_Dot_Graphs1 ( ) {
}
static ATerm constant0 = NULL ;
static ATerm constant1 = NULL ;
static ATerm constant2 = NULL ;
void init_AUX_Dot_Graphs1 ( ) {
ATprotect ( & constant0 ) ;
ATprotect ( & constant1 ) ;
ATprotect ( & constant2 ) ;
}
ATerm lf_AUX_Dot_Graphs1_34 ( ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_34sym , ATmakeAppl0 ( lf_AUX_Dot_Graphs1_34sym ) ) ;
CONS_EXIT_CONST ( constant0 , make_nf0 ( lf_AUX_Dot_Graphs1_34sym ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_33 ( ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_33sym , ATmakeAppl0 ( lf_AUX_Dot_Graphs1_33sym ) ) ;
CONS_EXIT_CONST ( constant1 , make_nf0 ( lf_AUX_Dot_Graphs1_33sym ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_32 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_32sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_32sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_32sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_31 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_31sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_31sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_31sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_30 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_30sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_30sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Dot_Graphs1_30sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_29 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_29sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_29sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_29sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_28 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_28sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_28sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Dot_Graphs1_28sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_27 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_27sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_27sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_27sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_26 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_26sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_26sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Dot_Graphs1_26sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_25 ( ATerm arg0 , ATerm arg1 , ATerm arg2 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_25sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_25sym , arg0 , arg1 , arg2 ) ) ;
CONS_EXIT ( make_nf3 ( lf_AUX_Dot_Graphs1_25sym , arg0 , arg1 , arg2 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_24 ( ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_24sym , ATmakeAppl0 ( lf_AUX_Dot_Graphs1_24sym ) ) ;
CONS_EXIT_CONST ( constant2 , make_nf0 ( lf_AUX_Dot_Graphs1_24sym ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_23 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_23sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_23sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_23sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_22 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_22sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_22sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_22sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_21 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_21sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_21sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_21sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_20 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_20sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_20sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_20sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_18 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_18sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_18sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_18sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_19 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_19sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_19sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_19sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_17 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_17sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_17sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_17sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_16 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_16sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_16sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_16sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_15 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_15sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_15sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_15sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_14 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_14sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_14sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_14sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_13 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_13sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_13sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_13sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_12 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_12sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_12sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_12sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_11 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_11sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_11sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_11sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_10 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_10sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_10sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_10sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_9 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_9sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_9sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_9sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_7 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_7sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_7sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_7sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_8 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_8sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_8sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_8sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_6 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_6sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_6sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_6sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_5 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_5sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_5sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_5sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_4 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_4sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_4sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_4sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_3 ( ATerm arg0 , ATerm arg1 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_3sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_3sym , arg0 , arg1 ) ) ;
CONS_EXIT ( make_nf2 ( lf_AUX_Dot_Graphs1_3sym , arg0 , arg1 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_2 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_2sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_2sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_2sym , arg0 ) ) ;
}
ATerm lf_AUX_Dot_Graphs1_1 ( ATerm arg0 ) {
CONS_ENTRY ( lf_AUX_Dot_Graphs1_1sym , ATmakeAppl ( lf_AUX_Dot_Graphs1_1sym , arg0 ) ) ;
CONS_EXIT ( make_nf1 ( lf_AUX_Dot_Graphs1_1sym , arg0 ) ) ;
}

