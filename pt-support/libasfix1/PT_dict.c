/*
 * Generated at Tue Feb 13 14:39:39 2001
 */

#include "PT_dict.h"


ATerm PT_patternArgsDefault = NULL;
ATerm PT_patternLayoutDefault = NULL;
ATerm PT_patternSeparatorDefault = NULL;
ATerm PT_patternLexicalDefault = NULL;
ATerm PT_patternQLiteralDefault = NULL;
ATerm PT_patternLiteralDefault = NULL;
ATerm PT_patternSymbolIterPlusSep = NULL;
ATerm PT_patternSymbolIterStarSep = NULL;
ATerm PT_patternSymbolIterPlus = NULL;
ATerm PT_patternSymbolIterStar = NULL;
ATerm PT_patternProductionDefault = NULL;
ATerm PT_patternVarDefault = NULL;
ATerm PT_patternTreeSeparator = NULL;
ATerm PT_patternTreeQuotedLiteral = NULL;
ATerm PT_patternTreeUnquotedLiteral = NULL;
ATerm PT_patternTreeLexical = NULL;
ATerm PT_patternTreeList = NULL;
ATerm PT_patternTreeAppl = NULL;
ATerm PT_patternTreeVar = NULL;
ATerm PT_patternTreeLayout = NULL;
ATerm PT_patternModuleNameDefault = NULL;
ATerm PT_patternParseTreeTree = NULL;

/*
 *
 * PT_patternArgsDefault = [<term>,<list>]
 * PT_patternLayoutDefault = w(<term>)
 * PT_patternSeparatorDefault = sep(<term>)
 * PT_patternLexicalDefault = lex(<term>,<term>)
 * PT_patternQLiteralDefault = ql(<term>)
 * PT_patternLiteralDefault = l(<term>)
 * PT_patternSymbolIterPlusSep = iter-sep(l("{"),w(""),<term>,w(""),<term>,w(""),l("}"),w(""),l("+"))
 * PT_patternSymbolIterStarSep = iter-sep(l("{"),w(""),<term>,w(""),<term>,w(""),l("}"),w(""),l("*"))
 * PT_patternSymbolIterPlus = iter(<term>,w(""),l("+"))
 * PT_patternSymbolIterStar = iter(<term>,w(""),l("*"))
 * PT_patternProductionDefault = prod(id(<term>),w(""),<term>,w(""),l("->"),w(""),<term>,w(""),<term>)
 * PT_patternVarDefault = var(<term>,<term>)
 * PT_patternTreeSeparator = <term>
 * PT_patternTreeQuotedLiteral = <term>
 * PT_patternTreeUnquotedLiteral = <term>
 * PT_patternTreeLexical = <term>
 * PT_patternTreeList = list(<term>,w(""),<term>)
 * PT_patternTreeAppl = appl(<term>,w(""),<term>)
 * PT_patternTreeVar = <term>
 * PT_patternTreeLayout = <term>
 * PT_patternModuleNameDefault = id(<term>)
 * PT_patternParseTreeTree = term(l("term"),w(""),l("X"),w(""),l("X"),<term>,<term>,<term>,no-abbreviations)
 *
 */

static ATermList _PT_dict = NULL;

#define _PT_dict_LEN 389

static char _PT_dict_baf[_PT_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x1B,0x3F,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x02,0x02,0x03,
0x04,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x1A,0x10,0x02,0x01,0x05,0x06,0x07,
0x08,0x09,0x0E,0x10,0x13,0x14,0x15,0x16,0x11,0x1A,0x00,0x02,0x01,0x02,0x02,0x5B,
0x5D,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,0x74,0x65,0x72,
0x6D,0x00,0x00,0x01,0x01,0x77,0x01,0x00,0x02,0x02,0x0B,0x00,0x03,0x73,0x65,0x70,
0x01,0x00,0x01,0x01,0x00,0x03,0x6C,0x65,0x78,0x02,0x00,0x01,0x01,0x00,0x01,0x00,
0x02,0x71,0x6C,0x01,0x00,0x01,0x01,0x00,0x01,0x6C,0x01,0x00,0x08,0x08,0x18,0x17,
0x12,0x0F,0x0D,0x0C,0x0A,0x00,0x01,0x7B,0x00,0x01,0x01,0x00,0x00,0x01,0x01,0x01,
0x7D,0x00,0x01,0x01,0x01,0x2B,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,
0x65,0x70,0x09,0x00,0x02,0x01,0x09,0x01,0x05,0x01,0x00,0x01,0x05,0x01,0x00,0x01,
0x05,0x01,0x09,0x01,0x05,0x01,0x09,0x01,0x2A,0x00,0x01,0x01,0x04,0x69,0x74,0x65,
0x72,0x03,0x00,0x02,0x01,0x00,0x01,0x05,0x01,0x09,0x02,0x69,0x64,0x01,0x00,0x01,
0x01,0x00,0x02,0x2D,0x3E,0x00,0x01,0x01,0x04,0x70,0x72,0x6F,0x64,0x09,0x00,0x01,
0x01,0x11,0x01,0x05,0x01,0x00,0x01,0x05,0x01,0x09,0x01,0x05,0x01,0x00,0x01,0x05,
0x01,0x00,0x03,0x76,0x61,0x72,0x02,0x00,0x01,0x01,0x00,0x01,0x00,0x04,0x6C,0x69,
0x73,0x74,0x03,0x00,0x01,0x01,0x00,0x01,0x05,0x01,0x00,0x04,0x61,0x70,0x70,0x6C,
0x03,0x00,0x01,0x01,0x00,0x01,0x05,0x01,0x00,0x04,0x74,0x65,0x72,0x6D,0x00,0x01,
0x01,0x01,0x58,0x00,0x01,0x01,0x10,0x6E,0x6F,0x2D,0x61,0x62,0x62,0x72,0x65,0x76,
0x69,0x61,0x74,0x69,0x6F,0x6E,0x73,0x00,0x00,0x01,0x04,0x74,0x65,0x72,0x6D,0x09,
0x00,0x01,0x01,0x09,0x01,0x05,0x01,0x09,0x01,0x05,0x01,0x09,0x01,0x00,0x01,0x00,
0x01,0x00,0x01,0x19,0x01,0x00,0x38,0x76,0x10,0xF1,0x00,0xF4,0x43,0x50,0x41,0x5C,
0x01,0x48,0x06,0x68,0x09,0x60,0x70,0x47,0x84,0x34,0x11,0x25,0x58,0x40,0x79,0x44,
0x44,0x91,0x61,0xE1,0x05,0x83,0x85,0x11,0x16,0x91,0x15,0x24,0x40,0x65,0x01,0xAF,
0x02,0xBC,0x12,0xF0,0x0B,0xC1,0xCD,0x10,0x30,0xC4,0x14,0xF0,0x13,0xC1,0x8B,0x08,
0x73,0x45,0xC1,0x70,0x14
};

void init_PT_dict()
{
  ATermList afuns, terms;

  _PT_dict = (ATermList)ATreadFromBinaryString(_PT_dict_baf, _PT_dict_LEN);

  ATprotect((ATerm *)&_PT_dict);

  afuns = (ATermList)ATelementAt(_PT_dict, 0);


  terms = (ATermList)ATelementAt(_PT_dict, 1);

  PT_patternArgsDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLayoutDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSeparatorDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLexicalDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternQLiteralDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternLiteralDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlusSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStarSep = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterPlus = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternSymbolIterStar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternProductionDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternVarDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeSeparator = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeQuotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeUnquotedLiteral = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLexical = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeList = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeAppl = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeVar = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternTreeLayout = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternModuleNameDefault = ATgetFirst(terms);
  terms = ATgetNext(terms);
  PT_patternParseTreeTree = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
