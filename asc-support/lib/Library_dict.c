#include "Library_dict.h"

AFun CO_afun17;
AFun CO_afun3;
AFun CO_afun78;
AFun CO_afun48;
AFun CO_afun34;
AFun CO_afun59;
AFun CO_afun37;
AFun CO_afun26;
AFun CO_afun19;
AFun CO_afun63;
AFun CO_afun2;
AFun CO_afun47;
AFun CO_afun80;
AFun CO_afun42;
AFun CO_afun25;
AFun CO_afun15;
AFun CO_afun75;
AFun CO_afun18;
AFun CO_afun86;
AFun CO_afun31;
AFun CO_afun69;
AFun CO_afun43;
AFun CO_afun54;
AFun CO_afun0;
AFun CO_afun84;
AFun CO_afun38;
AFun CO_afun33;
AFun CO_afun16;
AFun CO_afun77;
AFun CO_afun10;
AFun CO_afun13;
AFun CO_afun52;
AFun CO_afun40;
AFun CO_afun14;
AFun CO_afun74;
AFun CO_afun82;
AFun CO_afun30;
AFun CO_afun60;
AFun CO_afun7;
AFun CO_afun58;
AFun CO_afun79;
AFun CO_afun57;
AFun CO_afun35;
AFun CO_afun81;
AFun CO_afun29;
AFun CO_afun6;
AFun CO_afun1;
AFun CO_afun39;
AFun CO_afun83;
AFun CO_afun61;
AFun CO_afun72;
AFun CO_afun50;
AFun CO_afun22;
AFun CO_afun44;
AFun CO_afun66;
AFun CO_afun73;
AFun CO_afun9;
AFun CO_afun51;
AFun CO_afun56;
AFun CO_afun41;
AFun CO_afun85;
AFun CO_afun12;
AFun CO_afun53;
AFun CO_afun64;
AFun CO_afun70;
AFun CO_afun20;
AFun CO_afun28;
AFun CO_afun8;
AFun CO_afun21;
AFun CO_afun32;
AFun CO_afun65;
AFun CO_afun76;
AFun CO_afun11;
AFun CO_afun62;
AFun CO_afun27;
AFun CO_afun5;
AFun CO_afun55;
AFun CO_afun4;
AFun CO_afun67;
AFun CO_afun23;
AFun CO_afun49;
AFun CO_afun45;
AFun CO_afun71;
AFun CO_afun68;
AFun CO_afun36;
AFun CO_afun24;
AFun CO_afun46;


/*
 * CO_afun17 = "StrCon"
 * CO_afun3 = opt(x)
 * CO_afun78 = "|"
 * CO_afun48 = "subject"
 * CO_afun34 = "decimal"
 * CO_afun59 = "fatal"
 * CO_afun37 = "default"
 * CO_afun26 = "newline"
 * CO_afun19 = "BoolCon"
 * CO_afun63 = "area"
 * CO_afun2 = cf(x)
 * CO_afun47 = "("
 * CO_afun80 = assoc(x)
 * CO_afun42 = "Byte"
 * CO_afun25 = "StrChar"
 * CO_afun15 = parsetree(x,x)
 * CO_afun75 = "Parsetree"
 * CO_afun18 = "<START>"
 * CO_afun86 = bracket
 * CO_afun31 = "\\\\"
 * CO_afun69 = "failure"
 * CO_afun43 = "byte"
 * CO_afun54 = iter-star-sep(x,x)
 * CO_afun0 = appl(x,x)
 * CO_afun84 = "not"
 * CO_afun38 = "true"
 * CO_afun33 = "\\"
 * CO_afun16 = sort(x)
 * CO_afun77 = "constant"
 * CO_afun10 = range(x,x)
 * CO_afun13 = cons(x)
 * CO_afun52 = "localized"
 * CO_afun40 = "NatCon"
 * CO_afun14 = "whitespace"
 * CO_afun74 = parameterized-sort(x,x)
 * CO_afun82 = "&"
 * CO_afun30 = "quote"
 * CO_afun60 = "summary"
 * CO_afun7 = iter(x)
 * CO_afun58 = "error"
 * CO_afun79 = "or"
 * CO_afun57 = "warning"
 * CO_afun35 = "normal"
 * CO_afun81 = left
 * CO_afun29 = "\\\""
 * CO_afun6 = lex(x)
 * CO_afun1 = prod(x,x,x)
 * CO_afun39 = "false"
 * CO_afun83 = "and"
 * CO_afun61 = "file"
 * CO_afun72 = "write-error"
 * CO_afun50 = "Location"
 * CO_afun22 = "Boolean"
 * CO_afun44 = "Bytes"
 * CO_afun66 = "Read"
 * CO_afun73 = "parse-tree"
 * CO_afun9 = char-class(x)
 * CO_afun51 = ","
 * CO_afun56 = "info"
 * CO_afun41 = "digits"
 * CO_afun85 = "bracket"
 * CO_afun12 = term(x)
 * CO_afun53 = "]"
 * CO_afun64 = "area-in-file"
 * CO_afun70 = "written"
 * CO_afun20 = "Summary"
 * CO_afun28 = "tab"
 * CO_afun8 = list(x)
 * CO_afun21 = "Error"
 * CO_afun32 = "backslash"
 * CO_afun65 = "read"
 * CO_afun76 = "parse-error"
 * CO_afun11 = attrs(x)
 * CO_afun62 = "Area"
 * CO_afun27 = "\\t"
 * CO_afun5 = no-attrs
 * CO_afun55 = "["
 * CO_afun4 = layout
 * CO_afun67 = "success"
 * CO_afun23 = lit(x)
 * CO_afun49 = "Subject"
 * CO_afun45 = "bytes"
 * CO_afun71 = "Write"
 * CO_afun68 = "read-error"
 * CO_afun36 = iter-star(x)
 * CO_afun24 = "\\n"
 * CO_afun46 = ")"
 *
 *
 */

static ATerm _Library_dict = NULL;

#define _Library_dict_LEN 1184

static unsigned char _Library_dict_baf[_Library_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x5A,0x80,0xB2,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,
0x59,0x59,0x00,0x01,0x02,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,
0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,
0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,
0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,
0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,
0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x02,0x00,0x01,0x02,0x5B,
0x5D,0x00,0x00,0x01,0x06,0x53,0x74,0x72,0x43,0x6F,0x6E,0x00,0x01,0x01,0x01,0x78,
0x00,0x00,0x01,0x03,0x6F,0x70,0x74,0x01,0x00,0x01,0x01,0x03,0x01,0x7C,0x00,0x01,
0x01,0x07,0x73,0x75,0x62,0x6A,0x65,0x63,0x74,0x00,0x01,0x01,0x07,0x64,0x65,0x63,
0x69,0x6D,0x61,0x6C,0x00,0x01,0x01,0x05,0x66,0x61,0x74,0x61,0x6C,0x00,0x01,0x01,
0x07,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,0x00,0x01,0x01,0x07,0x6E,0x65,0x77,0x6C,
0x69,0x6E,0x65,0x00,0x01,0x01,0x07,0x42,0x6F,0x6F,0x6C,0x43,0x6F,0x6E,0x00,0x01,
0x01,0x04,0x61,0x72,0x65,0x61,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x01,0x01,
0x03,0x01,0x28,0x00,0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x01,0x00,0x01,0x01,
0x03,0x04,0x42,0x79,0x74,0x65,0x00,0x01,0x01,0x07,0x53,0x74,0x72,0x43,0x68,0x61,
0x72,0x00,0x01,0x01,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,0x02,0x00,
0x01,0x01,0x03,0x01,0x03,0x09,0x50,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,0x00,
0x01,0x01,0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x07,0x62,0x72,
0x61,0x63,0x6B,0x65,0x74,0x00,0x00,0x01,0x02,0x5C,0x5C,0x00,0x01,0x01,0x07,0x66,
0x61,0x69,0x6C,0x75,0x72,0x65,0x00,0x01,0x01,0x04,0x62,0x79,0x74,0x65,0x00,0x01,
0x01,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,0x02,
0x00,0x01,0x01,0x03,0x01,0x03,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x01,0x01,0x03,
0x01,0x03,0x03,0x6E,0x6F,0x74,0x00,0x01,0x01,0x04,0x74,0x72,0x75,0x65,0x00,0x01,
0x01,0x01,0x5C,0x00,0x01,0x01,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x01,0x01,0x03,
0x08,0x63,0x6F,0x6E,0x73,0x74,0x61,0x6E,0x74,0x00,0x01,0x01,0x05,0x72,0x61,0x6E,
0x67,0x65,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x04,0x63,0x6F,0x6E,0x73,0x01,0x00,
0x01,0x01,0x03,0x09,0x6C,0x6F,0x63,0x61,0x6C,0x69,0x7A,0x65,0x64,0x00,0x01,0x01,
0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,0x01,0x0A,0x77,0x68,0x69,0x74,0x65,
0x73,0x70,0x61,0x63,0x65,0x00,0x01,0x01,0x12,0x70,0x61,0x72,0x61,0x6D,0x65,0x74,
0x65,0x72,0x69,0x7A,0x65,0x64,0x2D,0x73,0x6F,0x72,0x74,0x02,0x00,0x01,0x01,0x03,
0x01,0x03,0x01,0x26,0x00,0x01,0x01,0x05,0x71,0x75,0x6F,0x74,0x65,0x00,0x01,0x01,
0x07,0x73,0x75,0x6D,0x6D,0x61,0x72,0x79,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,
0x01,0x00,0x01,0x01,0x03,0x05,0x65,0x72,0x72,0x6F,0x72,0x00,0x01,0x01,0x02,0x6F,
0x72,0x00,0x01,0x01,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x00,0x01,0x01,0x06,
0x6E,0x6F,0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x04,0x6C,0x65,0x66,0x74,0x00,0x00,
0x01,0x02,0x5C,0x22,0x00,0x01,0x01,0x03,0x6C,0x65,0x78,0x01,0x00,0x01,0x01,0x03,
0x04,0x70,0x72,0x6F,0x64,0x03,0x00,0x01,0x01,0x03,0x01,0x03,0x01,0x03,0x05,0x66,
0x61,0x6C,0x73,0x65,0x00,0x01,0x01,0x03,0x61,0x6E,0x64,0x00,0x01,0x01,0x04,0x66,
0x69,0x6C,0x65,0x00,0x01,0x01,0x0B,0x77,0x72,0x69,0x74,0x65,0x2D,0x65,0x72,0x72,
0x6F,0x72,0x00,0x01,0x01,0x08,0x4C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,
0x01,0x07,0x42,0x6F,0x6F,0x6C,0x65,0x61,0x6E,0x00,0x01,0x01,0x05,0x42,0x79,0x74,
0x65,0x73,0x00,0x01,0x01,0x04,0x52,0x65,0x61,0x64,0x00,0x01,0x01,0x0A,0x70,0x61,
0x72,0x73,0x65,0x2D,0x74,0x72,0x65,0x65,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,
0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,0x01,0x01,0x03,0x01,0x2C,0x00,0x01,0x01,
0x04,0x69,0x6E,0x66,0x6F,0x00,0x01,0x01,0x06,0x64,0x69,0x67,0x69,0x74,0x73,0x00,
0x01,0x01,0x07,0x62,0x72,0x61,0x63,0x6B,0x65,0x74,0x00,0x01,0x01,0x04,0x74,0x65,
0x72,0x6D,0x01,0x00,0x01,0x01,0x03,0x01,0x5D,0x00,0x01,0x01,0x0C,0x61,0x72,0x65,
0x61,0x2D,0x69,0x6E,0x2D,0x66,0x69,0x6C,0x65,0x00,0x01,0x01,0x07,0x77,0x72,0x69,
0x74,0x74,0x65,0x6E,0x00,0x01,0x01,0x07,0x53,0x75,0x6D,0x6D,0x61,0x72,0x79,0x00,
0x01,0x01,0x03,0x74,0x61,0x62,0x00,0x01,0x01,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,
0x01,0x01,0x03,0x05,0x45,0x72,0x72,0x6F,0x72,0x00,0x01,0x01,0x09,0x62,0x61,0x63,
0x6B,0x73,0x6C,0x61,0x73,0x68,0x00,0x01,0x01,0x04,0x72,0x65,0x61,0x64,0x00,0x01,
0x01,0x0B,0x70,0x61,0x72,0x73,0x65,0x2D,0x65,0x72,0x72,0x6F,0x72,0x00,0x01,0x01,
0x05,0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x01,0x01,0x03,0x04,0x41,0x72,0x65,0x61,
0x00,0x01,0x01,0x02,0x5C,0x74,0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,
0x72,0x73,0x00,0x00,0x01,0x01,0x5B,0x00,0x01,0x01,0x06,0x6C,0x61,0x79,0x6F,0x75,
0x74,0x00,0x00,0x01,0x07,0x73,0x75,0x63,0x63,0x65,0x73,0x73,0x00,0x01,0x01,0x03,
0x6C,0x69,0x74,0x01,0x00,0x01,0x01,0x03,0x07,0x53,0x75,0x62,0x6A,0x65,0x63,0x74,
0x00,0x01,0x01,0x05,0x62,0x79,0x74,0x65,0x73,0x00,0x01,0x01,0x05,0x57,0x72,0x69,
0x74,0x65,0x00,0x01,0x01,0x0A,0x72,0x65,0x61,0x64,0x2D,0x65,0x72,0x72,0x6F,0x72,
0x00,0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x01,
0x01,0x03,0x02,0x5C,0x6E,0x00,0x01,0x01,0x01,0x29,0x00,0x01,0x01,0x00,0x00,0xD5,
0x01,0x57,0x00,0x54,0x81,0x96,0x80,0x95,0x81,0x17,0x80,0x14,0x41,0xE6,0x40,0xE5,
0x41,0x67,0x40,0x64,0xC1,0xA6,0xC0,0xA5,0xC1,0x27,0xC0,0x24,0x21,0xC6,0x20,0xC5,
0x21,0x47,0x20,0x44,0xA1,0x86,0xA0,0x85,0xA1,0x07,0xA0,0x04,0x61,0xFA,0x60,0xF9,
0x61,0x7B,0x60,0x78,0xE1,0xBA,0xE0,0xB9,0xE1,0x3B,0xE0,0x38,0x11,0xDA,0x10,0xD9,
0x11,0x5B,0x10,0x58,0x91,0x9A,0x90,0x99,0x91,0x1B,0x90,0x18,0x51,0xEA,0x50,0xE9,
0x51,0x6B,0x50,0x68,0xD1,0xAA,0xD0,0xA9,0xD1,0x2B,0xD0,0x28,0x31,0xCA,0x30,0xC9,
0x31,0x4B,0x30,0x48,0xB1,0x8A,0xB0,0x89,0xB1,0x0B,0xB0,0x08,0x71,0xF2,0x70,0xF1,
0x71,0x73,0x70,0x70,0xF1,0xB2,0xF0,0xB1,0xF1,0x33,0xF0,0x30,0x09,0xD2,0x08,0xD1,
0x09,0x53,0x08,0x50,0x89,0x92,0x88,0x91,0x89,0x13,0x88,0x10,0x49,0xE2,0x48,0xE1,
0x49,0x63,0x48,0x60,0xC9,0xA2,0xC8,0xA1,0xC9,0x23,0xC8,0x20,0x29,0xC2,0x28,0xC1,
0x29,0x43,0x28,0x40,0xA9,0x82,0xA8,0x81,0xA9,0x03,0xA8,0x00,0x6C,0x75,0x81,0x00
};

void init_Library_dict()
{
  ATermList afuns, terms;

  _Library_dict = ATreadFromBinaryString(_Library_dict_baf, _Library_dict_LEN);

  ATprotect(&_Library_dict);

  afuns = (ATermList)ATelementAt((ATermList)_Library_dict, 0);

  CO_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun17);
  afuns = ATgetNext(afuns);
  CO_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun3);
  afuns = ATgetNext(afuns);
  CO_afun78 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun78);
  afuns = ATgetNext(afuns);
  CO_afun48 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun48);
  afuns = ATgetNext(afuns);
  CO_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun34);
  afuns = ATgetNext(afuns);
  CO_afun59 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun59);
  afuns = ATgetNext(afuns);
  CO_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun37);
  afuns = ATgetNext(afuns);
  CO_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun26);
  afuns = ATgetNext(afuns);
  CO_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun19);
  afuns = ATgetNext(afuns);
  CO_afun63 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun63);
  afuns = ATgetNext(afuns);
  CO_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun2);
  afuns = ATgetNext(afuns);
  CO_afun47 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun47);
  afuns = ATgetNext(afuns);
  CO_afun80 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun80);
  afuns = ATgetNext(afuns);
  CO_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun42);
  afuns = ATgetNext(afuns);
  CO_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun25);
  afuns = ATgetNext(afuns);
  CO_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun15);
  afuns = ATgetNext(afuns);
  CO_afun75 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun75);
  afuns = ATgetNext(afuns);
  CO_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun18);
  afuns = ATgetNext(afuns);
  CO_afun86 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun86);
  afuns = ATgetNext(afuns);
  CO_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun31);
  afuns = ATgetNext(afuns);
  CO_afun69 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun69);
  afuns = ATgetNext(afuns);
  CO_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun43);
  afuns = ATgetNext(afuns);
  CO_afun54 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun54);
  afuns = ATgetNext(afuns);
  CO_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun0);
  afuns = ATgetNext(afuns);
  CO_afun84 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun84);
  afuns = ATgetNext(afuns);
  CO_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun38);
  afuns = ATgetNext(afuns);
  CO_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun33);
  afuns = ATgetNext(afuns);
  CO_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun16);
  afuns = ATgetNext(afuns);
  CO_afun77 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun77);
  afuns = ATgetNext(afuns);
  CO_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun10);
  afuns = ATgetNext(afuns);
  CO_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun13);
  afuns = ATgetNext(afuns);
  CO_afun52 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun52);
  afuns = ATgetNext(afuns);
  CO_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun40);
  afuns = ATgetNext(afuns);
  CO_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun14);
  afuns = ATgetNext(afuns);
  CO_afun74 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun74);
  afuns = ATgetNext(afuns);
  CO_afun82 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun82);
  afuns = ATgetNext(afuns);
  CO_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun30);
  afuns = ATgetNext(afuns);
  CO_afun60 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun60);
  afuns = ATgetNext(afuns);
  CO_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun7);
  afuns = ATgetNext(afuns);
  CO_afun58 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun58);
  afuns = ATgetNext(afuns);
  CO_afun79 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun79);
  afuns = ATgetNext(afuns);
  CO_afun57 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun57);
  afuns = ATgetNext(afuns);
  CO_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun35);
  afuns = ATgetNext(afuns);
  CO_afun81 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun81);
  afuns = ATgetNext(afuns);
  CO_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun29);
  afuns = ATgetNext(afuns);
  CO_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun6);
  afuns = ATgetNext(afuns);
  CO_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun1);
  afuns = ATgetNext(afuns);
  CO_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun39);
  afuns = ATgetNext(afuns);
  CO_afun83 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun83);
  afuns = ATgetNext(afuns);
  CO_afun61 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun61);
  afuns = ATgetNext(afuns);
  CO_afun72 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun72);
  afuns = ATgetNext(afuns);
  CO_afun50 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun50);
  afuns = ATgetNext(afuns);
  CO_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun22);
  afuns = ATgetNext(afuns);
  CO_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun44);
  afuns = ATgetNext(afuns);
  CO_afun66 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun66);
  afuns = ATgetNext(afuns);
  CO_afun73 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun73);
  afuns = ATgetNext(afuns);
  CO_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun9);
  afuns = ATgetNext(afuns);
  CO_afun51 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun51);
  afuns = ATgetNext(afuns);
  CO_afun56 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun56);
  afuns = ATgetNext(afuns);
  CO_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun41);
  afuns = ATgetNext(afuns);
  CO_afun85 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun85);
  afuns = ATgetNext(afuns);
  CO_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun12);
  afuns = ATgetNext(afuns);
  CO_afun53 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun53);
  afuns = ATgetNext(afuns);
  CO_afun64 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun64);
  afuns = ATgetNext(afuns);
  CO_afun70 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun70);
  afuns = ATgetNext(afuns);
  CO_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun20);
  afuns = ATgetNext(afuns);
  CO_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun28);
  afuns = ATgetNext(afuns);
  CO_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun8);
  afuns = ATgetNext(afuns);
  CO_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun21);
  afuns = ATgetNext(afuns);
  CO_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun32);
  afuns = ATgetNext(afuns);
  CO_afun65 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun65);
  afuns = ATgetNext(afuns);
  CO_afun76 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun76);
  afuns = ATgetNext(afuns);
  CO_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun11);
  afuns = ATgetNext(afuns);
  CO_afun62 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun62);
  afuns = ATgetNext(afuns);
  CO_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun27);
  afuns = ATgetNext(afuns);
  CO_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun5);
  afuns = ATgetNext(afuns);
  CO_afun55 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun55);
  afuns = ATgetNext(afuns);
  CO_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun4);
  afuns = ATgetNext(afuns);
  CO_afun67 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun67);
  afuns = ATgetNext(afuns);
  CO_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun23);
  afuns = ATgetNext(afuns);
  CO_afun49 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun49);
  afuns = ATgetNext(afuns);
  CO_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun45);
  afuns = ATgetNext(afuns);
  CO_afun71 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun71);
  afuns = ATgetNext(afuns);
  CO_afun68 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun68);
  afuns = ATgetNext(afuns);
  CO_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun36);
  afuns = ATgetNext(afuns);
  CO_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun24);
  afuns = ATgetNext(afuns);
  CO_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(CO_afun46);
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_Library_dict, 1);

}
