/*
 * Generated at Fri Mar 28 16:15:51 2003
 */

#include "Graph_dict.h"

AFun afun13;
AFun afun14;
AFun afun15;
AFun afun16;
AFun afun17;
AFun afun18;
AFun afun19;
AFun afun0;
AFun afun1;
AFun afun2;
AFun afun3;
AFun afun4;
AFun afun5;
AFun afun6;
AFun afun7;
AFun afun8;
AFun afun9;
AFun afun20;
AFun afun10;
AFun afun11;
AFun afun12;

ATerm patternPointDefault = NULL;
ATerm patternPolygonMulti = NULL;
ATerm patternPolygonEmpty = NULL;
ATerm patternEdgeDefault = NULL;
ATerm patternEdgeListMulti = NULL;
ATerm patternEdgeListEmpty = NULL;
ATerm patternShapeOctagon = NULL;
ATerm patternShapeHexagon = NULL;
ATerm patternShapeHouse = NULL;
ATerm patternShapeParallelogram = NULL;
ATerm patternShapeTrapezium = NULL;
ATerm patternShapeDiamond = NULL;
ATerm patternShapeBox = NULL;
ATerm patternShapeTriangle = NULL;
ATerm patternShapeEgg = NULL;
ATerm patternShapeCircle = NULL;
ATerm patternShapeEllipse = NULL;
ATerm patternShapePlaintext = NULL;
ATerm patternAttributeCurvePoints = NULL;
ATerm patternAttributeSize = NULL;
ATerm patternAttributeLocation = NULL;
ATerm patternAttributeShape = NULL;
ATerm patternAttributeLabel = NULL;
ATerm patternAttributeListMulti = NULL;
ATerm patternAttributeListEmpty = NULL;
ATerm patternNodeIdDefault = NULL;
ATerm patternNodeDefault = NULL;
ATerm patternNodeListMulti = NULL;
ATerm patternNodeListEmpty = NULL;
ATerm patternGraphDefault = NULL;

/*
 * afun13 = diamond
 * afun14 = trapezium
 * afun15 = parallelogram
 * afun16 = house
 * afun17 = hexagon
 * afun18 = octagon
 * afun19 = edge(x,x,x)
 * afun0 = graph(x,x)
 * afun1 = node(x,x)
 * afun2 = label(x)
 * afun3 = shape(x)
 * afun4 = location(x,x)
 * afun5 = size(x,x)
 * afun6 = curve-points(x)
 * afun7 = plaintext
 * afun8 = ellipse
 * afun9 = circle
 * afun20 = point(x,x)
 * afun10 = egg
 * afun11 = triangle
 * afun12 = box
 *
 * patternPointDefault = point(<int>,<int>)
 * patternPolygonMulti = [<term>,<list>]
 * patternPolygonEmpty = []
 * patternEdgeDefault = edge(<term>,<term>,<term>)
 * patternEdgeListMulti = [<term>,<list>]
 * patternEdgeListEmpty = []
 * patternShapeOctagon = octagon
 * patternShapeHexagon = hexagon
 * patternShapeHouse = house
 * patternShapeParallelogram = parallelogram
 * patternShapeTrapezium = trapezium
 * patternShapeDiamond = diamond
 * patternShapeBox = box
 * patternShapeTriangle = triangle
 * patternShapeEgg = egg
 * patternShapeCircle = circle
 * patternShapeEllipse = ellipse
 * patternShapePlaintext = plaintext
 * patternAttributeCurvePoints = curve-points(<term>)
 * patternAttributeSize = size(<int>,<int>)
 * patternAttributeLocation = location(<int>,<int>)
 * patternAttributeShape = shape(<term>)
 * patternAttributeLabel = label(<str>)
 * patternAttributeListMulti = [<term>,<list>]
 * patternAttributeListEmpty = []
 * patternNodeIdDefault = <str>
 * patternNodeDefault = node(<term>,<term>)
 * patternNodeListMulti = [<term>,<list>]
 * patternNodeListEmpty = []
 * patternGraphDefault = graph(<term>,<term>)
 *
 */

static ATermList _Graph_dict = NULL;

#define _Graph_dict_LEN 478

static char _Graph_dict_baf[_Graph_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x1D,0x5F,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,0x04,
0x05,0x06,0x03,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x37,0x18,0x01,0x02,0x00,
0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,
0x18,0x19,0x1A,0x1B,0x1C,0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,
0x6E,0x74,0x00,0x00,0x01,0x03,0x73,0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,
0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x07,0x64,0x69,0x61,
0x6D,0x6F,0x6E,0x64,0x00,0x00,0x01,0x09,0x74,0x72,0x61,0x70,0x65,0x7A,0x69,0x75,
0x6D,0x00,0x00,0x01,0x0D,0x70,0x61,0x72,0x61,0x6C,0x6C,0x65,0x6C,0x6F,0x67,0x72,
0x61,0x6D,0x00,0x00,0x01,0x05,0x68,0x6F,0x75,0x73,0x65,0x00,0x00,0x01,0x07,0x68,
0x65,0x78,0x61,0x67,0x6F,0x6E,0x00,0x00,0x01,0x07,0x6F,0x63,0x74,0x61,0x67,0x6F,
0x6E,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x65,0x64,0x67,0x65,0x03,0x00,
0x02,0x02,0x00,0x0D,0x02,0x00,0x0D,0x02,0x00,0x0D,0x05,0x67,0x72,0x61,0x70,0x68,
0x02,0x00,0x02,0x02,0x00,0x0D,0x02,0x00,0x0D,0x04,0x6E,0x6F,0x64,0x65,0x02,0x00,
0x02,0x02,0x00,0x0D,0x02,0x00,0x0D,0x05,0x6C,0x61,0x62,0x65,0x6C,0x01,0x00,0x02,
0x02,0x00,0x0D,0x05,0x73,0x68,0x61,0x70,0x65,0x01,0x00,0x02,0x02,0x00,0x0D,0x08,
0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x02,0x00,0x02,0x02,0x00,0x0D,0x02,0x00,
0x0D,0x04,0x73,0x69,0x7A,0x65,0x02,0x00,0x02,0x02,0x00,0x0D,0x02,0x00,0x0D,0x0C,
0x63,0x75,0x72,0x76,0x65,0x2D,0x70,0x6F,0x69,0x6E,0x74,0x73,0x01,0x00,0x02,0x02,
0x00,0x0D,0x09,0x70,0x6C,0x61,0x69,0x6E,0x74,0x65,0x78,0x74,0x00,0x00,0x01,0x07,
0x65,0x6C,0x6C,0x69,0x70,0x73,0x65,0x00,0x00,0x01,0x06,0x63,0x69,0x72,0x63,0x6C,
0x65,0x00,0x00,0x01,0x05,0x70,0x6F,0x69,0x6E,0x74,0x02,0x00,0x02,0x02,0x00,0x0D,
0x02,0x00,0x0D,0x03,0x65,0x67,0x67,0x00,0x00,0x01,0x08,0x74,0x72,0x69,0x61,0x6E,
0x67,0x6C,0x65,0x00,0x00,0x01,0x03,0x62,0x6F,0x78,0x00,0x00,0x01,0x01,0x01,0x58,
0x32,0x20,0x95,0x08,0x98,0x05,0xC3,0xC1,0x0E,0x48,0xA8,0xB1,0x45,0x06,0x68,0xA3,
0x43,0x10,0xA5,0x88,0x91,0xC5,0x02,0x78,0xA3,0x80,0x90,0xC4,0x4A,0x12,0x11,0x93,
0x02,0x94,0x21,0x52,0x06,0x80,0x76,0x2B,0x01,0x65,0x81,0x80,0x66,0x06,0x91,0x11,
0x52,0x14,0x84,0xE0,0x47,0x28,0x84,0x20,0x18,0x1A,0x3D,0x80,0xE8,0x8B,0x78,0x1A,
0xC3,0x5A,0x0A,0x90,0x97,0x00,0xBD,0x39,0x68,0xCD,0x4A,0x72,0x12,0x93,0x18,0x88,
0x86,0x21,0x0F,0xA0,0x00,0x05,0xD0,0x00,0x7D,0x68,0x83,0xC6,0x8C,0x0B,0x80,0xD0,
0x74,0x0D,0x91,0x85,0xB5,0x10,0x84,0xC0,0x68,0x1A,0x07,0x4A,0x88,0x4A
};

void init_Graph_dict()
{
  ATermList afuns, terms;

  _Graph_dict = (ATermList)ATreadFromBinaryString(_Graph_dict_baf, _Graph_dict_LEN);

  ATprotect((ATerm *)&_Graph_dict);

  afuns = (ATermList)ATelementAt(_Graph_dict, 0);

  afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt(_Graph_dict, 1);

  patternPointDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternPolygonMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternPolygonEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternEdgeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeOctagon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeHexagon = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeHouse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeParallelogram = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeTrapezium = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeDiamond = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeBox = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeTriangle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeEgg = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeCircle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapeEllipse = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternShapePlaintext = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeCurvePoints = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeSize = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeShape = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeLabel = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternAttributeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeIdDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeListMulti = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternNodeListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  patternGraphDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
