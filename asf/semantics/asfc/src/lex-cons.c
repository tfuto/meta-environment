#include <stdio.h>
#include <assert.h>

#include <ASFME-utils.h>
#include <MEPT-utils.h>

#include "lex-cons.h"

static PT_Tree constructorCharToLexicalChar(ASF_CHAR ch)
{
  const char *str = ASF_getCHARString(ch);

  return PT_makeTreeChar(str[1]);
}

static PT_Tree constructorVarToLexicalVar(ASF_CHAR var)
{
  PT_Tree tree = (PT_Tree) var;
  char *name = PT_yieldTree((PT_Tree) var);
  PT_Tree nameTree = PT_makeTreeLit(name);
  PT_Symbol nameSymbol = PT_makeSymbolLit(name);
  PT_Symbol all = PT_makeSymbolCharClass(
	    	    PT_makeCharRangesMany(
                    PT_makeCharRangeRange(0,255),
		    PT_makeCharRangesEmpty()));
  PT_Attributes noattrs = PT_makeAttributesNoAttrs();
  PT_Symbol symbol;
  PT_Symbols lhs1, lhs2;
  PT_Production prod1, prod2;
  PT_Args args1, args2;
  PT_Tree appl1, appl2;

  if (PT_isTreeVarListStar(tree)) {
    symbol = PT_makeSymbolIterStar(all);
  }
  else if (PT_isTreeVarListPlus(tree)) {
    symbol = PT_makeSymbolIterPlus(all);
  }
  else {
    symbol = all;
  }

  symbol = PT_makeSymbolLex(symbol);

  lhs1 = PT_makeSymbolsSingle(nameSymbol);
  prod1 = PT_makeProductionDefault(lhs1,symbol,noattrs);
  args1 = PT_makeArgsSingle(nameTree);
  appl1 = PT_makeTreeAppl(prod1,args1);

  lhs2 = PT_makeSymbolsSingle(PT_makeSymbolVarSym(symbol));
  prod2 = PT_makeProductionDefault(lhs2,symbol,noattrs);
  args2 = PT_makeArgsSingle(appl1);
  appl2 = PT_makeTreeAppl(prod2, args2);

  return appl2;
}

static PT_Args constructorArgsToLexicalArgs(ASF_CHARList chars)
{
  PT_Args list = PT_makeArgsEmpty();

  for(;ASF_hasCHARListHead(chars); chars = ASF_getCHARListTail(chars)) {
    ASF_CHAR head = ASF_getCHARListHead(chars);
    PT_Tree elem;

    if (PT_isTreeVar((PT_Tree) head)) {
      elem = constructorVarToLexicalVar(head);
    }
    else {
      elem = constructorCharToLexicalChar(head);
    }
    list = PT_makeArgsMany(elem, list);

    if (!ASF_hasCHARListTail(chars)) {
      break;
    }
  }

  return PT_reverseArgs(list);
}

PT_Tree constructorTreeToLexicalTree(PT_Tree constructor)
{
  ASF_Tree tree = (ASF_Tree) constructor;
  PT_Symbol rhs;
  ASF_CHARList charlist;
  PT_Args lexicalArgs;
  PT_Tree lexicalTree;
  PT_Tree result;

  assert(ASF_isTreeLexicalConstructorFunction(tree));

  rhs = PT_getSymbolSymbol((PT_Symbol) ASF_getTreeSymbol(tree));

  charlist = ASF_getTreeList(tree);

  lexicalArgs = constructorArgsToLexicalArgs(charlist);

  lexicalTree = PT_makeTreeFlatLexical(lexicalArgs);

  result = PT_makeTreeLexToCf(rhs, lexicalTree);
  return result;
}

