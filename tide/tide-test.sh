#!/bin/sh
CLASSPATH=/ufs/olivierp/Research/glt/tide/tide.jar:$CLASSPATH
export CLASSPATH
toolbus -DDEVELOP=1 $@ -TB_PORT 9500 /ufs/olivierp/Research/glt/tide/toolbus/tide.tb
