/* $Id$ */

/*{{{  includes */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
 
#include <MEPT-utils.h>
#include "SDFME-utils.h"
#include "PT2SDF.h"


/*}}}  */

static SDF_SymbolList PTSymbolsToSDFSymbolList(PT_Symbols ptSymbols);

/*{{{  static SDF_Attribute PTAttrToSDFAttribute(PT_Attr ptAttr) */

static SDF_Attribute PTAttrToSDFAttribute(PT_Attr ptAttr)
{
  SDF_Attribute result;

  if (PT_isAttrAssoc(ptAttr)) {
    PT_Associativity ptAssoc = PT_getAttrAssoc(ptAttr);
    SDF_Associativity sdfAssoc;

    if (PT_isAssociativityLeft(ptAssoc)) {
      sdfAssoc = SDF_makeAssociativityLeft();
    }
    else if (PT_isAssociativityRight(ptAssoc)) {
      sdfAssoc = SDF_makeAssociativityRight();
    }
    else if (PT_isAssociativityAssoc(ptAssoc)) {
      sdfAssoc = SDF_makeAssociativityAssoc();
    }
    else {
      sdfAssoc = SDF_makeAssociativityNonAssoc();
    }
    result = SDF_makeAttributeAssoc(sdfAssoc);
  }
  else if (PT_isAttrTerm(ptAttr)) {
    ATerm term = PT_getAttrTerm(ptAttr);
    ATabort("Conversion of plain ATerm not yet implemented: %t\n", term);
    result = NULL;
  }
  else if (PT_isAttrId(ptAttr)) {
    char *str = PT_getAttrModuleName(ptAttr);
    SDF_ModuleId sdfModuleId;
    SDF_ModuleName sdfModuleName;

    sdfModuleId = SDF_makeModuleIdWord(SDF_makeCHARLISTString(str));
    sdfModuleName = SDF_makeModuleNameUnparameterized(sdfModuleId);

    result = SDF_makeAttributeId(SDF_makeLayoutEmpty(),
				 SDF_makeLayoutEmpty(),
				 sdfModuleName,
				 SDF_makeLayoutEmpty());
  }
  else if (PT_isAttrBracket(ptAttr)) {
    result = SDF_makeAttributeBracket();
  }
  else if (PT_isAttrReject(ptAttr)) {
    result = SDF_makeAttributeReject();
  }
  else if (PT_isAttrPrefer(ptAttr)) {
    result = SDF_makeAttributePrefer();
  }
  else if (PT_isAttrAvoid(ptAttr)) {
    result = SDF_makeAttributeAvoid();
  }
  else {
    ATabort("Unsupported attribute: %t\n", ptAttr);
    result = NULL;
  }
  return result;
}

/*}}}  */
/*{{{  static SDF_AttributeList PTAttrsToSDFAttributeList(PT_Attrs ptAttrs) */

static SDF_AttributeList PTAttrsToSDFAttributeList(PT_Attrs ptAttrs)
{
  SDF_AttributeList result;
  PT_Attr ptAttr;
  SDF_Attribute sdfAttribute;

  ptAttr = PT_getAttrsHead(ptAttrs);
  sdfAttribute = PTAttrToSDFAttribute(ptAttr);

  if (PT_isAttrsSingle(ptAttrs)) {
    result = SDF_makeAttributeListSingle(sdfAttribute);
  }
  else {
    PT_Attrs ptAttrsTail = PT_getAttrsTail(ptAttrs);
    result = PTAttrsToSDFAttributeList(ptAttrsTail);

    result = SDF_makeAttributeListMany(sdfAttribute,
				       SDF_makeLayoutEmpty(),
				       ",", /* FIXME in ApiGen!! */
				       SDF_makeLayoutEmpty(),
				       result);
  }
  return result;
}

/*}}}  */
/*{{{  static SDF_Attributes PTAttributesToSDFAttributes(PT_Attributes ptAttributes) */
static SDF_Attributes PTAttributesToSDFAttributes(PT_Attributes ptAttributes)
{
  SDF_Attributes result;

  if (PT_isAttributesNoAttrs(ptAttributes)) {
    result = SDF_makeAttributesNoAttrs();
  }
  else {
    PT_Attrs ptAttributeList;
    SDF_AttributeList sdfAttributeList;

    ptAttributeList = PT_getAttributesAttrs(ptAttributes);
    sdfAttributeList = PTAttrsToSDFAttributeList(ptAttributeList);

    result = SDF_makeAttributesAttrs(SDF_makeLayoutEmpty(),
				     sdfAttributeList,
				     SDF_makeLayoutEmpty());

  }
  return result;
}

/*}}}  */

/*{{{  static SDF_Symbol PTSymbolToSDFSymbol(PT_Symbol ptSymbol) */

SDF_Symbol PTSymbolToSDFSymbol(PT_Symbol ptSymbol)
{
  SDF_Symbol result;

  if (PT_isSymbolLit(ptSymbol)) {
    char *str = PT_getSymbolString(ptSymbol);
    SDF_Literal lit = SDF_makeLiteralQuoted(SDF_makeCHARLISTString(str));

    result = SDF_makeSymbolLit(lit);
  }
  else if (PT_isSymbolCf(ptSymbol) || PT_isSymbolLex(ptSymbol)) {
    result = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));
  }
  else if (PT_isSymbolEmpty(ptSymbol)) {
    result = SDF_makeSymbolEmpty(SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolSeq(ptSymbol)) {
    PT_Symbols ptSymbols = PT_getSymbolSymbols(ptSymbol);
    PT_Symbol ptHead = PT_getSymbolsHead(ptSymbols);
    SDF_Symbol sdfHead = PTSymbolToSDFSymbol(ptHead);
    PT_Symbols ptTail = PT_getSymbolsTail(ptSymbols);
 
    if (PT_isSymbolsEmpty(ptTail)) {
      ATabort("PTSymbolToSDFSymbol: empty tail in %s\n",
              PT_yieldSymbol(ptSymbol));

      result = NULL;
    }
    else {
      SDF_SymbolTail sdfSymbolTail = 
        (SDF_SymbolTail)PTSymbolsToSDFSymbolList(ptTail);

      result = SDF_makeSymbolSeq(SDF_makeLayoutEmpty(),
                                 sdfHead, 
                                 SDF_makeLayoutSpace(),
                                 sdfSymbolTail,
                                 SDF_makeLayoutEmpty());
    }
  }
  else if (PT_isSymbolOpt(ptSymbol)) {
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));

    result = SDF_makeSymbolOpt(sdfSymbol, SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolAlt(ptSymbol)) {
    SDF_Symbol sdfLhs = PTSymbolToSDFSymbol(PT_getSymbolLhs(ptSymbol));
    SDF_Symbol sdfRhs = PTSymbolToSDFSymbol(PT_getSymbolRhs(ptSymbol));

    result = SDF_makeSymbolAlt(sdfLhs, 
                               SDF_makeLayoutEmpty(), 
                               SDF_makeLayoutEmpty(),
                               sdfRhs);
  }
  else if (PT_isSymbolPair(ptSymbol)) {
    SDF_Symbol sdfLhs = PTSymbolToSDFSymbol(PT_getSymbolLhs(ptSymbol));
    SDF_Symbol sdfRhs = PTSymbolToSDFSymbol(PT_getSymbolRhs(ptSymbol));

    result = SDF_makeSymbolPair(sdfLhs, 
                                SDF_makeLayoutEmpty(), 
                                SDF_makeLayoutEmpty(),
                                sdfRhs);
  }
  else if (PT_isSymbolSort(ptSymbol)) {
    char *str = PT_getSymbolSort(ptSymbol);
    SDF_Sort sort = SDF_makeSortMoreChars(SDF_makeCHARLISTString(str));

    result = SDF_makeSymbolSort(sort);
  }
  else if (PT_isSymbolIterPlus(ptSymbol)) { 
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));

    result = SDF_makeSymbolIter(sdfSymbol, SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolIterStar(ptSymbol)) { 
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));

    result = SDF_makeSymbolIterStar(sdfSymbol, SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolIterPlusSep(ptSymbol)) { 
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));
    SDF_Symbol sdfSep = PTSymbolToSDFSymbol(PT_getSymbolSeparator(ptSymbol));

    result = SDF_makeSymbolIterSep(SDF_makeLayoutEmpty(),
                                   sdfSymbol, 
                                   SDF_makeLayoutSpace(),
                                   sdfSep,
                                   SDF_makeLayoutEmpty(),
                                   SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolIterStarSep(ptSymbol)) { 
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));
    SDF_Symbol sdfSep = PTSymbolToSDFSymbol(PT_getSymbolSeparator(ptSymbol));

    result = SDF_makeSymbolIterStarSep(SDF_makeLayoutEmpty(),
                                       sdfSymbol, 
                                       SDF_makeLayoutSpace(),
                                       sdfSep,
                                       SDF_makeLayoutEmpty(),
                                       SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolIterN(ptSymbol)) { 
    char str[BUFSIZ];
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));
    int nr = PT_getSymbolNumber(ptSymbol);
    SDF_NatCon sdfNatCon;
    sprintf(str, "%d", nr);
    
    sdfNatCon = SDF_makeNatConDigits(SDF_makeCHARLISTString(str));

    result = SDF_makeSymbolIterN(sdfSymbol, 
                                 SDF_makeLayoutSpace(),
                                 sdfNatCon,
                                 SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolIterSepN(ptSymbol)) { 
    char str[BUFSIZ];
    SDF_Symbol sdfSymbol = PTSymbolToSDFSymbol(PT_getSymbolSymbol(ptSymbol));
    SDF_Symbol sdfSep = PTSymbolToSDFSymbol(PT_getSymbolSeparator(ptSymbol));
    int nr = PT_getSymbolNumber(ptSymbol);
    SDF_NatCon sdfNatCon;
    sprintf(str, "%d", nr);
    
    sdfNatCon = SDF_makeNatConDigits(SDF_makeCHARLISTString(str));

    result = SDF_makeSymbolIterSepN(SDF_makeLayoutEmpty(),
                                    sdfSymbol, 
                                    SDF_makeLayoutSpace(),
                                    sdfSep,
                                    SDF_makeLayoutEmpty(),
                                    SDF_makeLayoutEmpty(),
                                    sdfNatCon,
                                    SDF_makeLayoutEmpty());
  }
  else if (PT_isSymbolPerm(ptSymbol)) { 
    ATabort("PTSymbolToSDFSymbol: permutation not implemented.\n");
    result = NULL;
  }
  else if (PT_isSymbolSet(ptSymbol)) { 
    ATabort("PTSymbolToSDFSymbol: set not implemented.\n");
    result = NULL;
  }
  else if (PT_isSymbolLayout(ptSymbol)) {
    ATabort("PTSymbolToSDFSymbol: layout.\n");
    result = NULL;
  }
  else {
    ATabort("PTSymbolToSDFSymbol: unable to convert symbol %t: %s\n",
            ptSymbol, PT_yieldSymbol(ptSymbol));

    result = NULL;
  }
  return result;
}

/*}}}  */
/*{{{  static SDF_SymbolList PTSymbolsToSDFSymbolList(PT_Symbols ptSymbols) */

static SDF_SymbolList PTSymbolsToSDFSymbolList(PT_Symbols ptSymbols)
{
  PT_Symbol ptHead;
  SDF_Symbol sdfHead;
  PT_Symbol ptLayout;
  PT_Symbols ptTail;
  SDF_SymbolList sdfTail;
  SDF_SymbolList result;

  switch (PT_getSymbolsLength(ptSymbols)) {
    case 0:
      result = SDF_makeSymbolListEmpty();
      break;

    case 1:
      ptHead = PT_getSymbolsHead(ptSymbols);
      sdfHead = PTSymbolToSDFSymbol(ptHead);

      result = SDF_makeSymbolListSingle(sdfHead);
      break;

    default:
      ptHead = PT_getSymbolsHead(ptSymbols);
      assert(!PT_isOptLayoutSymbol(ptHead));

      ptTail = PT_getSymbolsTail(ptSymbols);
      ptLayout = PT_getSymbolsHead(ptTail);
      assert(PT_isOptLayoutSymbol(ptLayout));

      ptTail = PT_getSymbolsTail(ptTail);
      sdfHead = PTSymbolToSDFSymbol(ptHead);
      sdfTail = PTSymbolsToSDFSymbolList(ptTail);

      result = SDF_makeSymbolListMany(sdfHead, SDF_makeLayoutSpace(), sdfTail);
      break;
  }

  return result;
}

/*}}}  */
/*{{{  static SDF_Symbols PTSymbolsToSDFSymbols(PT_Symbols ptSymbols) */

static SDF_Symbols PTSymbolsToSDFSymbols(PT_Symbols ptSymbols)
{
  return SDF_makeSymbolsDefault(PTSymbolsToSDFSymbolList(ptSymbols));
}

/*}}}  */

/*{{{  SDF_Production PTProductionToSDFProduction(PT_Production ptProduction) */

SDF_Production PTProductionToSDFProduction(PT_Production ptProduction)
{
  PT_Symbols ptLhs;
  PT_Symbol ptRhs;
  PT_Attributes ptAttributes;

  SDF_Symbols sdfLhs;
  SDF_Symbol sdfRhs;
  SDF_Attributes sdfAttributes;

  ptLhs = PT_getProductionLhs(ptProduction);
  sdfLhs = PTSymbolsToSDFSymbols(ptLhs);

  ptRhs = PT_getProductionRhs(ptProduction); 
  sdfRhs = PTSymbolToSDFSymbol(ptRhs);

  ptAttributes = PT_getProductionAttributes(ptProduction);
  sdfAttributes = PTAttributesToSDFAttributes(ptAttributes);

  return SDF_makeProductionProd(sdfLhs, 
                                SDF_makeLayoutSpace(), 
                                SDF_makeLayoutSpace(), 
                                sdfRhs, 
                                SDF_makeLayoutSpace(), 
                                sdfAttributes);
}

/*}}}  */

