#include <assert.h>

#include <aterm2.h>
#include <deprecated.h>
#include "Box.h"

/**
 * Converts a string to an ATermList of integers (ASCII values). 
 * \param[in] str An ASCII string
 * \return An ATermList containing the ASCII values of #arg as ATermInts
 */
ATerm BOX_stringToChars(const char *str) {
  int len = strlen(str);
  int i;
  ATermList result = ATempty;

  for (i = len - 1; i >= 0; i--) {
    result = ATinsert(result, (ATerm) ATmakeInt(str[i]));
  }

  return (ATerm) result;
}

/**
 * Converts an ASCII char to an ATermInt. 
 * \param[in] ch an ASCII character
 * \return An ATerm representing the ASCII value of #arg
 */
ATerm BOX_byteToChar(char ch) {
    return (ATerm) ATmakeInt(ch);
}

/**
 * Converts a list of integers (ASCII values) to a C string. 
 * \param[in] arg An ATermList with ATermInts, such as [32,32,10]
 * \return String containing the characters from #arg as characters
 */
char *BOX_charsToString(ATerm arg) {
  ATermList list = (ATermList) arg;
  int len = ATgetLength(list);
  int i;
  char *str;

  str = (char *) malloc(len+1);
  if (str == NULL) {
      return NULL;
  }

  for (i = 0; !ATisEmpty(list); list = ATgetNext(list), i++) {
    str[i] = (char) ATgetInt((ATermInt) ATgetFirst(list));
  }
  str[i] = '\0';

  return str;
}

char BOX_charToByte(ATerm arg) {
    return (char) ATgetInt((ATermInt) arg);
}


typedef struct ATerm _BOX_OptLayout;
typedef struct ATerm _BOX_Layout;
typedef struct ATerm _BOX_LexLayoutList;
typedef struct ATerm _BOX_Start;
typedef struct ATerm _BOX_GroupOption;
typedef struct ATerm _BOX_BoxOperator;
typedef struct ATerm _BOX_GroupOptionGroupOptions;
typedef struct ATerm _BOX_LexNatCon;
typedef struct ATerm _BOX_NatCon;
typedef struct ATerm _BOX_AlignmentOption;
typedef struct ATerm _BOX_AlignmentOptions;
typedef struct ATerm _BOX_SpaceOptionOptions;
typedef struct ATerm _BOX_AlignmentOptionList;
typedef struct ATerm _BOX_SpaceSymbol;
typedef struct ATerm _BOX_SpaceOption;
typedef struct ATerm _BOX_Box;
typedef struct ATerm _BOX_BoxList;
typedef struct ATerm _BOX_LexLayout;
typedef struct ATerm _BOX_LexFontId;
typedef struct ATerm _BOX_FontId;
typedef struct ATerm _BOX_FontValue;
typedef struct ATerm _BOX_FontOption;
typedef struct ATerm _BOX_FontParam;
typedef struct ATerm _BOX_FontOperator;
typedef struct ATerm _BOX_FontOptionList;
typedef struct ATerm _BOX_LexStrChar;
typedef struct ATerm _BOX_StrChar;
typedef struct ATerm _BOX_LexStrCon;
typedef struct ATerm _BOX_StrCon;
typedef struct ATerm _BOX_LexStrCharChars;

/**
 * Initializes the full API. Forgetting to call this function before using the API will lead to strange behaviour. ATinit() needs to be called before this function.
 */
void BOX_initBoxApi(void) {
  init_Box_dict();
}

/**
 * Protect a BOX_OptLayout from the ATerm garbage collector. Every BOX_OptLayout that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_OptLayout
 */
void BOX_protectOptLayout(BOX_OptLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_OptLayout from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_OptLayout
 */
void BOX_unprotectOptLayout(BOX_OptLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_Layout from the ATerm garbage collector. Every BOX_Layout that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_Layout
 */
void BOX_protectLayout(BOX_Layout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_Layout from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_Layout
 */
void BOX_unprotectLayout(BOX_Layout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexLayoutList from the ATerm garbage collector. Every BOX_LexLayoutList that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexLayoutList
 */
void BOX_protectLexLayoutList(BOX_LexLayoutList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexLayoutList from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexLayoutList
 */
void BOX_unprotectLexLayoutList(BOX_LexLayoutList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_Start from the ATerm garbage collector. Every BOX_Start that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_Start
 */
void BOX_protectStart(BOX_Start *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_Start from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_Start
 */
void BOX_unprotectStart(BOX_Start *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_GroupOption from the ATerm garbage collector. Every BOX_GroupOption that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_GroupOption
 */
void BOX_protectGroupOption(BOX_GroupOption *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_GroupOption from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_GroupOption
 */
void BOX_unprotectGroupOption(BOX_GroupOption *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_BoxOperator from the ATerm garbage collector. Every BOX_BoxOperator that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_BoxOperator
 */
void BOX_protectBoxOperator(BOX_BoxOperator *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_BoxOperator from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_BoxOperator
 */
void BOX_unprotectBoxOperator(BOX_BoxOperator *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_GroupOptionGroupOptions from the ATerm garbage collector. Every BOX_GroupOptionGroupOptions that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_GroupOptionGroupOptions
 */
void BOX_protectGroupOptionGroupOptions(BOX_GroupOptionGroupOptions *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_GroupOptionGroupOptions from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_GroupOptionGroupOptions
 */
void BOX_unprotectGroupOptionGroupOptions(BOX_GroupOptionGroupOptions *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexNatCon from the ATerm garbage collector. Every BOX_LexNatCon that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexNatCon
 */
void BOX_protectLexNatCon(BOX_LexNatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexNatCon from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexNatCon
 */
void BOX_unprotectLexNatCon(BOX_LexNatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_NatCon from the ATerm garbage collector. Every BOX_NatCon that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_NatCon
 */
void BOX_protectNatCon(BOX_NatCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_NatCon from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_NatCon
 */
void BOX_unprotectNatCon(BOX_NatCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_AlignmentOption from the ATerm garbage collector. Every BOX_AlignmentOption that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_AlignmentOption
 */
void BOX_protectAlignmentOption(BOX_AlignmentOption *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_AlignmentOption from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_AlignmentOption
 */
void BOX_unprotectAlignmentOption(BOX_AlignmentOption *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_AlignmentOptions from the ATerm garbage collector. Every BOX_AlignmentOptions that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_AlignmentOptions
 */
void BOX_protectAlignmentOptions(BOX_AlignmentOptions *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_AlignmentOptions from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_AlignmentOptions
 */
void BOX_unprotectAlignmentOptions(BOX_AlignmentOptions *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_SpaceOptionOptions from the ATerm garbage collector. Every BOX_SpaceOptionOptions that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_SpaceOptionOptions
 */
void BOX_protectSpaceOptionOptions(BOX_SpaceOptionOptions *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_SpaceOptionOptions from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_SpaceOptionOptions
 */
void BOX_unprotectSpaceOptionOptions(BOX_SpaceOptionOptions *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_AlignmentOptionList from the ATerm garbage collector. Every BOX_AlignmentOptionList that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_AlignmentOptionList
 */
void BOX_protectAlignmentOptionList(BOX_AlignmentOptionList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_AlignmentOptionList from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_AlignmentOptionList
 */
void BOX_unprotectAlignmentOptionList(BOX_AlignmentOptionList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_SpaceSymbol from the ATerm garbage collector. Every BOX_SpaceSymbol that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_SpaceSymbol
 */
void BOX_protectSpaceSymbol(BOX_SpaceSymbol *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_SpaceSymbol from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_SpaceSymbol
 */
void BOX_unprotectSpaceSymbol(BOX_SpaceSymbol *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_SpaceOption from the ATerm garbage collector. Every BOX_SpaceOption that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_SpaceOption
 */
void BOX_protectSpaceOption(BOX_SpaceOption *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_SpaceOption from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_SpaceOption
 */
void BOX_unprotectSpaceOption(BOX_SpaceOption *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_Box from the ATerm garbage collector. Every BOX_Box that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_Box
 */
void BOX_protectBox(BOX_Box *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_Box from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_Box
 */
void BOX_unprotectBox(BOX_Box *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_BoxList from the ATerm garbage collector. Every BOX_BoxList that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_BoxList
 */
void BOX_protectBoxList(BOX_BoxList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_BoxList from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_BoxList
 */
void BOX_unprotectBoxList(BOX_BoxList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexLayout from the ATerm garbage collector. Every BOX_LexLayout that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexLayout
 */
void BOX_protectLexLayout(BOX_LexLayout *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexLayout from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexLayout
 */
void BOX_unprotectLexLayout(BOX_LexLayout *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexFontId from the ATerm garbage collector. Every BOX_LexFontId that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexFontId
 */
void BOX_protectLexFontId(BOX_LexFontId *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexFontId from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexFontId
 */
void BOX_unprotectLexFontId(BOX_LexFontId *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontId from the ATerm garbage collector. Every BOX_FontId that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontId
 */
void BOX_protectFontId(BOX_FontId *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontId from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontId
 */
void BOX_unprotectFontId(BOX_FontId *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontValue from the ATerm garbage collector. Every BOX_FontValue that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontValue
 */
void BOX_protectFontValue(BOX_FontValue *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontValue from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontValue
 */
void BOX_unprotectFontValue(BOX_FontValue *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontOption from the ATerm garbage collector. Every BOX_FontOption that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontOption
 */
void BOX_protectFontOption(BOX_FontOption *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontOption from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontOption
 */
void BOX_unprotectFontOption(BOX_FontOption *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontParam from the ATerm garbage collector. Every BOX_FontParam that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontParam
 */
void BOX_protectFontParam(BOX_FontParam *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontParam from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontParam
 */
void BOX_unprotectFontParam(BOX_FontParam *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontOperator from the ATerm garbage collector. Every BOX_FontOperator that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontOperator
 */
void BOX_protectFontOperator(BOX_FontOperator *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontOperator from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontOperator
 */
void BOX_unprotectFontOperator(BOX_FontOperator *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_FontOptionList from the ATerm garbage collector. Every BOX_FontOptionList that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_FontOptionList
 */
void BOX_protectFontOptionList(BOX_FontOptionList *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_FontOptionList from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_FontOptionList
 */
void BOX_unprotectFontOptionList(BOX_FontOptionList *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexStrChar from the ATerm garbage collector. Every BOX_LexStrChar that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexStrChar
 */
void BOX_protectLexStrChar(BOX_LexStrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexStrChar from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexStrChar
 */
void BOX_unprotectLexStrChar(BOX_LexStrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_StrChar from the ATerm garbage collector. Every BOX_StrChar that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_StrChar
 */
void BOX_protectStrChar(BOX_StrChar *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_StrChar from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_StrChar
 */
void BOX_unprotectStrChar(BOX_StrChar *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexStrCon from the ATerm garbage collector. Every BOX_LexStrCon that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexStrCon
 */
void BOX_protectLexStrCon(BOX_LexStrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexStrCon from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexStrCon
 */
void BOX_unprotectLexStrCon(BOX_LexStrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_StrCon from the ATerm garbage collector. Every BOX_StrCon that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_StrCon
 */
void BOX_protectStrCon(BOX_StrCon *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_StrCon from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_StrCon
 */
void BOX_unprotectStrCon(BOX_StrCon *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Protect a BOX_LexStrCharChars from the ATerm garbage collector. Every BOX_LexStrCharChars that is not rooted somewhere on the C call stack must be protected. Examples are global variables
 * \param[in] arg pointer to a BOX_LexStrCharChars
 */
void BOX_protectLexStrCharChars(BOX_LexStrCharChars *arg) {
  ATprotect((ATerm*)((void*) arg));
}

/**
 * Unprotect a BOX_LexStrCharChars from the ATerm garbage collector. This improves the efficiency of the garbage collector, as well as provide opportunity for reclaiming space
 * \param[in] arg pointer to a BOX_LexStrCharChars
 */
void BOX_unprotectLexStrCharChars(BOX_LexStrCharChars *arg) {
  ATunprotect((ATerm*)((void*) arg));
}

/**
 * Transforms an ATerm to a BOX_OptLayout. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_OptLayout that was encoded by \arg
 */
BOX_OptLayout BOX_OptLayoutFromTerm(ATerm t) {
  return (BOX_OptLayout)t;
}

/**
 * Transforms a BOX_OptLayoutto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_OptLayout to be converted
 * \return ATerm that represents the BOX_OptLayout
 */
ATerm BOX_OptLayoutToTerm(BOX_OptLayout arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_Layout. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_Layout that was encoded by \arg
 */
BOX_Layout BOX_LayoutFromTerm(ATerm t) {
  return (BOX_Layout)t;
}

/**
 * Transforms a BOX_Layoutto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_Layout to be converted
 * \return ATerm that represents the BOX_Layout
 */
ATerm BOX_LayoutToTerm(BOX_Layout arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexLayoutList. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexLayoutList that was encoded by \arg
 */
BOX_LexLayoutList BOX_LexLayoutListFromTerm(ATerm t) {
  return (BOX_LexLayoutList)t;
}

/**
 * Transforms a BOX_LexLayoutListto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexLayoutList to be converted
 * \return ATerm that represents the BOX_LexLayoutList
 */
ATerm BOX_LexLayoutListToTerm(BOX_LexLayoutList arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_Start. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_Start that was encoded by \arg
 */
BOX_Start BOX_StartFromTerm(ATerm t) {
  return (BOX_Start)t;
}

/**
 * Transforms a BOX_Startto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_Start to be converted
 * \return ATerm that represents the BOX_Start
 */
ATerm BOX_StartToTerm(BOX_Start arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_GroupOption. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_GroupOption that was encoded by \arg
 */
BOX_GroupOption BOX_GroupOptionFromTerm(ATerm t) {
  return (BOX_GroupOption)t;
}

/**
 * Transforms a BOX_GroupOptionto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_GroupOption to be converted
 * \return ATerm that represents the BOX_GroupOption
 */
ATerm BOX_GroupOptionToTerm(BOX_GroupOption arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_BoxOperator. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_BoxOperator that was encoded by \arg
 */
BOX_BoxOperator BOX_BoxOperatorFromTerm(ATerm t) {
  return (BOX_BoxOperator)t;
}

/**
 * Transforms a BOX_BoxOperatorto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_BoxOperator to be converted
 * \return ATerm that represents the BOX_BoxOperator
 */
ATerm BOX_BoxOperatorToTerm(BOX_BoxOperator arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_GroupOptionGroupOptions. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_GroupOptionGroupOptions that was encoded by \arg
 */
BOX_GroupOptionGroupOptions BOX_GroupOptionGroupOptionsFromTerm(ATerm t) {
  return (BOX_GroupOptionGroupOptions)t;
}

/**
 * Transforms a BOX_GroupOptionGroupOptionsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_GroupOptionGroupOptions to be converted
 * \return ATerm that represents the BOX_GroupOptionGroupOptions
 */
ATerm BOX_GroupOptionGroupOptionsToTerm(BOX_GroupOptionGroupOptions arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexNatCon. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexNatCon that was encoded by \arg
 */
BOX_LexNatCon BOX_LexNatConFromTerm(ATerm t) {
  return (BOX_LexNatCon)t;
}

/**
 * Transforms a BOX_LexNatConto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexNatCon to be converted
 * \return ATerm that represents the BOX_LexNatCon
 */
ATerm BOX_LexNatConToTerm(BOX_LexNatCon arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_NatCon. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_NatCon that was encoded by \arg
 */
BOX_NatCon BOX_NatConFromTerm(ATerm t) {
  return (BOX_NatCon)t;
}

/**
 * Transforms a BOX_NatConto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_NatCon to be converted
 * \return ATerm that represents the BOX_NatCon
 */
ATerm BOX_NatConToTerm(BOX_NatCon arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_AlignmentOption. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_AlignmentOption that was encoded by \arg
 */
BOX_AlignmentOption BOX_AlignmentOptionFromTerm(ATerm t) {
  return (BOX_AlignmentOption)t;
}

/**
 * Transforms a BOX_AlignmentOptionto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_AlignmentOption to be converted
 * \return ATerm that represents the BOX_AlignmentOption
 */
ATerm BOX_AlignmentOptionToTerm(BOX_AlignmentOption arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_AlignmentOptions. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_AlignmentOptions that was encoded by \arg
 */
BOX_AlignmentOptions BOX_AlignmentOptionsFromTerm(ATerm t) {
  return (BOX_AlignmentOptions)t;
}

/**
 * Transforms a BOX_AlignmentOptionsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_AlignmentOptions to be converted
 * \return ATerm that represents the BOX_AlignmentOptions
 */
ATerm BOX_AlignmentOptionsToTerm(BOX_AlignmentOptions arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_SpaceOptionOptions. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_SpaceOptionOptions that was encoded by \arg
 */
BOX_SpaceOptionOptions BOX_SpaceOptionOptionsFromTerm(ATerm t) {
  return (BOX_SpaceOptionOptions)t;
}

/**
 * Transforms a BOX_SpaceOptionOptionsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_SpaceOptionOptions to be converted
 * \return ATerm that represents the BOX_SpaceOptionOptions
 */
ATerm BOX_SpaceOptionOptionsToTerm(BOX_SpaceOptionOptions arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_AlignmentOptionList. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_AlignmentOptionList that was encoded by \arg
 */
BOX_AlignmentOptionList BOX_AlignmentOptionListFromTerm(ATerm t) {
  return (BOX_AlignmentOptionList)t;
}

/**
 * Transforms a BOX_AlignmentOptionListto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_AlignmentOptionList to be converted
 * \return ATerm that represents the BOX_AlignmentOptionList
 */
ATerm BOX_AlignmentOptionListToTerm(BOX_AlignmentOptionList arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_SpaceSymbol. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_SpaceSymbol that was encoded by \arg
 */
BOX_SpaceSymbol BOX_SpaceSymbolFromTerm(ATerm t) {
  return (BOX_SpaceSymbol)t;
}

/**
 * Transforms a BOX_SpaceSymbolto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_SpaceSymbol to be converted
 * \return ATerm that represents the BOX_SpaceSymbol
 */
ATerm BOX_SpaceSymbolToTerm(BOX_SpaceSymbol arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_SpaceOption. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_SpaceOption that was encoded by \arg
 */
BOX_SpaceOption BOX_SpaceOptionFromTerm(ATerm t) {
  return (BOX_SpaceOption)t;
}

/**
 * Transforms a BOX_SpaceOptionto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_SpaceOption to be converted
 * \return ATerm that represents the BOX_SpaceOption
 */
ATerm BOX_SpaceOptionToTerm(BOX_SpaceOption arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_Box. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_Box that was encoded by \arg
 */
BOX_Box BOX_BoxFromTerm(ATerm t) {
  return (BOX_Box)t;
}

/**
 * Transforms a BOX_Boxto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_Box to be converted
 * \return ATerm that represents the BOX_Box
 */
ATerm BOX_BoxToTerm(BOX_Box arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_BoxList. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_BoxList that was encoded by \arg
 */
BOX_BoxList BOX_BoxListFromTerm(ATerm t) {
  return (BOX_BoxList)t;
}

/**
 * Transforms a BOX_BoxListto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_BoxList to be converted
 * \return ATerm that represents the BOX_BoxList
 */
ATerm BOX_BoxListToTerm(BOX_BoxList arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexLayout. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexLayout that was encoded by \arg
 */
BOX_LexLayout BOX_LexLayoutFromTerm(ATerm t) {
  return (BOX_LexLayout)t;
}

/**
 * Transforms a BOX_LexLayoutto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexLayout to be converted
 * \return ATerm that represents the BOX_LexLayout
 */
ATerm BOX_LexLayoutToTerm(BOX_LexLayout arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexFontId. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexFontId that was encoded by \arg
 */
BOX_LexFontId BOX_LexFontIdFromTerm(ATerm t) {
  return (BOX_LexFontId)t;
}

/**
 * Transforms a BOX_LexFontIdto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexFontId to be converted
 * \return ATerm that represents the BOX_LexFontId
 */
ATerm BOX_LexFontIdToTerm(BOX_LexFontId arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontId. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontId that was encoded by \arg
 */
BOX_FontId BOX_FontIdFromTerm(ATerm t) {
  return (BOX_FontId)t;
}

/**
 * Transforms a BOX_FontIdto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontId to be converted
 * \return ATerm that represents the BOX_FontId
 */
ATerm BOX_FontIdToTerm(BOX_FontId arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontValue. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontValue that was encoded by \arg
 */
BOX_FontValue BOX_FontValueFromTerm(ATerm t) {
  return (BOX_FontValue)t;
}

/**
 * Transforms a BOX_FontValueto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontValue to be converted
 * \return ATerm that represents the BOX_FontValue
 */
ATerm BOX_FontValueToTerm(BOX_FontValue arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontOption. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontOption that was encoded by \arg
 */
BOX_FontOption BOX_FontOptionFromTerm(ATerm t) {
  return (BOX_FontOption)t;
}

/**
 * Transforms a BOX_FontOptionto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontOption to be converted
 * \return ATerm that represents the BOX_FontOption
 */
ATerm BOX_FontOptionToTerm(BOX_FontOption arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontParam. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontParam that was encoded by \arg
 */
BOX_FontParam BOX_FontParamFromTerm(ATerm t) {
  return (BOX_FontParam)t;
}

/**
 * Transforms a BOX_FontParamto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontParam to be converted
 * \return ATerm that represents the BOX_FontParam
 */
ATerm BOX_FontParamToTerm(BOX_FontParam arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontOperator. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontOperator that was encoded by \arg
 */
BOX_FontOperator BOX_FontOperatorFromTerm(ATerm t) {
  return (BOX_FontOperator)t;
}

/**
 * Transforms a BOX_FontOperatorto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontOperator to be converted
 * \return ATerm that represents the BOX_FontOperator
 */
ATerm BOX_FontOperatorToTerm(BOX_FontOperator arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_FontOptionList. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_FontOptionList that was encoded by \arg
 */
BOX_FontOptionList BOX_FontOptionListFromTerm(ATerm t) {
  return (BOX_FontOptionList)t;
}

/**
 * Transforms a BOX_FontOptionListto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_FontOptionList to be converted
 * \return ATerm that represents the BOX_FontOptionList
 */
ATerm BOX_FontOptionListToTerm(BOX_FontOptionList arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexStrChar. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexStrChar that was encoded by \arg
 */
BOX_LexStrChar BOX_LexStrCharFromTerm(ATerm t) {
  return (BOX_LexStrChar)t;
}

/**
 * Transforms a BOX_LexStrCharto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexStrChar to be converted
 * \return ATerm that represents the BOX_LexStrChar
 */
ATerm BOX_LexStrCharToTerm(BOX_LexStrChar arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_StrChar. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_StrChar that was encoded by \arg
 */
BOX_StrChar BOX_StrCharFromTerm(ATerm t) {
  return (BOX_StrChar)t;
}

/**
 * Transforms a BOX_StrCharto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_StrChar to be converted
 * \return ATerm that represents the BOX_StrChar
 */
ATerm BOX_StrCharToTerm(BOX_StrChar arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexStrCon. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexStrCon that was encoded by \arg
 */
BOX_LexStrCon BOX_LexStrConFromTerm(ATerm t) {
  return (BOX_LexStrCon)t;
}

/**
 * Transforms a BOX_LexStrConto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexStrCon to be converted
 * \return ATerm that represents the BOX_LexStrCon
 */
ATerm BOX_LexStrConToTerm(BOX_LexStrCon arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_StrCon. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_StrCon that was encoded by \arg
 */
BOX_StrCon BOX_StrConFromTerm(ATerm t) {
  return (BOX_StrCon)t;
}

/**
 * Transforms a BOX_StrConto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_StrCon to be converted
 * \return ATerm that represents the BOX_StrCon
 */
ATerm BOX_StrConToTerm(BOX_StrCon arg) {
  return (ATerm)arg;
}

/**
 * Transforms an ATerm to a BOX_LexStrCharChars. This is just a wrapper for a cast, so no structural validation is done!
 * \param[in] t ATerm to be converted
 * \return BOX_LexStrCharChars that was encoded by \arg
 */
BOX_LexStrCharChars BOX_LexStrCharCharsFromTerm(ATerm t) {
  return (BOX_LexStrCharChars)t;
}

/**
 * Transforms a BOX_LexStrCharCharsto an ATerm. This is just a wrapper for a cast.
 * \param[in] arg BOX_LexStrCharChars to be converted
 * \return ATerm that represents the BOX_LexStrCharChars
 */
ATerm BOX_LexStrCharCharsToTerm(BOX_LexStrCharChars arg) {
  return (ATerm)arg;
}

/**
 * Retrieve the length of a BOX_LexLayoutList. 
 * \param[in] arg input BOX_LexLayoutList
 * \return The number of elements in the BOX_LexLayoutList
 */
int BOX_getLexLayoutListLength (BOX_LexLayoutList arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a BOX_LexLayoutList. 
 * \param[in] arg BOX_LexLayoutList to be reversed
 * \return a reversed #arg
 */
BOX_LexLayoutList BOX_reverseLexLayoutList(BOX_LexLayoutList arg) {
  return (BOX_LexLayoutList) ATreverse((ATermList) arg);
}

/**
 * Append a BOX_LexLayout to the end of a BOX_LexLayoutList. 
 * \param[in] arg BOX_LexLayoutList to append the BOX_LexLayout to
 * \param[in] elem BOX_LexLayout to be appended
 * \return new BOX_LexLayoutList with #elem appended
 */
BOX_LexLayoutList BOX_appendLexLayoutList(BOX_LexLayoutList arg, BOX_LexLayout elem) {
  return (BOX_LexLayoutList) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two BOX_LexLayoutLists. 
 * \param[in] arg0 first BOX_LexLayoutList
 * \param[in] arg1 second BOX_LexLayoutList
 * \return BOX_LexLayoutList with the elements of #arg0 before the elements of #arg1
 */
BOX_LexLayoutList BOX_concatLexLayoutList(BOX_LexLayoutList arg0, BOX_LexLayoutList arg1) {
  return (BOX_LexLayoutList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_LexLayoutList. 
 * \param[in] arg BOX_LexLayoutList to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_LexLayoutList with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_LexLayoutList BOX_sliceLexLayoutList(BOX_LexLayoutList arg, int start, int end) {
  return (BOX_LexLayoutList) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the BOX_LexLayout at #index from a BOX_LexLayoutList. 
 * \param[in] arg BOX_LexLayoutList to retrieve the BOX_LexLayout from
 * \param[in] index index to use to point in the BOX_LexLayoutList
 * \return BOX_LexLayout at position #index in #arg
 */
BOX_LexLayout BOX_getLexLayoutListLexLayoutAt(BOX_LexLayoutList arg, int index) {
 return (BOX_LexLayout)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the BOX_LexLayout at #index from a BOX_LexLayoutList by a new one. 
 * \param[in] arg BOX_LexLayoutList to retrieve the BOX_LexLayout from
 * \param[in] elem new BOX_LexLayout to replace another
 * \param[in] index index to use to point in the BOX_LexLayoutList
 * \return A new BOX_LexLayoutListwith #elem replaced in #arg at position #index
 */
BOX_LexLayoutList BOX_replaceLexLayoutListLexLayoutAt(BOX_LexLayoutList arg, BOX_LexLayout elem, int index) {
 return (BOX_LexLayoutList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a BOX_LexLayoutList of 2 consecutive elements. 
 * \param[in] elem1 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem2 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \return A new BOX_LexLayoutList consisting of 2 BOX_LexLayouts
 */
BOX_LexLayoutList BOX_makeLexLayoutList2(BOX_LexLayout elem1, BOX_LexLayout elem2) {
  return (BOX_LexLayoutList) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a BOX_LexLayoutList of 3 consecutive elements. 
 * \param[in] elem1 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem2 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem3 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \return A new BOX_LexLayoutList consisting of 3 BOX_LexLayouts
 */
BOX_LexLayoutList BOX_makeLexLayoutList3(BOX_LexLayout elem1, BOX_LexLayout elem2, BOX_LexLayout elem3) {
  return (BOX_LexLayoutList) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a BOX_LexLayoutList of 4 consecutive elements. 
 * \param[in] elem1 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem2 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem3 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem4 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \return A new BOX_LexLayoutList consisting of 4 BOX_LexLayouts
 */
BOX_LexLayoutList BOX_makeLexLayoutList4(BOX_LexLayout elem1, BOX_LexLayout elem2, BOX_LexLayout elem3, BOX_LexLayout elem4) {
  return (BOX_LexLayoutList) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a BOX_LexLayoutList of 5 consecutive elements. 
 * \param[in] elem1 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem2 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem3 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem4 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem5 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \return A new BOX_LexLayoutList consisting of 5 BOX_LexLayouts
 */
BOX_LexLayoutList BOX_makeLexLayoutList5(BOX_LexLayout elem1, BOX_LexLayout elem2, BOX_LexLayout elem3, BOX_LexLayout elem4, BOX_LexLayout elem5) {
  return (BOX_LexLayoutList) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a BOX_LexLayoutList of 6 consecutive elements. 
 * \param[in] elem1 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem2 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem3 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem4 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem5 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \param[in] elem6 One BOX_LexLayout element of the new BOX_LexLayoutList
 * \return A new BOX_LexLayoutList consisting of 6 BOX_LexLayouts
 */
BOX_LexLayoutList BOX_makeLexLayoutList6(BOX_LexLayout elem1, BOX_LexLayout elem2, BOX_LexLayout elem3, BOX_LexLayout elem4, BOX_LexLayout elem5, BOX_LexLayout elem6) {
  return (BOX_LexLayoutList) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Retrieve the number of elements in a BOX_GroupOptionGroupOptions. 
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return The number of elements in #arg, excluding any separators
 */
int BOX_getGroupOptionGroupOptionsLength (BOX_GroupOptionGroupOptions arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 2) + 1;
}

/**
 * Reverses the elements of a BOX_GroupOptionGroupOptions. Note that separators are reversed with the list, but the order in which each set of separators inbetween two elements occurs does not change
 * \param[in] arg BOX_GroupOptionGroupOptions to be reversed
 * \return #arg reversed
 */
BOX_GroupOptionGroupOptions BOX_reverseGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (BOX_GroupOptionGroupOptions) result;
}

/**
 * Append a BOX_GroupOption to the end of a BOX_GroupOptionGroupOptions. 
 * \param[in] arg BOX_GroupOptionGroupOptions to append the BOX_GroupOption to
 * \param[in] elem BOX_GroupOption to be appended
 * \return new BOX_GroupOptionGroupOptions with #elem appended after the separators
 */
BOX_GroupOptionGroupOptions BOX_appendGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg0, BOX_OptLayout wsAfterHead, BOX_GroupOption arg1) {
  return BOX_concatGroupOptionGroupOptions(arg0, wsAfterHead, BOX_makeGroupOptionGroupOptionsSingle(arg1));
}

/**
 * Concatenate two BOX_GroupOptionGroupOptionss. 
 * \param[in] arg0 first BOX_GroupOptionGroupOptions
 * \param[in] arg1 second BOX_GroupOptionGroupOptions
 * \return BOX_GroupOptionGroupOptions with the elements of #arg0 before the elements of #arg1, with the separators in between.
 */
BOX_GroupOptionGroupOptions BOX_concatGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg0, BOX_OptLayout wsAfterHead, BOX_GroupOptionGroupOptions arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = BOX_makeGroupOptionGroupOptionsMany((BOX_GroupOption)ATgetFirst((ATermList) arg0), wsAfterHead,  arg1);
  arg1 = (BOX_GroupOptionGroupOptions) ATgetNext((ATermList) arg1);
  return (BOX_GroupOptionGroupOptions) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_GroupOptionGroupOptions. 
 * \param[in] arg BOX_GroupOptionGroupOptions to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_GroupOptionGroupOptions with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_GroupOptionGroupOptions BOX_sliceGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg, int start, int end) {
  return (BOX_GroupOptionGroupOptions) ATgetSlice((ATermList) arg, start * 2, end * 2);
}

/**
 * Retrieve the BOX_GroupOption at #index from a BOX_GroupOptionGroupOptions. 
 * \param[in] arg BOX_GroupOptionGroupOptions to retrieve the BOX_GroupOption from
 * \param[in] index index to use to point in the BOX_GroupOptionGroupOptions
 * \return BOX_GroupOption at position #index in #arg
 */
BOX_GroupOption BOX_getGroupOptionGroupOptionsGroupOptionAt(BOX_GroupOptionGroupOptions arg, int index) {
 return (BOX_GroupOption)ATelementAt((ATermList) arg,index * 2);
}

/**
 * Replace the BOX_GroupOption at #index from a BOX_GroupOptionGroupOptions by a new one. 
 * \param[in] arg BOX_GroupOptionGroupOptions to retrieve the BOX_GroupOption from
 * \param[in] elem new BOX_GroupOption to replace another
 * \param[in] index index to use to point in the BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptionswith #elem replaced in #arg at position #index
 */
BOX_GroupOptionGroupOptions BOX_replaceGroupOptionGroupOptionsGroupOptionAt(BOX_GroupOptionGroupOptions arg, BOX_GroupOption elem, int index) {
 return (BOX_GroupOptionGroupOptions) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 2);
}

/**
 * Builds a BOX_GroupOptionGroupOptions of 2 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem2 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions consisting of 2 BOX_GroupOptions
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptions2(BOX_OptLayout wsAfterHead, BOX_GroupOption elem1, BOX_GroupOption elem2) {
  return BOX_makeGroupOptionGroupOptionsMany(elem1, wsAfterHead, BOX_makeGroupOptionGroupOptionsSingle(elem2));
}

/**
 * Builds a BOX_GroupOptionGroupOptions of 3 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem2 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem3 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions consisting of 3 BOX_GroupOptions
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptions3(BOX_OptLayout wsAfterHead, BOX_GroupOption elem1, BOX_GroupOption elem2, BOX_GroupOption elem3) {
  return BOX_makeGroupOptionGroupOptionsMany(elem1, wsAfterHead, BOX_makeGroupOptionGroupOptions2(wsAfterHead, elem2, elem3));
}

/**
 * Builds a BOX_GroupOptionGroupOptions of 4 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem2 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem3 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem4 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions consisting of 4 BOX_GroupOptions
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptions4(BOX_OptLayout wsAfterHead, BOX_GroupOption elem1, BOX_GroupOption elem2, BOX_GroupOption elem3, BOX_GroupOption elem4) {
  return BOX_makeGroupOptionGroupOptionsMany(elem1, wsAfterHead, BOX_makeGroupOptionGroupOptions3(wsAfterHead, elem2, elem3, elem4));
}

/**
 * Builds a BOX_GroupOptionGroupOptions of 5 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem2 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem3 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem4 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem5 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions consisting of 5 BOX_GroupOptions
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptions5(BOX_OptLayout wsAfterHead, BOX_GroupOption elem1, BOX_GroupOption elem2, BOX_GroupOption elem3, BOX_GroupOption elem4, BOX_GroupOption elem5) {
  return BOX_makeGroupOptionGroupOptionsMany(elem1, wsAfterHead, BOX_makeGroupOptionGroupOptions4(wsAfterHead, elem2, elem3, elem4, elem5));
}

/**
 * Builds a BOX_GroupOptionGroupOptions of 6 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem2 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem3 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem4 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem5 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \param[in] elem6 One BOX_GroupOption element of the new BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions consisting of 6 BOX_GroupOptions
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptions6(BOX_OptLayout wsAfterHead, BOX_GroupOption elem1, BOX_GroupOption elem2, BOX_GroupOption elem3, BOX_GroupOption elem4, BOX_GroupOption elem5, BOX_GroupOption elem6) {
  return BOX_makeGroupOptionGroupOptionsMany(elem1, wsAfterHead, BOX_makeGroupOptionGroupOptions5(wsAfterHead, elem2, elem3, elem4, elem5, elem6));
}

/**
 * Retrieve the number of elements in a BOX_SpaceOptionOptions. 
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return The number of elements in #arg, excluding any separators
 */
int BOX_getSpaceOptionOptionsLength (BOX_SpaceOptionOptions arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 2) + 1;
}

/**
 * Reverses the elements of a BOX_SpaceOptionOptions. Note that separators are reversed with the list, but the order in which each set of separators inbetween two elements occurs does not change
 * \param[in] arg BOX_SpaceOptionOptions to be reversed
 * \return #arg reversed
 */
BOX_SpaceOptionOptions BOX_reverseSpaceOptionOptions(BOX_SpaceOptionOptions arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (BOX_SpaceOptionOptions) result;
}

/**
 * Append a BOX_SpaceOption to the end of a BOX_SpaceOptionOptions. 
 * \param[in] arg BOX_SpaceOptionOptions to append the BOX_SpaceOption to
 * \param[in] elem BOX_SpaceOption to be appended
 * \return new BOX_SpaceOptionOptions with #elem appended after the separators
 */
BOX_SpaceOptionOptions BOX_appendSpaceOptionOptions(BOX_SpaceOptionOptions arg0, BOX_OptLayout wsAfterHead, BOX_SpaceOption arg1) {
  return BOX_concatSpaceOptionOptions(arg0, wsAfterHead, BOX_makeSpaceOptionOptionsSingle(arg1));
}

/**
 * Concatenate two BOX_SpaceOptionOptionss. 
 * \param[in] arg0 first BOX_SpaceOptionOptions
 * \param[in] arg1 second BOX_SpaceOptionOptions
 * \return BOX_SpaceOptionOptions with the elements of #arg0 before the elements of #arg1, with the separators in between.
 */
BOX_SpaceOptionOptions BOX_concatSpaceOptionOptions(BOX_SpaceOptionOptions arg0, BOX_OptLayout wsAfterHead, BOX_SpaceOptionOptions arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = BOX_makeSpaceOptionOptionsMany((BOX_SpaceOption)ATgetFirst((ATermList) arg0), wsAfterHead,  arg1);
  arg1 = (BOX_SpaceOptionOptions) ATgetNext((ATermList) arg1);
  return (BOX_SpaceOptionOptions) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_SpaceOptionOptions. 
 * \param[in] arg BOX_SpaceOptionOptions to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_SpaceOptionOptions with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_SpaceOptionOptions BOX_sliceSpaceOptionOptions(BOX_SpaceOptionOptions arg, int start, int end) {
  return (BOX_SpaceOptionOptions) ATgetSlice((ATermList) arg, start * 2, end * 2);
}

/**
 * Retrieve the BOX_SpaceOption at #index from a BOX_SpaceOptionOptions. 
 * \param[in] arg BOX_SpaceOptionOptions to retrieve the BOX_SpaceOption from
 * \param[in] index index to use to point in the BOX_SpaceOptionOptions
 * \return BOX_SpaceOption at position #index in #arg
 */
BOX_SpaceOption BOX_getSpaceOptionOptionsSpaceOptionAt(BOX_SpaceOptionOptions arg, int index) {
 return (BOX_SpaceOption)ATelementAt((ATermList) arg,index * 2);
}

/**
 * Replace the BOX_SpaceOption at #index from a BOX_SpaceOptionOptions by a new one. 
 * \param[in] arg BOX_SpaceOptionOptions to retrieve the BOX_SpaceOption from
 * \param[in] elem new BOX_SpaceOption to replace another
 * \param[in] index index to use to point in the BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptionswith #elem replaced in #arg at position #index
 */
BOX_SpaceOptionOptions BOX_replaceSpaceOptionOptionsSpaceOptionAt(BOX_SpaceOptionOptions arg, BOX_SpaceOption elem, int index) {
 return (BOX_SpaceOptionOptions) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 2);
}

/**
 * Builds a BOX_SpaceOptionOptions of 2 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem2 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions consisting of 2 BOX_SpaceOptions
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptions2(BOX_OptLayout wsAfterHead, BOX_SpaceOption elem1, BOX_SpaceOption elem2) {
  return BOX_makeSpaceOptionOptionsMany(elem1, wsAfterHead, BOX_makeSpaceOptionOptionsSingle(elem2));
}

/**
 * Builds a BOX_SpaceOptionOptions of 3 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem2 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem3 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions consisting of 3 BOX_SpaceOptions
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptions3(BOX_OptLayout wsAfterHead, BOX_SpaceOption elem1, BOX_SpaceOption elem2, BOX_SpaceOption elem3) {
  return BOX_makeSpaceOptionOptionsMany(elem1, wsAfterHead, BOX_makeSpaceOptionOptions2(wsAfterHead, elem2, elem3));
}

/**
 * Builds a BOX_SpaceOptionOptions of 4 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem2 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem3 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem4 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions consisting of 4 BOX_SpaceOptions
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptions4(BOX_OptLayout wsAfterHead, BOX_SpaceOption elem1, BOX_SpaceOption elem2, BOX_SpaceOption elem3, BOX_SpaceOption elem4) {
  return BOX_makeSpaceOptionOptionsMany(elem1, wsAfterHead, BOX_makeSpaceOptionOptions3(wsAfterHead, elem2, elem3, elem4));
}

/**
 * Builds a BOX_SpaceOptionOptions of 5 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem2 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem3 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem4 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem5 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions consisting of 5 BOX_SpaceOptions
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptions5(BOX_OptLayout wsAfterHead, BOX_SpaceOption elem1, BOX_SpaceOption elem2, BOX_SpaceOption elem3, BOX_SpaceOption elem4, BOX_SpaceOption elem5) {
  return BOX_makeSpaceOptionOptionsMany(elem1, wsAfterHead, BOX_makeSpaceOptionOptions4(wsAfterHead, elem2, elem3, elem4, elem5));
}

/**
 * Builds a BOX_SpaceOptionOptions of 6 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem2 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem3 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem4 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem5 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \param[in] elem6 One BOX_SpaceOption element of the new BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions consisting of 6 BOX_SpaceOptions
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptions6(BOX_OptLayout wsAfterHead, BOX_SpaceOption elem1, BOX_SpaceOption elem2, BOX_SpaceOption elem3, BOX_SpaceOption elem4, BOX_SpaceOption elem5, BOX_SpaceOption elem6) {
  return BOX_makeSpaceOptionOptionsMany(elem1, wsAfterHead, BOX_makeSpaceOptionOptions5(wsAfterHead, elem2, elem3, elem4, elem5, elem6));
}

/**
 * Retrieve the number of elements in a BOX_AlignmentOptionList. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return The number of elements in #arg, excluding any separators
 */
int BOX_getAlignmentOptionListLength (BOX_AlignmentOptionList arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 4) + 1;
}

/**
 * Reverses the elements of a BOX_AlignmentOptionList. Note that separators are reversed with the list, but the order in which each set of separators inbetween two elements occurs does not change
 * \param[in] arg BOX_AlignmentOptionList to be reversed
 * \return #arg reversed
 */
BOX_AlignmentOptionList BOX_reverseAlignmentOptionList(BOX_AlignmentOptionList arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATerm sep1;
  ATerm sep2;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep2);
    result = ATinsert(result, sep1);
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
  sep1 = ATgetFirst(list);
  list = ATgetNext(list);
  sep2 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (BOX_AlignmentOptionList) result;
}

/**
 * Append a BOX_AlignmentOption to the end of a BOX_AlignmentOptionList. 
 * \param[in] arg BOX_AlignmentOptionList to append the BOX_AlignmentOption to
 * \param[in] elem BOX_AlignmentOption to be appended
 * \return new BOX_AlignmentOptionList with #elem appended after the separators
 */
BOX_AlignmentOptionList BOX_appendAlignmentOptionList(BOX_AlignmentOptionList arg0, BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption arg1) {
  return BOX_concatAlignmentOptionList(arg0, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionListSingle(arg1));
}

/**
 * Concatenate two BOX_AlignmentOptionLists. 
 * \param[in] arg0 first BOX_AlignmentOptionList
 * \param[in] arg1 second BOX_AlignmentOptionList
 * \return BOX_AlignmentOptionList with the elements of #arg0 before the elements of #arg1, with the separators in between.
 */
BOX_AlignmentOptionList BOX_concatAlignmentOptionList(BOX_AlignmentOptionList arg0, BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOptionList arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = BOX_makeAlignmentOptionListMany((BOX_AlignmentOption)ATgetFirst((ATermList) arg0), wsAfterHead, wsAfterSep,  arg1);
  arg1 = (BOX_AlignmentOptionList) ATgetNext((ATermList) arg1);
  return (BOX_AlignmentOptionList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_AlignmentOptionList. 
 * \param[in] arg BOX_AlignmentOptionList to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_AlignmentOptionList with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_AlignmentOptionList BOX_sliceAlignmentOptionList(BOX_AlignmentOptionList arg, int start, int end) {
  return (BOX_AlignmentOptionList) ATgetSlice((ATermList) arg, start * 4, end * 4);
}

/**
 * Retrieve the BOX_AlignmentOption at #index from a BOX_AlignmentOptionList. 
 * \param[in] arg BOX_AlignmentOptionList to retrieve the BOX_AlignmentOption from
 * \param[in] index index to use to point in the BOX_AlignmentOptionList
 * \return BOX_AlignmentOption at position #index in #arg
 */
BOX_AlignmentOption BOX_getAlignmentOptionListAlignmentOptionAt(BOX_AlignmentOptionList arg, int index) {
 return (BOX_AlignmentOption)ATelementAt((ATermList) arg,index * 4);
}

/**
 * Replace the BOX_AlignmentOption at #index from a BOX_AlignmentOptionList by a new one. 
 * \param[in] arg BOX_AlignmentOptionList to retrieve the BOX_AlignmentOption from
 * \param[in] elem new BOX_AlignmentOption to replace another
 * \param[in] index index to use to point in the BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionListwith #elem replaced in #arg at position #index
 */
BOX_AlignmentOptionList BOX_replaceAlignmentOptionListAlignmentOptionAt(BOX_AlignmentOptionList arg, BOX_AlignmentOption elem, int index) {
 return (BOX_AlignmentOptionList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 4);
}

/**
 * Builds a BOX_AlignmentOptionList of 2 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem2 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList consisting of 2 BOX_AlignmentOptions
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionList2(BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption elem1, BOX_AlignmentOption elem2) {
  return BOX_makeAlignmentOptionListMany(elem1, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionListSingle(elem2));
}

/**
 * Builds a BOX_AlignmentOptionList of 3 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem2 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem3 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList consisting of 3 BOX_AlignmentOptions
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionList3(BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption elem1, BOX_AlignmentOption elem2, BOX_AlignmentOption elem3) {
  return BOX_makeAlignmentOptionListMany(elem1, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionList2(wsAfterHead, wsAfterSep, elem2, elem3));
}

/**
 * Builds a BOX_AlignmentOptionList of 4 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem2 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem3 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem4 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList consisting of 4 BOX_AlignmentOptions
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionList4(BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption elem1, BOX_AlignmentOption elem2, BOX_AlignmentOption elem3, BOX_AlignmentOption elem4) {
  return BOX_makeAlignmentOptionListMany(elem1, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionList3(wsAfterHead, wsAfterSep, elem2, elem3, elem4));
}

/**
 * Builds a BOX_AlignmentOptionList of 5 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem2 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem3 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem4 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem5 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList consisting of 5 BOX_AlignmentOptions
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionList5(BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption elem1, BOX_AlignmentOption elem2, BOX_AlignmentOption elem3, BOX_AlignmentOption elem4, BOX_AlignmentOption elem5) {
  return BOX_makeAlignmentOptionListMany(elem1, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionList4(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5));
}

/**
 * Builds a BOX_AlignmentOptionList of 6 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem2 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem3 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem4 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem5 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \param[in] elem6 One BOX_AlignmentOption element of the new BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList consisting of 6 BOX_AlignmentOptions
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionList6(BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOption elem1, BOX_AlignmentOption elem2, BOX_AlignmentOption elem3, BOX_AlignmentOption elem4, BOX_AlignmentOption elem5, BOX_AlignmentOption elem6) {
  return BOX_makeAlignmentOptionListMany(elem1, wsAfterHead, wsAfterSep, BOX_makeAlignmentOptionList5(wsAfterHead, wsAfterSep, elem2, elem3, elem4, elem5, elem6));
}

/**
 * Retrieve the number of elements in a BOX_BoxList. 
 * \param[in] arg input BOX_BoxList
 * \return The number of elements in #arg, excluding any separators
 */
int BOX_getBoxListLength (BOX_BoxList arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 2) + 1;
}

/**
 * Reverses the elements of a BOX_BoxList. Note that separators are reversed with the list, but the order in which each set of separators inbetween two elements occurs does not change
 * \param[in] arg BOX_BoxList to be reversed
 * \return #arg reversed
 */
BOX_BoxList BOX_reverseBoxList(BOX_BoxList arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (BOX_BoxList) result;
}

/**
 * Append a BOX_Box to the end of a BOX_BoxList. 
 * \param[in] arg BOX_BoxList to append the BOX_Box to
 * \param[in] elem BOX_Box to be appended
 * \return new BOX_BoxList with #elem appended after the separators
 */
BOX_BoxList BOX_appendBoxList(BOX_BoxList arg0, BOX_OptLayout wsAfterHead, BOX_Box arg1) {
  return BOX_concatBoxList(arg0, wsAfterHead, BOX_makeBoxListSingle(arg1));
}

/**
 * Concatenate two BOX_BoxLists. 
 * \param[in] arg0 first BOX_BoxList
 * \param[in] arg1 second BOX_BoxList
 * \return BOX_BoxList with the elements of #arg0 before the elements of #arg1, with the separators in between.
 */
BOX_BoxList BOX_concatBoxList(BOX_BoxList arg0, BOX_OptLayout wsAfterHead, BOX_BoxList arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = BOX_makeBoxListMany((BOX_Box)ATgetFirst((ATermList) arg0), wsAfterHead,  arg1);
  arg1 = (BOX_BoxList) ATgetNext((ATermList) arg1);
  return (BOX_BoxList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_BoxList. 
 * \param[in] arg BOX_BoxList to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_BoxList with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_BoxList BOX_sliceBoxList(BOX_BoxList arg, int start, int end) {
  return (BOX_BoxList) ATgetSlice((ATermList) arg, start * 2, end * 2);
}

/**
 * Retrieve the BOX_Box at #index from a BOX_BoxList. 
 * \param[in] arg BOX_BoxList to retrieve the BOX_Box from
 * \param[in] index index to use to point in the BOX_BoxList
 * \return BOX_Box at position #index in #arg
 */
BOX_Box BOX_getBoxListBoxAt(BOX_BoxList arg, int index) {
 return (BOX_Box)ATelementAt((ATermList) arg,index * 2);
}

/**
 * Replace the BOX_Box at #index from a BOX_BoxList by a new one. 
 * \param[in] arg BOX_BoxList to retrieve the BOX_Box from
 * \param[in] elem new BOX_Box to replace another
 * \param[in] index index to use to point in the BOX_BoxList
 * \return A new BOX_BoxListwith #elem replaced in #arg at position #index
 */
BOX_BoxList BOX_replaceBoxListBoxAt(BOX_BoxList arg, BOX_Box elem, int index) {
 return (BOX_BoxList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 2);
}

/**
 * Builds a BOX_BoxList of 2 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem2 One BOX_Box element of the new BOX_BoxList
 * \return A new BOX_BoxList consisting of 2 BOX_Boxs
 */
BOX_BoxList BOX_makeBoxList2(BOX_OptLayout wsAfterHead, BOX_Box elem1, BOX_Box elem2) {
  return BOX_makeBoxListMany(elem1, wsAfterHead, BOX_makeBoxListSingle(elem2));
}

/**
 * Builds a BOX_BoxList of 3 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem2 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem3 One BOX_Box element of the new BOX_BoxList
 * \return A new BOX_BoxList consisting of 3 BOX_Boxs
 */
BOX_BoxList BOX_makeBoxList3(BOX_OptLayout wsAfterHead, BOX_Box elem1, BOX_Box elem2, BOX_Box elem3) {
  return BOX_makeBoxListMany(elem1, wsAfterHead, BOX_makeBoxList2(wsAfterHead, elem2, elem3));
}

/**
 * Builds a BOX_BoxList of 4 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem2 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem3 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem4 One BOX_Box element of the new BOX_BoxList
 * \return A new BOX_BoxList consisting of 4 BOX_Boxs
 */
BOX_BoxList BOX_makeBoxList4(BOX_OptLayout wsAfterHead, BOX_Box elem1, BOX_Box elem2, BOX_Box elem3, BOX_Box elem4) {
  return BOX_makeBoxListMany(elem1, wsAfterHead, BOX_makeBoxList3(wsAfterHead, elem2, elem3, elem4));
}

/**
 * Builds a BOX_BoxList of 5 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem2 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem3 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem4 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem5 One BOX_Box element of the new BOX_BoxList
 * \return A new BOX_BoxList consisting of 5 BOX_Boxs
 */
BOX_BoxList BOX_makeBoxList5(BOX_OptLayout wsAfterHead, BOX_Box elem1, BOX_Box elem2, BOX_Box elem3, BOX_Box elem4, BOX_Box elem5) {
  return BOX_makeBoxListMany(elem1, wsAfterHead, BOX_makeBoxList4(wsAfterHead, elem2, elem3, elem4, elem5));
}

/**
 * Builds a BOX_BoxList of 6 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem2 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem3 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem4 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem5 One BOX_Box element of the new BOX_BoxList
 * \param[in] elem6 One BOX_Box element of the new BOX_BoxList
 * \return A new BOX_BoxList consisting of 6 BOX_Boxs
 */
BOX_BoxList BOX_makeBoxList6(BOX_OptLayout wsAfterHead, BOX_Box elem1, BOX_Box elem2, BOX_Box elem3, BOX_Box elem4, BOX_Box elem5, BOX_Box elem6) {
  return BOX_makeBoxListMany(elem1, wsAfterHead, BOX_makeBoxList5(wsAfterHead, elem2, elem3, elem4, elem5, elem6));
}

/**
 * Retrieve the number of elements in a BOX_FontOptionList. 
 * \param[in] arg input BOX_FontOptionList
 * \return The number of elements in #arg, excluding any separators
 */
int BOX_getFontOptionListLength (BOX_FontOptionList arg) {
  if (ATisEmpty((ATermList) arg)) {
    return 0;
  }
  return (ATgetLength((ATermList) arg) / 2) + 1;
}

/**
 * Reverses the elements of a BOX_FontOptionList. Note that separators are reversed with the list, but the order in which each set of separators inbetween two elements occurs does not change
 * \param[in] arg BOX_FontOptionList to be reversed
 * \return #arg reversed
 */
BOX_FontOptionList BOX_reverseFontOptionList(BOX_FontOptionList arg) {
  ATermList list = (ATermList) arg;
  ATerm head;
  ATerm sep0;
  ATermList result;

 if (ATisEmpty(list) || ATgetLength(list) == 1) {
    return arg;
  }

  result = ATmakeList1(ATgetFirst(list));
      list = ATgetNext(list);
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);

  while (!ATisEmpty(list)) {
    result = ATinsert(result, sep0);

   head = ATgetFirst(list);
   result = ATinsert(result, head);
    list = ATgetNext(list);

   if (!ATisEmpty(list)) {
  sep0 = ATgetFirst(list);
  list = ATgetNext(list);
   }
  }

  return (BOX_FontOptionList) result;
}

/**
 * Append a BOX_FontOption to the end of a BOX_FontOptionList. 
 * \param[in] arg BOX_FontOptionList to append the BOX_FontOption to
 * \param[in] elem BOX_FontOption to be appended
 * \return new BOX_FontOptionList with #elem appended after the separators
 */
BOX_FontOptionList BOX_appendFontOptionList(BOX_FontOptionList arg0, BOX_OptLayout wsAfterHead, BOX_FontOption arg1) {
  return BOX_concatFontOptionList(arg0, wsAfterHead, BOX_makeFontOptionListSingle(arg1));
}

/**
 * Concatenate two BOX_FontOptionLists. 
 * \param[in] arg0 first BOX_FontOptionList
 * \param[in] arg1 second BOX_FontOptionList
 * \return BOX_FontOptionList with the elements of #arg0 before the elements of #arg1, with the separators in between.
 */
BOX_FontOptionList BOX_concatFontOptionList(BOX_FontOptionList arg0, BOX_OptLayout wsAfterHead, BOX_FontOptionList arg1) {
  if (ATisEmpty((ATermList) arg0)) {
    return arg1;
  }
  arg1 = BOX_makeFontOptionListMany((BOX_FontOption)ATgetFirst((ATermList) arg0), wsAfterHead,  arg1);
  arg1 = (BOX_FontOptionList) ATgetNext((ATermList) arg1);
  return (BOX_FontOptionList) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_FontOptionList. 
 * \param[in] arg BOX_FontOptionList to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_FontOptionList with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_FontOptionList BOX_sliceFontOptionList(BOX_FontOptionList arg, int start, int end) {
  return (BOX_FontOptionList) ATgetSlice((ATermList) arg, start * 2, end * 2);
}

/**
 * Retrieve the BOX_FontOption at #index from a BOX_FontOptionList. 
 * \param[in] arg BOX_FontOptionList to retrieve the BOX_FontOption from
 * \param[in] index index to use to point in the BOX_FontOptionList
 * \return BOX_FontOption at position #index in #arg
 */
BOX_FontOption BOX_getFontOptionListFontOptionAt(BOX_FontOptionList arg, int index) {
 return (BOX_FontOption)ATelementAt((ATermList) arg,index * 2);
}

/**
 * Replace the BOX_FontOption at #index from a BOX_FontOptionList by a new one. 
 * \param[in] arg BOX_FontOptionList to retrieve the BOX_FontOption from
 * \param[in] elem new BOX_FontOption to replace another
 * \param[in] index index to use to point in the BOX_FontOptionList
 * \return A new BOX_FontOptionListwith #elem replaced in #arg at position #index
 */
BOX_FontOptionList BOX_replaceFontOptionListFontOptionAt(BOX_FontOptionList arg, BOX_FontOption elem, int index) {
 return (BOX_FontOptionList) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index * 2);
}

/**
 * Builds a BOX_FontOptionList of 2 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem2 One BOX_FontOption element of the new BOX_FontOptionList
 * \return A new BOX_FontOptionList consisting of 2 BOX_FontOptions
 */
BOX_FontOptionList BOX_makeFontOptionList2(BOX_OptLayout wsAfterHead, BOX_FontOption elem1, BOX_FontOption elem2) {
  return BOX_makeFontOptionListMany(elem1, wsAfterHead, BOX_makeFontOptionListSingle(elem2));
}

/**
 * Builds a BOX_FontOptionList of 3 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem2 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem3 One BOX_FontOption element of the new BOX_FontOptionList
 * \return A new BOX_FontOptionList consisting of 3 BOX_FontOptions
 */
BOX_FontOptionList BOX_makeFontOptionList3(BOX_OptLayout wsAfterHead, BOX_FontOption elem1, BOX_FontOption elem2, BOX_FontOption elem3) {
  return BOX_makeFontOptionListMany(elem1, wsAfterHead, BOX_makeFontOptionList2(wsAfterHead, elem2, elem3));
}

/**
 * Builds a BOX_FontOptionList of 4 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem2 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem3 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem4 One BOX_FontOption element of the new BOX_FontOptionList
 * \return A new BOX_FontOptionList consisting of 4 BOX_FontOptions
 */
BOX_FontOptionList BOX_makeFontOptionList4(BOX_OptLayout wsAfterHead, BOX_FontOption elem1, BOX_FontOption elem2, BOX_FontOption elem3, BOX_FontOption elem4) {
  return BOX_makeFontOptionListMany(elem1, wsAfterHead, BOX_makeFontOptionList3(wsAfterHead, elem2, elem3, elem4));
}

/**
 * Builds a BOX_FontOptionList of 5 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem2 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem3 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem4 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem5 One BOX_FontOption element of the new BOX_FontOptionList
 * \return A new BOX_FontOptionList consisting of 5 BOX_FontOptions
 */
BOX_FontOptionList BOX_makeFontOptionList5(BOX_OptLayout wsAfterHead, BOX_FontOption elem1, BOX_FontOption elem2, BOX_FontOption elem3, BOX_FontOption elem4, BOX_FontOption elem5) {
  return BOX_makeFontOptionListMany(elem1, wsAfterHead, BOX_makeFontOptionList4(wsAfterHead, elem2, elem3, elem4, elem5));
}

/**
 * Builds a BOX_FontOptionList of 6 consecutive elements. The elements are separated.
 * \param[in] elem1 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem2 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem3 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem4 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem5 One BOX_FontOption element of the new BOX_FontOptionList
 * \param[in] elem6 One BOX_FontOption element of the new BOX_FontOptionList
 * \return A new BOX_FontOptionList consisting of 6 BOX_FontOptions
 */
BOX_FontOptionList BOX_makeFontOptionList6(BOX_OptLayout wsAfterHead, BOX_FontOption elem1, BOX_FontOption elem2, BOX_FontOption elem3, BOX_FontOption elem4, BOX_FontOption elem5, BOX_FontOption elem6) {
  return BOX_makeFontOptionListMany(elem1, wsAfterHead, BOX_makeFontOptionList5(wsAfterHead, elem2, elem3, elem4, elem5, elem6));
}

/**
 * Retrieve the length of a BOX_LexStrCharChars. 
 * \param[in] arg input BOX_LexStrCharChars
 * \return The number of elements in the BOX_LexStrCharChars
 */
int BOX_getLexStrCharCharsLength (BOX_LexStrCharChars arg) {
  return ATgetLength((ATermList) arg);
}

/**
 * Reverse a BOX_LexStrCharChars. 
 * \param[in] arg BOX_LexStrCharChars to be reversed
 * \return a reversed #arg
 */
BOX_LexStrCharChars BOX_reverseLexStrCharChars(BOX_LexStrCharChars arg) {
  return (BOX_LexStrCharChars) ATreverse((ATermList) arg);
}

/**
 * Append a BOX_LexStrChar to the end of a BOX_LexStrCharChars. 
 * \param[in] arg BOX_LexStrCharChars to append the BOX_LexStrChar to
 * \param[in] elem BOX_LexStrChar to be appended
 * \return new BOX_LexStrCharChars with #elem appended
 */
BOX_LexStrCharChars BOX_appendLexStrCharChars(BOX_LexStrCharChars arg, BOX_LexStrChar elem) {
  return (BOX_LexStrCharChars) ATappend((ATermList) arg, (ATerm) ((ATerm) elem));
}

/**
 * Concatenate two BOX_LexStrCharCharss. 
 * \param[in] arg0 first BOX_LexStrCharChars
 * \param[in] arg1 second BOX_LexStrCharChars
 * \return BOX_LexStrCharChars with the elements of #arg0 before the elements of #arg1
 */
BOX_LexStrCharChars BOX_concatLexStrCharChars(BOX_LexStrCharChars arg0, BOX_LexStrCharChars arg1) {
  return (BOX_LexStrCharChars) ATconcat((ATermList) arg0, (ATermList) arg1);
}

/**
 * Extract a sublist from a BOX_LexStrCharChars. 
 * \param[in] arg BOX_LexStrCharChars to extract a slice from
 * \param[in] start inclusive start index of the sublist
 * \param[in] end exclusive end index of the sublist
 * \return new BOX_LexStrCharChars with a first element the element at index #start from #arg, and as last element the element at index (#end - 1).
 */
BOX_LexStrCharChars BOX_sliceLexStrCharChars(BOX_LexStrCharChars arg, int start, int end) {
  return (BOX_LexStrCharChars) ATgetSlice((ATermList) arg, start, end);
}

/**
 * Retrieve the BOX_LexStrChar at #index from a BOX_LexStrCharChars. 
 * \param[in] arg BOX_LexStrCharChars to retrieve the BOX_LexStrChar from
 * \param[in] index index to use to point in the BOX_LexStrCharChars
 * \return BOX_LexStrChar at position #index in #arg
 */
BOX_LexStrChar BOX_getLexStrCharCharsLexStrCharAt(BOX_LexStrCharChars arg, int index) {
 return (BOX_LexStrChar)ATelementAt((ATermList) arg,index);
}

/**
 * Replace the BOX_LexStrChar at #index from a BOX_LexStrCharChars by a new one. 
 * \param[in] arg BOX_LexStrCharChars to retrieve the BOX_LexStrChar from
 * \param[in] elem new BOX_LexStrChar to replace another
 * \param[in] index index to use to point in the BOX_LexStrCharChars
 * \return A new BOX_LexStrCharCharswith #elem replaced in #arg at position #index
 */
BOX_LexStrCharChars BOX_replaceLexStrCharCharsLexStrCharAt(BOX_LexStrCharChars arg, BOX_LexStrChar elem, int index) {
 return (BOX_LexStrCharChars) ATreplace((ATermList) arg, (ATerm) ((ATerm) elem), index);
}

/**
 * Builds a BOX_LexStrCharChars of 2 consecutive elements. 
 * \param[in] elem1 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem2 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \return A new BOX_LexStrCharChars consisting of 2 BOX_LexStrChars
 */
BOX_LexStrCharChars BOX_makeLexStrCharChars2(BOX_LexStrChar elem1, BOX_LexStrChar elem2) {
  return (BOX_LexStrCharChars) ATmakeList2((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2));
}

/**
 * Builds a BOX_LexStrCharChars of 3 consecutive elements. 
 * \param[in] elem1 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem2 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem3 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \return A new BOX_LexStrCharChars consisting of 3 BOX_LexStrChars
 */
BOX_LexStrCharChars BOX_makeLexStrCharChars3(BOX_LexStrChar elem1, BOX_LexStrChar elem2, BOX_LexStrChar elem3) {
  return (BOX_LexStrCharChars) ATmakeList3((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3));
}

/**
 * Builds a BOX_LexStrCharChars of 4 consecutive elements. 
 * \param[in] elem1 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem2 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem3 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem4 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \return A new BOX_LexStrCharChars consisting of 4 BOX_LexStrChars
 */
BOX_LexStrCharChars BOX_makeLexStrCharChars4(BOX_LexStrChar elem1, BOX_LexStrChar elem2, BOX_LexStrChar elem3, BOX_LexStrChar elem4) {
  return (BOX_LexStrCharChars) ATmakeList4((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4));
}

/**
 * Builds a BOX_LexStrCharChars of 5 consecutive elements. 
 * \param[in] elem1 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem2 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem3 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem4 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem5 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \return A new BOX_LexStrCharChars consisting of 5 BOX_LexStrChars
 */
BOX_LexStrCharChars BOX_makeLexStrCharChars5(BOX_LexStrChar elem1, BOX_LexStrChar elem2, BOX_LexStrChar elem3, BOX_LexStrChar elem4, BOX_LexStrChar elem5) {
  return (BOX_LexStrCharChars) ATmakeList5((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5));
}

/**
 * Builds a BOX_LexStrCharChars of 6 consecutive elements. 
 * \param[in] elem1 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem2 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem3 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem4 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem5 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \param[in] elem6 One BOX_LexStrChar element of the new BOX_LexStrCharChars
 * \return A new BOX_LexStrCharChars consisting of 6 BOX_LexStrChars
 */
BOX_LexStrCharChars BOX_makeLexStrCharChars6(BOX_LexStrChar elem1, BOX_LexStrChar elem2, BOX_LexStrChar elem3, BOX_LexStrChar elem4, BOX_LexStrChar elem5, BOX_LexStrChar elem6) {
  return (BOX_LexStrCharChars) ATmakeList6((ATerm) ((ATerm) elem1), (ATerm) ((ATerm) elem2), (ATerm) ((ATerm) elem3), (ATerm) ((ATerm) elem4), (ATerm) ((ATerm) elem5), (ATerm) ((ATerm) elem6));
}

/**
 * Constructs a Absent of type BOX_OptLayout. Like all ATerm types, BOX_OptLayouts are maximally shared.
 * \return A pointer to a Absent, either newly constructed or shared
 */
BOX_OptLayout BOX_makeOptLayoutAbsent(void) {
  return (BOX_OptLayout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATempty, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATempty);
}
/**
 * Constructs a Present of type BOX_OptLayout. Like all ATerm types, BOX_OptLayouts are maximally shared.
 * \param[in] layout a child of the new Present
 * \return A pointer to a Present, either newly constructed or shared
 */
BOX_OptLayout BOX_makeOptLayoutPresent(BOX_Layout layout) {
  return (BOX_OptLayout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl0(BOX_afun4))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm) layout));
}
/**
 * Constructs a Lex-to-cf of type BOX_Layout. Like all ATerm types, BOX_Layouts are maximally shared.
 * \param[in] list a child of the new Lex-to-cf
 * \return A pointer to a Lex-to-cf, either newly constructed or shared
 */
BOX_Layout BOX_makeLayoutLexToCf(BOX_LexLayoutList list) {
  return (BOX_Layout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl0(BOX_afun4)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm) list)));
}
/**
 * Constructs a empty of type BOX_LexLayoutList. Like all ATerm types, BOX_LexLayoutLists are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_LexLayoutList BOX_makeLexLayoutListEmpty(void) {
  return (BOX_LexLayoutList)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_LexLayoutList. Like all ATerm types, BOX_LexLayoutLists are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_LexLayoutList BOX_makeLexLayoutListSingle(BOX_LexLayout head) {
  return (BOX_LexLayoutList)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_LexLayoutList. Like all ATerm types, BOX_LexLayoutLists are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_LexLayoutList BOX_makeLexLayoutListMany(BOX_LexLayout head, BOX_LexLayoutList tail) {
  return (BOX_LexLayoutList)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}
/**
 * Constructs a Box of type BOX_Start. Like all ATerm types, BOX_Starts are maximally shared.
 * \param[in] wsBefore a child of the new Box
 * \param[in] topBox a child of the new Box
 * \param[in] wsAfter a child of the new Box
 * \param[in] ambCnt a child of the new Box
 * \return A pointer to a Box, either newly constructed or shared
 */
BOX_Start BOX_makeStartBox(BOX_OptLayout wsBefore, BOX_Box topBox, BOX_OptLayout wsAfter, int ambCnt) {
  return (BOX_Start)(ATerm)ATmakeAppl2(BOX_afun9, (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun11)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun12)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm) wsAfter), (ATerm) topBox), (ATerm) wsBefore)), (ATerm) (ATerm) ATmakeInt(ambCnt));
}
/**
 * Constructs a size of type BOX_GroupOption. Like all ATerm types, BOX_GroupOptions are maximally shared.
 * \param[in] wsAfterGs a child of the new size
 * \param[in] wsAfterEquals a child of the new size
 * \param[in] NatCon a child of the new size
 * \return A pointer to a size, either newly constructed or shared
 */
BOX_GroupOption BOX_makeGroupOptionSize(BOX_OptLayout wsAfterGs, BOX_OptLayout wsAfterEquals, BOX_NatCon NatCon) {
  return (BOX_GroupOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun16))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun21)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) NatCon), (ATerm) wsAfterEquals), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm) wsAfterGs), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(103)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun16)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(115)), (ATerm)ATmakeInt(103)))));
}
/**
 * Constructs a operator of type BOX_GroupOption. Like all ATerm types, BOX_GroupOptions are maximally shared.
 * \param[in] wsAfterOp a child of the new operator
 * \param[in] wsAfterEquals a child of the new operator
 * \param[in] BoxOperator a child of the new operator
 * \return A pointer to a operator, either newly constructed or shared
 */
BOX_GroupOption BOX_makeGroupOptionOperator(BOX_OptLayout wsAfterOp, BOX_OptLayout wsAfterEquals, BOX_BoxOperator BoxOperator) {
  return (BOX_GroupOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun24))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun25)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) BoxOperator), (ATerm) wsAfterEquals), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm) wsAfterOp), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(112)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(111)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun24)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(112)), (ATerm)ATmakeInt(111)))));
}
/**
 * Constructs a grouping of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterG a child of the new grouping
 * \param[in] groupOptions a child of the new grouping
 * \return A pointer to a grouping, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorGrouping(BOX_OptLayout wsAfterG, BOX_GroupOptionGroupOptions groupOptions) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun27))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun28)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))))), (ATerm) groupOptions)), (ATerm) wsAfterG), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(71)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun27)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(71)))));
}
/**
 * Constructs a separated-list of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterSL a child of the new separated-list
 * \param[in] groupOptions a child of the new separated-list
 * \return A pointer to a separated-list, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorSeparatedList(BOX_OptLayout wsAfterSL, BOX_GroupOptionGroupOptions groupOptions) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun29))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun30)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun17))))), (ATerm) groupOptions)), (ATerm) wsAfterSL), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(76)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(83)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun29)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(76)), (ATerm)ATmakeInt(83)))));
}
/**
 * Constructs a comment of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \return A pointer to a comment, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorComment(void) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun31))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun32)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(79)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(67)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun31)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(77)), (ATerm)ATmakeInt(77)), (ATerm)ATmakeInt(79)), (ATerm)ATmakeInt(67)))));
}
/**
 * Constructs a alignment of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterA a child of the new alignment
 * \param[in] alignments a child of the new alignment
 * \param[in] wsAfterAlignments a child of the new alignment
 * \param[in] options a child of the new alignment
 * \return A pointer to a alignment, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorAlignment(BOX_OptLayout wsAfterA, BOX_AlignmentOptions alignments, BOX_OptLayout wsAfterAlignments, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun34)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun35))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun36)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterAlignments), (ATerm) alignments), (ATerm) wsAfterA), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(65)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun35)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(65)))));
}
/**
 * Constructs a row of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \return A pointer to a row, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorRow(void) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun37))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun38)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(82)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun37)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(82)))));
}
/**
 * Constructs a h of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterH a child of the new h
 * \param[in] options a child of the new h
 * \return A pointer to a h, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorH(BOX_OptLayout wsAfterH, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun39))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun40)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterH), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(72)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun39)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(72)))));
}
/**
 * Constructs a v of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterV a child of the new v
 * \param[in] options a child of the new v
 * \return A pointer to a v, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorV(BOX_OptLayout wsAfterV, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun41))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun42)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterV), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(86)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun41)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(86)))));
}
/**
 * Constructs a hv of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterHV a child of the new hv
 * \param[in] options a child of the new hv
 * \return A pointer to a hv, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorHv(BOX_OptLayout wsAfterHV, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun43))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun44)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterHV), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(86)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(72)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun43)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(86)), (ATerm)ATmakeInt(72)))));
}
/**
 * Constructs a hov of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterHOV a child of the new hov
 * \param[in] options a child of the new hov
 * \return A pointer to a hov, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorHov(BOX_OptLayout wsAfterHOV, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun45))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun46)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterHOV), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(86)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(79)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(72)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun45)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(86)), (ATerm)ATmakeInt(79)), (ATerm)ATmakeInt(72)))));
}
/**
 * Constructs a i of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterI a child of the new i
 * \param[in] options a child of the new i
 * \return A pointer to a i, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorI(BOX_OptLayout wsAfterI, BOX_SpaceOptionOptions options) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun47))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun48)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterI), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(73)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun47)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(73)))));
}
/**
 * Constructs a wd of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \return A pointer to a wd, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorWd(void) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun49))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun50)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(68)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(87)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun49)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(68)), (ATerm)ATmakeInt(87)))));
}
/**
 * Constructs a font of type BOX_BoxOperator. Like all ATerm types, BOX_BoxOperators are maximally shared.
 * \param[in] wsAfterF a child of the new font
 * \param[in] list a child of the new font
 * \return A pointer to a font, either newly constructed or shared
 */
BOX_BoxOperator BOX_makeBoxOperatorFont(BOX_OptLayout wsAfterF, BOX_FontOptionList list) {
  return (BOX_BoxOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun51))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun52))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun53)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun51))))), (ATerm) list)), (ATerm) wsAfterF), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(70)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun52)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(70)))));
}
/**
 * Constructs a empty of type BOX_GroupOptionGroupOptions. Like all ATerm types, BOX_GroupOptionGroupOptionss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptionsEmpty(void) {
  return (BOX_GroupOptionGroupOptions)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_GroupOptionGroupOptions. Like all ATerm types, BOX_GroupOptionGroupOptionss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptionsSingle(BOX_GroupOption head) {
  return (BOX_GroupOptionGroupOptions)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_GroupOptionGroupOptions. Like all ATerm types, BOX_GroupOptionGroupOptionss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] wsAfterHead a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_GroupOptionGroupOptions BOX_makeGroupOptionGroupOptionsMany(BOX_GroupOption head, BOX_OptLayout wsAfterHead, BOX_GroupOptionGroupOptions tail) {
  if (BOX_isGroupOptionGroupOptionsEmpty(tail)) {
    return BOX_makeGroupOptionGroupOptionsSingle(head);
  }
  return (BOX_GroupOptionGroupOptions)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterHead), (ATerm) head);
}
/**
 * Constructs a digits of type BOX_LexNatCon. Like all ATerm types, BOX_LexNatCons are maximally shared.
 * \param[in] list a child of the new digits
 * \return A pointer to a digits, either newly constructed or shared
 */
BOX_LexNatCon BOX_makeLexNatConDigits(const char* list) {
  return (BOX_LexNatCon)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun55)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))))), (ATerm) ((ATerm) BOX_stringToChars(list)))));
}
/**
 * Constructs a Lex-to-cf of type BOX_NatCon. Like all ATerm types, BOX_NatCons are maximally shared.
 * \param[in] NatCon a child of the new Lex-to-cf
 * \return A pointer to a Lex-to-cf, either newly constructed or shared
 */
BOX_NatCon BOX_makeNatConLexToCf(BOX_LexNatCon NatCon) {
  return (BOX_NatCon)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm) NatCon));
}
/**
 * Constructs a left of type BOX_AlignmentOption. Like all ATerm types, BOX_AlignmentOptions are maximally shared.
 * \param[in] wsAfterL a child of the new left
 * \param[in] options a child of the new left
 * \return A pointer to a left, either newly constructed or shared
 */
BOX_AlignmentOption BOX_makeAlignmentOptionLeft(BOX_OptLayout wsAfterL, BOX_SpaceOptionOptions options) {
  return (BOX_AlignmentOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun56))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun57))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun58)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterL), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun56)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))));
}
/**
 * Constructs a centre of type BOX_AlignmentOption. Like all ATerm types, BOX_AlignmentOptions are maximally shared.
 * \param[in] wsAfterC a child of the new centre
 * \param[in] options a child of the new centre
 * \return A pointer to a centre, either newly constructed or shared
 */
BOX_AlignmentOption BOX_makeAlignmentOptionCentre(BOX_OptLayout wsAfterC, BOX_SpaceOptionOptions options) {
  return (BOX_AlignmentOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun59))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun57))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun60)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterC), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun59)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))));
}
/**
 * Constructs a right of type BOX_AlignmentOption. Like all ATerm types, BOX_AlignmentOptions are maximally shared.
 * \param[in] wsAfterR a child of the new right
 * \param[in] options a child of the new right
 * \return A pointer to a right, either newly constructed or shared
 */
BOX_AlignmentOption BOX_makeAlignmentOptionRight(BOX_OptLayout wsAfterR, BOX_SpaceOptionOptions options) {
  return (BOX_AlignmentOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun61))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun57))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun62)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))))), (ATerm) options)), (ATerm) wsAfterR), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun61)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(114)))));
}
/**
 * Constructs a Default of type BOX_AlignmentOptions. Like all ATerm types, BOX_AlignmentOptionss are maximally shared.
 * \param[in] wsAfterParenOpen a child of the new Default
 * \param[in] list a child of the new Default
 * \param[in] wsAfterList a child of the new Default
 * \return A pointer to a Default, either newly constructed or shared
 */
BOX_AlignmentOptions BOX_makeAlignmentOptionsDefault(BOX_OptLayout wsAfterParenOpen, BOX_AlignmentOptionList list, BOX_OptLayout wsAfterList) {
  return (BOX_AlignmentOptions)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun63))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl2(BOX_afun64, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun57)), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun65))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun66))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun34))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun63)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(41)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl2(BOX_afun64, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun57)), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun65))))), (ATerm) list)), (ATerm) wsAfterParenOpen), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun66)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(40)))));
}
/**
 * Constructs a empty of type BOX_SpaceOptionOptions. Like all ATerm types, BOX_SpaceOptionOptionss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptionsEmpty(void) {
  return (BOX_SpaceOptionOptions)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_SpaceOptionOptions. Like all ATerm types, BOX_SpaceOptionOptionss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptionsSingle(BOX_SpaceOption head) {
  return (BOX_SpaceOptionOptions)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_SpaceOptionOptions. Like all ATerm types, BOX_SpaceOptionOptionss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] wsAfterHead a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_SpaceOptionOptions BOX_makeSpaceOptionOptionsMany(BOX_SpaceOption head, BOX_OptLayout wsAfterHead, BOX_SpaceOptionOptions tail) {
  if (BOX_isSpaceOptionOptionsEmpty(tail)) {
    return BOX_makeSpaceOptionOptionsSingle(head);
  }
  return (BOX_SpaceOptionOptions)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterHead), (ATerm) head);
}
/**
 * Constructs a empty of type BOX_AlignmentOptionList. Like all ATerm types, BOX_AlignmentOptionLists are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionListEmpty(void) {
  return (BOX_AlignmentOptionList)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_AlignmentOptionList. Like all ATerm types, BOX_AlignmentOptionLists are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionListSingle(BOX_AlignmentOption head) {
  return (BOX_AlignmentOptionList)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_AlignmentOptionList. Like all ATerm types, BOX_AlignmentOptionLists are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] wsAfterHead a child of the new many
 * \param[in] wsAfterSep a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_AlignmentOptionList BOX_makeAlignmentOptionListMany(BOX_AlignmentOption head, BOX_OptLayout wsAfterHead, BOX_OptLayout wsAfterSep, BOX_AlignmentOptionList tail) {
  if (BOX_isAlignmentOptionListEmpty(tail)) {
    return BOX_makeAlignmentOptionListSingle(head);
  }
  return (BOX_AlignmentOptionList)(ATerm)ATinsert(ATinsert(ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterSep), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun65)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(44)))), (ATerm) wsAfterHead), (ATerm) head);
}
/**
 * Constructs a horizontal of type BOX_SpaceSymbol. Like all ATerm types, BOX_SpaceSymbols are maximally shared.
 * \return A pointer to a horizontal, either newly constructed or shared
 */
BOX_SpaceSymbol BOX_makeSpaceSymbolHorizontal(void) {
  return (BOX_SpaceSymbol)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun67))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun68))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun69)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(104)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun67)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(115)), (ATerm)ATmakeInt(104)))));
}
/**
 * Constructs a vertical of type BOX_SpaceSymbol. Like all ATerm types, BOX_SpaceSymbols are maximally shared.
 * \return A pointer to a vertical, either newly constructed or shared
 */
BOX_SpaceSymbol BOX_makeSpaceSymbolVertical(void) {
  return (BOX_SpaceSymbol)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun70))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun68))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun71)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(118)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun70)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(115)), (ATerm)ATmakeInt(118)))));
}
/**
 * Constructs a indentation of type BOX_SpaceSymbol. Like all ATerm types, BOX_SpaceSymbols are maximally shared.
 * \return A pointer to a indentation, either newly constructed or shared
 */
BOX_SpaceSymbol BOX_makeSpaceSymbolIndentation(void) {
  return (BOX_SpaceSymbol)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun72))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun68))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun73)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(105)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun72)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(115)), (ATerm)ATmakeInt(105)))));
}
/**
 * Constructs a tabstop of type BOX_SpaceSymbol. Like all ATerm types, BOX_SpaceSymbols are maximally shared.
 * \return A pointer to a tabstop, either newly constructed or shared
 */
BOX_SpaceSymbol BOX_makeSpaceSymbolTabstop(void) {
  return (BOX_SpaceSymbol)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun74))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun68))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun75)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun74)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(115)), (ATerm)ATmakeInt(116)))));
}
/**
 * Constructs a Default of type BOX_SpaceOption. Like all ATerm types, BOX_SpaceOptions are maximally shared.
 * \param[in] SpaceSymbol a child of the new Default
 * \param[in] wsAfterSpaceSymbol a child of the new Default
 * \param[in] wsAfterEquals a child of the new Default
 * \param[in] NatCon a child of the new Default
 * \return A pointer to a Default, either newly constructed or shared
 */
BOX_SpaceOption BOX_makeSpaceOptionDefault(BOX_SpaceSymbol SpaceSymbol, BOX_OptLayout wsAfterSpaceSymbol, BOX_OptLayout wsAfterEquals, BOX_NatCon NatCon) {
  return (BOX_SpaceOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun68)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun33))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) NatCon), (ATerm) wsAfterEquals), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm) wsAfterSpaceSymbol), (ATerm) SpaceSymbol));
}
/**
 * Constructs a string of type BOX_Box. Like all ATerm types, BOX_Boxs are maximally shared.
 * \param[in] StrCon a child of the new string
 * \return A pointer to a string, either newly constructed or shared
 */
BOX_Box BOX_makeBoxString(BOX_StrCon StrCon) {
  return (BOX_Box)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun76)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun11))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun77)))))), (ATerm)ATmakeList1((ATerm) StrCon));
}
/**
 * Constructs a appl of type BOX_Box. Like all ATerm types, BOX_Boxs are maximally shared.
 * \param[in] operator a child of the new appl
 * \param[in] wsAfterOperator a child of the new appl
 * \param[in] wsAfterBracketOpen a child of the new appl
 * \param[in] list a child of the new appl
 * \param[in] wsAfterList a child of the new appl
 * \return A pointer to a appl, either newly constructed or shared
 */
BOX_Box BOX_makeBoxAppl(BOX_BoxOperator operator, BOX_OptLayout wsAfterOperator, BOX_OptLayout wsAfterBracketOpen, BOX_BoxList list, BOX_OptLayout wsAfterList) {
  return (BOX_Box)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun78))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun11))))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun79))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun23)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun11))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun80)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun78)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(93)))), (ATerm) wsAfterList), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun11))))), (ATerm) list)), (ATerm) wsAfterBracketOpen), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun79)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(91)))), (ATerm) wsAfterOperator), (ATerm) operator));
}
/**
 * Constructs a empty of type BOX_BoxList. Like all ATerm types, BOX_BoxLists are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_BoxList BOX_makeBoxListEmpty(void) {
  return (BOX_BoxList)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_BoxList. Like all ATerm types, BOX_BoxLists are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_BoxList BOX_makeBoxListSingle(BOX_Box head) {
  return (BOX_BoxList)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_BoxList. Like all ATerm types, BOX_BoxLists are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] wsAfterHead a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_BoxList BOX_makeBoxListMany(BOX_Box head, BOX_OptLayout wsAfterHead, BOX_BoxList tail) {
  if (BOX_isBoxListEmpty(tail)) {
    return BOX_makeBoxListSingle(head);
  }
  return (BOX_BoxList)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterHead), (ATerm) head);
}
/**
 * Constructs a whitespace of type BOX_LexLayout. Like all ATerm types, BOX_LexLayouts are maximally shared.
 * \param[in] ch a child of the new whitespace
 * \return A pointer to a whitespace, either newly constructed or shared
 */
BOX_LexLayout BOX_makeLexLayoutWhitespace(char ch) {
  return (BOX_LexLayout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(32)), (ATerm)ATmakeInt(13)), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(9), (ATerm)ATmakeInt(10))))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl0(BOX_afun4)), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun81)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) BOX_byteToChar(ch))));
}
/**
 * Constructs a line of type BOX_LexLayout. Like all ATerm types, BOX_LexLayouts are maximally shared.
 * \param[in] line a child of the new line
 * \return A pointer to a line, either newly constructed or shared
 */
BOX_LexLayout BOX_makeLexLayoutLine(const char* line) {
  return (BOX_LexLayout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun82))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(11), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(9))))))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun83))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl0(BOX_afun4)), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun84, (ATerm)ATmakeAppl0(BOX_afun85)))), (ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun86)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(10)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun82)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(10)))), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(11), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(9))))))), (ATerm) ((ATerm) BOX_stringToChars(line)))), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun83)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(37)), (ATerm)ATmakeInt(37)))));
}
/**
 * Constructs a nested of type BOX_LexLayout. Like all ATerm types, BOX_LexLayouts are maximally shared.
 * \param[in] content a child of the new nested
 * \return A pointer to a nested, either newly constructed or shared
 */
BOX_LexLayout BOX_makeLexLayoutNested(const char* content) {
  return (BOX_LexLayout)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun87))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(38), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(11), (ATerm)ATmakeInt(36))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(9))))))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun87))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl0(BOX_afun4)), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun84, (ATerm)ATmakeAppl0(BOX_afun85)))), (ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun88)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun87)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(38), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(11), (ATerm)ATmakeInt(36))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(0), (ATerm)ATmakeInt(9))))))), (ATerm) ((ATerm) BOX_stringToChars(content)))), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun87)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(37)))));
}
/**
 * Constructs a default of type BOX_LexFontId. Like all ATerm types, BOX_LexFontIds are maximally shared.
 * \param[in] list a child of the new default
 * \return A pointer to a default, either newly constructed or shared
 */
BOX_LexFontId BOX_makeLexFontIdDefault(const char* list) {
  return (BOX_LexFontId)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(97), (ATerm)ATmakeInt(122))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(65), (ATerm)ATmakeInt(90))))))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun89))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun90)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun7, (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(97), (ATerm)ATmakeInt(122))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(65), (ATerm)ATmakeInt(90))))))), (ATerm) ((ATerm) BOX_stringToChars(list)))));
}
/**
 * Constructs a Lex-to-cf of type BOX_FontId. Like all ATerm types, BOX_FontIds are maximally shared.
 * \param[in] FontId a child of the new Lex-to-cf
 * \return A pointer to a Lex-to-cf, either newly constructed or shared
 */
BOX_FontId BOX_makeFontIdLexToCf(BOX_LexFontId FontId) {
  return (BOX_FontId)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun89)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun89))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm) FontId));
}
/**
 * Constructs a natural of type BOX_FontValue. Like all ATerm types, BOX_FontValues are maximally shared.
 * \param[in] NatCon a child of the new natural
 * \return A pointer to a natural, either newly constructed or shared
 */
BOX_FontValue BOX_makeFontValueNatural(BOX_NatCon NatCon) {
  return (BOX_FontValue)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun13)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun91))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun92)))))), (ATerm)ATmakeList1((ATerm) NatCon));
}
/**
 * Constructs a font-id of type BOX_FontValue. Like all ATerm types, BOX_FontValues are maximally shared.
 * \param[in] FontId a child of the new font-id
 * \return A pointer to a font-id, either newly constructed or shared
 */
BOX_FontValue BOX_makeFontValueFontId(BOX_FontId FontId) {
  return (BOX_FontValue)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun89)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun91))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun93)))))), (ATerm)ATmakeList1((ATerm) FontId));
}
/**
 * Constructs a Default of type BOX_FontOption. Like all ATerm types, BOX_FontOptions are maximally shared.
 * \param[in] FontParam a child of the new Default
 * \param[in] wsAfterFontParam a child of the new Default
 * \param[in] wsAfterEquals a child of the new Default
 * \param[in] FontValue a child of the new Default
 * \return A pointer to a Default, either newly constructed or shared
 */
BOX_FontOption BOX_makeFontOptionDefault(BOX_FontParam FontParam, BOX_OptLayout wsAfterFontParam, BOX_OptLayout wsAfterEquals, BOX_FontValue FontValue) {
  return (BOX_FontOption)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun91)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun3, (ATerm)ATmakeAppl0(BOX_afun4)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun51))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) FontValue), (ATerm) wsAfterEquals), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun15)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(61)))), (ATerm) wsAfterFontParam), (ATerm) FontParam));
}
/**
 * Constructs a name of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a name, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamName(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun95))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun96)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun95)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(102)))));
}
/**
 * Constructs a family of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a family, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamFamily(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun97))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun98)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(109)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(102)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun97)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(109)), (ATerm)ATmakeInt(102)))));
}
/**
 * Constructs a series of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a series, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamSeries(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun99))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun100)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(101)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun99)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(101)), (ATerm)ATmakeInt(115)))));
}
/**
 * Constructs a shape of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a shape, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamShape(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun101))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun102)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(104)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun101)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(104)), (ATerm)ATmakeInt(115)))));
}
/**
 * Constructs a size of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a size, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamSize(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun103))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun21)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(122)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(115)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun103)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(122)), (ATerm)ATmakeInt(115)))));
}
/**
 * Constructs a color of type BOX_FontParam. Like all ATerm types, BOX_FontParams are maximally shared.
 * \return A pointer to a color, either newly constructed or shared
 */
BOX_FontParam BOX_makeFontParamColor(void) {
  return (BOX_FontParam)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun104))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun94))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun105)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(108)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(99)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun104)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(108)), (ATerm)ATmakeInt(99)))));
}
/**
 * Constructs a keyword of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a keyword, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorKeyword(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun106))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun108)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(87)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(75)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun106)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(87)), (ATerm)ATmakeInt(75)))));
}
/**
 * Constructs a variable of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a variable, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorVariable(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun109))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun110)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(82)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(65)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(86)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun109)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(82)), (ATerm)ATmakeInt(65)), (ATerm)ATmakeInt(86)))));
}
/**
 * Constructs a number of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a number, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorNumber(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun111))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun112)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(85)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(78)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun111)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(77)), (ATerm)ATmakeInt(85)), (ATerm)ATmakeInt(78)))));
}
/**
 * Constructs a math of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a math, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorMath(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun113))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun114)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(72)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(84)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(65)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun113)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(72)), (ATerm)ATmakeInt(84)), (ATerm)ATmakeInt(65)), (ATerm)ATmakeInt(77)))));
}
/**
 * Constructs a escape of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a escape, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorEscape(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun115))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun116)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(67)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(83)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(69)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun115)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(67)), (ATerm)ATmakeInt(83)), (ATerm)ATmakeInt(69)))));
}
/**
 * Constructs a comment of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a comment, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorComment(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun31))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun32)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(77)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(79)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(67)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun31)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(77)), (ATerm)ATmakeInt(77)), (ATerm)ATmakeInt(79)), (ATerm)ATmakeInt(67)))));
}
/**
 * Constructs a string of type BOX_FontOperator. Like all ATerm types, BOX_FontOperators are maximally shared.
 * \return A pointer to a string, either newly constructed or shared
 */
BOX_FontOperator BOX_makeFontOperatorString(void) {
  return (BOX_FontOperator)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun117))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun107))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun77)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(71)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(78)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(73)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(82)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(84)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(83)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun117)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(71)), (ATerm)ATmakeInt(78)), (ATerm)ATmakeInt(73)), (ATerm)ATmakeInt(82)), (ATerm)ATmakeInt(84)), (ATerm)ATmakeInt(83)))));
}
/**
 * Constructs a empty of type BOX_FontOptionList. Like all ATerm types, BOX_FontOptionLists are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_FontOptionList BOX_makeFontOptionListEmpty(void) {
  return (BOX_FontOptionList)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_FontOptionList. Like all ATerm types, BOX_FontOptionLists are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_FontOptionList BOX_makeFontOptionListSingle(BOX_FontOption head) {
  return (BOX_FontOptionList)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_FontOptionList. Like all ATerm types, BOX_FontOptionLists are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] wsAfterHead a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_FontOptionList BOX_makeFontOptionListMany(BOX_FontOption head, BOX_OptLayout wsAfterHead, BOX_FontOptionList tail) {
  if (BOX_isFontOptionListEmpty(tail)) {
    return BOX_makeFontOptionListSingle(head);
  }
  return (BOX_FontOptionList)(ATerm)ATinsert(ATinsert((ATermList)tail, (ATerm) wsAfterHead), (ATerm) head);
}
/**
 * Constructs a newline of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \return A pointer to a newline, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharNewline(void) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun118))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun120)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(110)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun118)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(110)), (ATerm)ATmakeInt(92)))));
}
/**
 * Constructs a tab of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \return A pointer to a tab, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharTab(void) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun121))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun122)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(116)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun121)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(116)), (ATerm)ATmakeInt(92)))));
}
/**
 * Constructs a quote of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \return A pointer to a quote, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharQuote(void) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun123))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun124)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun123)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeInt(92)))));
}
/**
 * Constructs a backslash of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \return A pointer to a backslash, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharBackslash(void) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun125))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun126)))))), (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun125)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATinsert(ATmakeList1((ATerm)ATmakeInt(92)), (ATerm)ATmakeInt(92)))));
}
/**
 * Constructs a decimal of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \param[in] a a child of the new decimal
 * \param[in] b a child of the new decimal
 * \param[in] c a child of the new decimal
 * \return A pointer to a decimal, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharDecimal(char a, char b, char c) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(48), (ATerm)ATmakeInt(57))))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun127))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun128)))))), (ATerm)ATinsert(ATinsert(ATinsert(ATmakeList1((ATerm) ((ATerm) BOX_byteToChar(c))), (ATerm) ((ATerm) BOX_byteToChar(b))), (ATerm) ((ATerm) BOX_byteToChar(a))), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))), (ATerm)ATmakeAppl1(BOX_afun14, (ATerm)ATmakeAppl0(BOX_afun127)), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm)ATmakeInt(92)))));
}
/**
 * Constructs a normal of type BOX_LexStrChar. Like all ATerm types, BOX_LexStrChars are maximally shared.
 * \param[in] ch a child of the new normal
 * \return A pointer to a normal, either newly constructed or shared
 */
BOX_LexStrChar BOX_makeLexStrCharNormal(char ch) {
  return (BOX_LexStrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(93), (ATerm)ATmakeInt(255))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(35), (ATerm)ATmakeInt(91))), (ATerm)ATmakeAppl2(BOX_afun54, (ATerm)ATmakeInt(32), (ATerm)ATmakeInt(33))))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun129)))))), (ATerm)ATmakeList1((ATerm) ((ATerm) BOX_byteToChar(ch))));
}
/**
 * Constructs a Lex-to-cf of type BOX_StrChar. Like all ATerm types, BOX_StrChars are maximally shared.
 * \param[in] StrChar a child of the new Lex-to-cf
 * \return A pointer to a Lex-to-cf, either newly constructed or shared
 */
BOX_StrChar BOX_makeStrCharLexToCf(BOX_LexStrChar StrChar) {
  return (BOX_StrChar)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm) StrChar));
}
/**
 * Constructs a default of type BOX_LexStrCon. Like all ATerm types, BOX_LexStrCons are maximally shared.
 * \param[in] chars a child of the new default
 * \return A pointer to a default, either newly constructed or shared
 */
BOX_LexStrCon BOX_makeLexStrConDefault(BOX_LexStrCharChars chars) {
  return (BOX_LexStrCon)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))))), (ATerm)ATmakeAppl1(BOX_afun22, (ATerm)ATmakeList1((ATerm)ATmakeInt(34)))), (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun76))), (ATerm)ATmakeAppl1(BOX_afun18, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun19, (ATerm)ATmakeAppl1(BOX_afun20, (ATerm)ATmakeAppl0(BOX_afun90)))))), (ATerm)ATinsert(ATinsert(ATmakeList1((ATerm)ATmakeInt(34)), (ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl1(BOX_afun8, (ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun26, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun119))))), (ATerm) chars)), (ATerm)ATmakeInt(34)));
}
/**
 * Constructs a Lex-to-cf of type BOX_StrCon. Like all ATerm types, BOX_StrCons are maximally shared.
 * \param[in] StrCon a child of the new Lex-to-cf
 * \return A pointer to a Lex-to-cf, either newly constructed or shared
 */
BOX_StrCon BOX_makeStrConLexToCf(BOX_LexStrCon StrCon) {
  return (BOX_StrCon)(ATerm)ATmakeAppl2(BOX_afun0, (ATerm)ATmakeAppl3(BOX_afun1, (ATerm)ATmakeList1((ATerm)ATmakeAppl1(BOX_afun6, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun76)))), (ATerm)ATmakeAppl1(BOX_afun2, (ATerm)ATmakeAppl1(BOX_afun10, (ATerm)ATmakeAppl0(BOX_afun76))), (ATerm)ATmakeAppl0(BOX_afun5)), (ATerm)ATmakeList1((ATerm) StrCon));
}
/**
 * Constructs a empty of type BOX_LexStrCharChars. Like all ATerm types, BOX_LexStrCharCharss are maximally shared.
 * \return A pointer to a empty, either newly constructed or shared
 */
BOX_LexStrCharChars BOX_makeLexStrCharCharsEmpty(void) {
  return (BOX_LexStrCharChars)(ATerm)ATempty;
}
/**
 * Constructs a single of type BOX_LexStrCharChars. Like all ATerm types, BOX_LexStrCharCharss are maximally shared.
 * \param[in] head a child of the new single
 * \return A pointer to a single, either newly constructed or shared
 */
BOX_LexStrCharChars BOX_makeLexStrCharCharsSingle(BOX_LexStrChar head) {
  return (BOX_LexStrCharChars)(ATerm)ATmakeList1((ATerm) head);
}
/**
 * Constructs a many of type BOX_LexStrCharChars. Like all ATerm types, BOX_LexStrCharCharss are maximally shared.
 * \param[in] head a child of the new many
 * \param[in] tail a child of the new many
 * \return A pointer to a many, either newly constructed or shared
 */
BOX_LexStrCharChars BOX_makeLexStrCharCharsMany(BOX_LexStrChar head, BOX_LexStrCharChars tail) {
  return (BOX_LexStrCharChars)(ATerm)ATinsert((ATermList)tail, (ATerm) head);
}

/**
 * Tests equality of two BOX_OptLayouts. A constant time operation.
 * \param[in] arg0 first BOX_OptLayout to be compared
 * \param[in] arg1 second BOX_OptLayout to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualOptLayout(BOX_OptLayout arg0, BOX_OptLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_Layouts. A constant time operation.
 * \param[in] arg0 first BOX_Layout to be compared
 * \param[in] arg1 second BOX_Layout to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLayout(BOX_Layout arg0, BOX_Layout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexLayoutLists. A constant time operation.
 * \param[in] arg0 first BOX_LexLayoutList to be compared
 * \param[in] arg1 second BOX_LexLayoutList to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexLayoutList(BOX_LexLayoutList arg0, BOX_LexLayoutList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_Starts. A constant time operation.
 * \param[in] arg0 first BOX_Start to be compared
 * \param[in] arg1 second BOX_Start to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualStart(BOX_Start arg0, BOX_Start arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_GroupOptions. A constant time operation.
 * \param[in] arg0 first BOX_GroupOption to be compared
 * \param[in] arg1 second BOX_GroupOption to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualGroupOption(BOX_GroupOption arg0, BOX_GroupOption arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_BoxOperators. A constant time operation.
 * \param[in] arg0 first BOX_BoxOperator to be compared
 * \param[in] arg1 second BOX_BoxOperator to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualBoxOperator(BOX_BoxOperator arg0, BOX_BoxOperator arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_GroupOptionGroupOptionss. A constant time operation.
 * \param[in] arg0 first BOX_GroupOptionGroupOptions to be compared
 * \param[in] arg1 second BOX_GroupOptionGroupOptions to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg0, BOX_GroupOptionGroupOptions arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexNatCons. A constant time operation.
 * \param[in] arg0 first BOX_LexNatCon to be compared
 * \param[in] arg1 second BOX_LexNatCon to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexNatCon(BOX_LexNatCon arg0, BOX_LexNatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_NatCons. A constant time operation.
 * \param[in] arg0 first BOX_NatCon to be compared
 * \param[in] arg1 second BOX_NatCon to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualNatCon(BOX_NatCon arg0, BOX_NatCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_AlignmentOptions. A constant time operation.
 * \param[in] arg0 first BOX_AlignmentOption to be compared
 * \param[in] arg1 second BOX_AlignmentOption to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualAlignmentOption(BOX_AlignmentOption arg0, BOX_AlignmentOption arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_AlignmentOptionss. A constant time operation.
 * \param[in] arg0 first BOX_AlignmentOptions to be compared
 * \param[in] arg1 second BOX_AlignmentOptions to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualAlignmentOptions(BOX_AlignmentOptions arg0, BOX_AlignmentOptions arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_SpaceOptionOptionss. A constant time operation.
 * \param[in] arg0 first BOX_SpaceOptionOptions to be compared
 * \param[in] arg1 second BOX_SpaceOptionOptions to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualSpaceOptionOptions(BOX_SpaceOptionOptions arg0, BOX_SpaceOptionOptions arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_AlignmentOptionLists. A constant time operation.
 * \param[in] arg0 first BOX_AlignmentOptionList to be compared
 * \param[in] arg1 second BOX_AlignmentOptionList to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualAlignmentOptionList(BOX_AlignmentOptionList arg0, BOX_AlignmentOptionList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_SpaceSymbols. A constant time operation.
 * \param[in] arg0 first BOX_SpaceSymbol to be compared
 * \param[in] arg1 second BOX_SpaceSymbol to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualSpaceSymbol(BOX_SpaceSymbol arg0, BOX_SpaceSymbol arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_SpaceOptions. A constant time operation.
 * \param[in] arg0 first BOX_SpaceOption to be compared
 * \param[in] arg1 second BOX_SpaceOption to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualSpaceOption(BOX_SpaceOption arg0, BOX_SpaceOption arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_Boxs. A constant time operation.
 * \param[in] arg0 first BOX_Box to be compared
 * \param[in] arg1 second BOX_Box to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualBox(BOX_Box arg0, BOX_Box arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_BoxLists. A constant time operation.
 * \param[in] arg0 first BOX_BoxList to be compared
 * \param[in] arg1 second BOX_BoxList to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualBoxList(BOX_BoxList arg0, BOX_BoxList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexLayouts. A constant time operation.
 * \param[in] arg0 first BOX_LexLayout to be compared
 * \param[in] arg1 second BOX_LexLayout to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexLayout(BOX_LexLayout arg0, BOX_LexLayout arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexFontIds. A constant time operation.
 * \param[in] arg0 first BOX_LexFontId to be compared
 * \param[in] arg1 second BOX_LexFontId to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexFontId(BOX_LexFontId arg0, BOX_LexFontId arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontIds. A constant time operation.
 * \param[in] arg0 first BOX_FontId to be compared
 * \param[in] arg1 second BOX_FontId to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontId(BOX_FontId arg0, BOX_FontId arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontValues. A constant time operation.
 * \param[in] arg0 first BOX_FontValue to be compared
 * \param[in] arg1 second BOX_FontValue to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontValue(BOX_FontValue arg0, BOX_FontValue arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontOptions. A constant time operation.
 * \param[in] arg0 first BOX_FontOption to be compared
 * \param[in] arg1 second BOX_FontOption to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontOption(BOX_FontOption arg0, BOX_FontOption arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontParams. A constant time operation.
 * \param[in] arg0 first BOX_FontParam to be compared
 * \param[in] arg1 second BOX_FontParam to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontParam(BOX_FontParam arg0, BOX_FontParam arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontOperators. A constant time operation.
 * \param[in] arg0 first BOX_FontOperator to be compared
 * \param[in] arg1 second BOX_FontOperator to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontOperator(BOX_FontOperator arg0, BOX_FontOperator arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_FontOptionLists. A constant time operation.
 * \param[in] arg0 first BOX_FontOptionList to be compared
 * \param[in] arg1 second BOX_FontOptionList to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualFontOptionList(BOX_FontOptionList arg0, BOX_FontOptionList arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexStrChars. A constant time operation.
 * \param[in] arg0 first BOX_LexStrChar to be compared
 * \param[in] arg1 second BOX_LexStrChar to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexStrChar(BOX_LexStrChar arg0, BOX_LexStrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_StrChars. A constant time operation.
 * \param[in] arg0 first BOX_StrChar to be compared
 * \param[in] arg1 second BOX_StrChar to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualStrChar(BOX_StrChar arg0, BOX_StrChar arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexStrCons. A constant time operation.
 * \param[in] arg0 first BOX_LexStrCon to be compared
 * \param[in] arg1 second BOX_LexStrCon to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexStrCon(BOX_LexStrCon arg0, BOX_LexStrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_StrCons. A constant time operation.
 * \param[in] arg0 first BOX_StrCon to be compared
 * \param[in] arg1 second BOX_StrCon to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualStrCon(BOX_StrCon arg0, BOX_StrCon arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Tests equality of two BOX_LexStrCharCharss. A constant time operation.
 * \param[in] arg0 first BOX_LexStrCharChars to be compared
 * \param[in] arg1 second BOX_LexStrCharChars to be compared
 * \return ATtrue if #arg0 was equal to #arg1, ATfalse otherwise
 */
ATbool BOX_isEqualLexStrCharChars(BOX_LexStrCharChars arg0, BOX_LexStrCharChars arg1) {
  return ATisEqual((ATerm)arg0, (ATerm)arg1);
}

/**
 * Assert whether a BOX_OptLayout is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_OptLayout
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidOptLayout(BOX_OptLayout arg) {
  if (BOX_isOptLayoutAbsent(arg)) {
    return ATtrue;
  }
  else if (BOX_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_OptLayout is a Absent. . May not be used to assert correctness of the BOX_OptLayout
 * \param[in] arg input BOX_OptLayout
 * \return ATtrue if #arg corresponds to the signature of a Absent, or ATfalse otherwise
 */
inline ATbool BOX_isOptLayoutAbsent(BOX_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternOptLayoutAbsent);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_OptLayout is a Present. . May not be used to assert correctness of the BOX_OptLayout
 * \param[in] arg input BOX_OptLayout
 * \return ATtrue if #arg corresponds to the signature of a Present, or ATfalse otherwise
 */
inline ATbool BOX_isOptLayoutPresent(BOX_OptLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternOptLayoutPresent, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_OptLayout has a layout. 
 * \param[in] arg input BOX_OptLayout
 * \return ATtrue if the BOX_OptLayout had a layout, or ATfalse otherwise
 */
ATbool BOX_hasOptLayoutLayout(BOX_OptLayout arg) {
  if (BOX_isOptLayoutPresent(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the layout BOX_Layout of a BOX_OptLayout. Note that the precondition is that this BOX_OptLayout actually has a layout
 * \param[in] arg input BOX_OptLayout
 * \return the layout of #arg, if it exist or an undefined value if it does not
 */
BOX_Layout BOX_getOptLayoutLayout(BOX_OptLayout arg) {
  
    return (BOX_Layout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the layout of a BOX_OptLayout. The precondition being that this BOX_OptLayout actually has a layout
 * \param[in] arg input BOX_OptLayout
 * \param[in] layout new BOX_Layout to set in #arg
 * \return A new BOX_OptLayout with layout at the right place, or a core dump if #arg did not have a layout
 */
BOX_OptLayout BOX_setOptLayoutLayout(BOX_OptLayout arg, BOX_Layout layout) {
  if (BOX_isOptLayoutPresent(arg)) {
    return (BOX_OptLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) layout), 0), 1);
  }

  ATabort("OptLayout has no Layout: %t\n", arg);
  return (BOX_OptLayout)NULL;
}

/**
 * Assert whether a BOX_Layout is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_Layout
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLayout(BOX_Layout arg) {
  if (BOX_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Layout is a Lex-to-cf. Always returns ATtrue
 * \param[in] arg input BOX_Layout
 * \return ATtrue if #arg corresponds to the signature of a Lex-to-cf, or ATfalse otherwise
 */
inline ATbool BOX_isLayoutLexToCf(BOX_Layout arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLayoutLexToCf, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_Layout has a list. 
 * \param[in] arg input BOX_Layout
 * \return ATtrue if the BOX_Layout had a list, or ATfalse otherwise
 */
ATbool BOX_hasLayoutList(BOX_Layout arg) {
  if (BOX_isLayoutLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the list BOX_LexLayoutList of a BOX_Layout. Note that the precondition is that this BOX_Layout actually has a list
 * \param[in] arg input BOX_Layout
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
BOX_LexLayoutList BOX_getLayoutList(BOX_Layout arg) {
  
    return (BOX_LexLayoutList)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1);
}

/**
 * Set the list of a BOX_Layout. The precondition being that this BOX_Layout actually has a list
 * \param[in] arg input BOX_Layout
 * \param[in] list new BOX_LexLayoutList to set in #arg
 * \return A new BOX_Layout with list at the right place, or a core dump if #arg did not have a list
 */
BOX_Layout BOX_setLayoutList(BOX_Layout arg, BOX_LexLayoutList list) {
  if (BOX_isLayoutLexToCf(arg)) {
    return (BOX_Layout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) list), 1), 0), 1);
  }

  ATabort("Layout has no List: %t\n", arg);
  return (BOX_Layout)NULL;
}

/**
 * Assert whether a BOX_LexLayoutList is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexLayoutList(BOX_LexLayoutList arg) {
  if (BOX_isLexLayoutListEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexLayoutList is a empty. . May not be used to assert correctness of the BOX_LexLayoutList
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutListEmpty(BOX_LexLayoutList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLexLayoutListEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_LexLayoutList is a single. . May not be used to assert correctness of the BOX_LexLayoutList
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutListSingle(BOX_LexLayoutList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexLayoutListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexLayoutList is a many. . May not be used to assert correctness of the BOX_LexLayoutList
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutListMany(BOX_LexLayoutList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexLayoutListMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexLayoutList has a head. 
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if the BOX_LexLayoutList had a head, or ATfalse otherwise
 */
ATbool BOX_hasLexLayoutListHead(BOX_LexLayoutList arg) {
  if (BOX_isLexLayoutListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexLayoutList has a tail. 
 * \param[in] arg input BOX_LexLayoutList
 * \return ATtrue if the BOX_LexLayoutList had a tail, or ATfalse otherwise
 */
ATbool BOX_hasLexLayoutListTail(BOX_LexLayoutList arg) {
  if (BOX_isLexLayoutListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head BOX_LexLayout of a BOX_LexLayoutList. Note that the precondition is that this BOX_LexLayoutList actually has a head
 * \param[in] arg input BOX_LexLayoutList
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_LexLayout BOX_getLexLayoutListHead(BOX_LexLayoutList arg) {
  if (BOX_isLexLayoutListSingle(arg)) {
    return (BOX_LexLayout)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_LexLayout)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail BOX_LexLayoutList of a BOX_LexLayoutList. Note that the precondition is that this BOX_LexLayoutList actually has a tail
 * \param[in] arg input BOX_LexLayoutList
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
BOX_LexLayoutList BOX_getLexLayoutListTail(BOX_LexLayoutList arg) {
  
    return (BOX_LexLayoutList)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a BOX_LexLayoutList. The precondition being that this BOX_LexLayoutList actually has a head
 * \param[in] arg input BOX_LexLayoutList
 * \param[in] head new BOX_LexLayout to set in #arg
 * \return A new BOX_LexLayoutList with head at the right place, or a core dump if #arg did not have a head
 */
BOX_LexLayoutList BOX_setLexLayoutListHead(BOX_LexLayoutList arg, BOX_LexLayout head) {
  if (BOX_isLexLayoutListSingle(arg)) {
    return (BOX_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isLexLayoutListMany(arg)) {
    return (BOX_LexLayoutList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexLayoutList has no Head: %t\n", arg);
  return (BOX_LexLayoutList)NULL;
}

/**
 * Set the tail of a BOX_LexLayoutList. The precondition being that this BOX_LexLayoutList actually has a tail
 * \param[in] arg input BOX_LexLayoutList
 * \param[in] tail new BOX_LexLayoutList to set in #arg
 * \return A new BOX_LexLayoutList with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_LexLayoutList BOX_setLexLayoutListTail(BOX_LexLayoutList arg, BOX_LexLayoutList tail) {
  if (BOX_isLexLayoutListMany(arg)) {
    return (BOX_LexLayoutList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexLayoutList has no Tail: %t\n", arg);
  return (BOX_LexLayoutList)NULL;
}

/**
 * Assert whether a BOX_Start is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_Start
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidStart(BOX_Start arg) {
  if (BOX_isStartBox(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Start is a Box. Always returns ATtrue
 * \param[in] arg input BOX_Start
 * \return ATtrue if #arg corresponds to the signature of a Box, or ATfalse otherwise
 */
inline ATbool BOX_isStartBox(BOX_Start arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternStartBox, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_Start has a ws-before. 
 * \param[in] arg input BOX_Start
 * \return ATtrue if the BOX_Start had a ws-before, or ATfalse otherwise
 */
ATbool BOX_hasStartWsBefore(BOX_Start arg) {
  if (BOX_isStartBox(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Start has a top-Box. 
 * \param[in] arg input BOX_Start
 * \return ATtrue if the BOX_Start had a top-Box, or ATfalse otherwise
 */
ATbool BOX_hasStartTopBox(BOX_Start arg) {
  if (BOX_isStartBox(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Start has a ws-after. 
 * \param[in] arg input BOX_Start
 * \return ATtrue if the BOX_Start had a ws-after, or ATfalse otherwise
 */
ATbool BOX_hasStartWsAfter(BOX_Start arg) {
  if (BOX_isStartBox(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Start has a amb-cnt. 
 * \param[in] arg input BOX_Start
 * \return ATtrue if the BOX_Start had a amb-cnt, or ATfalse otherwise
 */
ATbool BOX_hasStartAmbCnt(BOX_Start arg) {
  if (BOX_isStartBox(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ws-before BOX_OptLayout of a BOX_Start. Note that the precondition is that this BOX_Start actually has a ws-before
 * \param[in] arg input BOX_Start
 * \return the ws-before of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getStartWsBefore(BOX_Start arg) {
  
    return (BOX_OptLayout)ATgetFirst((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1));
}

/**
 * Get the top-Box BOX_Box of a BOX_Start. Note that the precondition is that this BOX_Start actually has a top-Box
 * \param[in] arg input BOX_Start
 * \return the top-Box of #arg, if it exist or an undefined value if it does not
 */
BOX_Box BOX_getStartTopBox(BOX_Start arg) {
  
    return (BOX_Box)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 1);
}

/**
 * Get the ws-after BOX_OptLayout of a BOX_Start. Note that the precondition is that this BOX_Start actually has a ws-after
 * \param[in] arg input BOX_Start
 * \return the ws-after of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getStartWsAfter(BOX_Start arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), 2);
}

/**
 * Get the amb-cnt int of a BOX_Start. Note that the precondition is that this BOX_Start actually has a amb-cnt
 * \param[in] arg input BOX_Start
 * \return the amb-cnt of #arg, if it exist or an undefined value if it does not
 */
int BOX_getStartAmbCnt(BOX_Start arg) {
  
    return (int)ATgetInt((ATermInt) ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the ws-before of a BOX_Start. The precondition being that this BOX_Start actually has a ws-before
 * \param[in] arg input BOX_Start
 * \param[in] wsBefore new BOX_OptLayout to set in #arg
 * \return A new BOX_Start with wsBefore at the right place, or a core dump if #arg did not have a wsBefore
 */
BOX_Start BOX_setStartWsBefore(BOX_Start arg, BOX_OptLayout wsBefore) {
  if (BOX_isStartBox(arg)) {
    return (BOX_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsBefore), 0), 1), 0);
  }

  ATabort("Start has no WsBefore: %t\n", arg);
  return (BOX_Start)NULL;
}

/**
 * Set the top-Box of a BOX_Start. The precondition being that this BOX_Start actually has a top-Box
 * \param[in] arg input BOX_Start
 * \param[in] topBox new BOX_Box to set in #arg
 * \return A new BOX_Start with topBox at the right place, or a core dump if #arg did not have a topBox
 */
BOX_Start BOX_setStartTopBox(BOX_Start arg, BOX_Box topBox) {
  if (BOX_isStartBox(arg)) {
    return (BOX_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) topBox), 1), 1), 0);
  }

  ATabort("Start has no TopBox: %t\n", arg);
  return (BOX_Start)NULL;
}

/**
 * Set the ws-after of a BOX_Start. The precondition being that this BOX_Start actually has a ws-after
 * \param[in] arg input BOX_Start
 * \param[in] wsAfter new BOX_OptLayout to set in #arg
 * \return A new BOX_Start with wsAfter at the right place, or a core dump if #arg did not have a wsAfter
 */
BOX_Start BOX_setStartWsAfter(BOX_Start arg, BOX_OptLayout wsAfter) {
  if (BOX_isStartBox(arg)) {
    return (BOX_Start)ATsetArgument((ATermAppl)arg, (ATerm)ATsetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)ATgetArgument((ATermAppl)arg, 0), 1), (ATerm)((ATerm) wsAfter), 2), 1), 0);
  }

  ATabort("Start has no WsAfter: %t\n", arg);
  return (BOX_Start)NULL;
}

/**
 * Set the amb-cnt of a BOX_Start. The precondition being that this BOX_Start actually has a amb-cnt
 * \param[in] arg input BOX_Start
 * \param[in] ambCnt new int to set in #arg
 * \return A new BOX_Start with ambCnt at the right place, or a core dump if #arg did not have a ambCnt
 */
BOX_Start BOX_setStartAmbCnt(BOX_Start arg, int ambCnt) {
  if (BOX_isStartBox(arg)) {
    return (BOX_Start)ATsetArgument((ATermAppl)arg, (ATerm)((ATerm) (ATerm) ATmakeInt(ambCnt)), 1);
  }

  ATabort("Start has no AmbCnt: %t\n", arg);
  return (BOX_Start)NULL;
}

/**
 * Assert whether a BOX_GroupOption is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidGroupOption(BOX_GroupOption arg) {
  if (BOX_isGroupOptionSize(arg)) {
    return ATtrue;
  }
  else if (BOX_isGroupOptionOperator(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOption is a size. . May not be used to assert correctness of the BOX_GroupOption
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if #arg corresponds to the signature of a size, or ATfalse otherwise
 */
inline ATbool BOX_isGroupOptionSize(BOX_GroupOption arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternGroupOptionSize, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_GroupOption is a operator. . May not be used to assert correctness of the BOX_GroupOption
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if #arg corresponds to the signature of a operator, or ATfalse otherwise
 */
inline ATbool BOX_isGroupOptionOperator(BOX_GroupOption arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternGroupOptionOperator, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_GroupOption has a ws-after-gs. 
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if the BOX_GroupOption had a ws-after-gs, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionWsAfterGs(BOX_GroupOption arg) {
  if (BOX_isGroupOptionSize(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOption has a ws-after-=. 
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if the BOX_GroupOption had a ws-after-=, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionWsAfterEquals(BOX_GroupOption arg) {
  if (BOX_isGroupOptionSize(arg)) {
    return ATtrue;
  }
  else if (BOX_isGroupOptionOperator(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOption has a NatCon. 
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if the BOX_GroupOption had a NatCon, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionNatCon(BOX_GroupOption arg) {
  if (BOX_isGroupOptionSize(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOption has a ws-after-op. 
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if the BOX_GroupOption had a ws-after-op, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionWsAfterOp(BOX_GroupOption arg) {
  if (BOX_isGroupOptionOperator(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOption has a BoxOperator. 
 * \param[in] arg input BOX_GroupOption
 * \return ATtrue if the BOX_GroupOption had a BoxOperator, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionBoxOperator(BOX_GroupOption arg) {
  if (BOX_isGroupOptionOperator(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ws-after-gs BOX_OptLayout of a BOX_GroupOption. Note that the precondition is that this BOX_GroupOption actually has a ws-after-gs
 * \param[in] arg input BOX_GroupOption
 * \return the ws-after-gs of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getGroupOptionWsAfterGs(BOX_GroupOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-= BOX_OptLayout of a BOX_GroupOption. Note that the precondition is that this BOX_GroupOption actually has a ws-after-=
 * \param[in] arg input BOX_GroupOption
 * \return the ws-after-= of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getGroupOptionWsAfterEquals(BOX_GroupOption arg) {
  if (BOX_isGroupOptionSize(arg)) {
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
  }
  else 
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Get the NatCon BOX_NatCon of a BOX_GroupOption. Note that the precondition is that this BOX_GroupOption actually has a NatCon
 * \param[in] arg input BOX_GroupOption
 * \return the NatCon of #arg, if it exist or an undefined value if it does not
 */
BOX_NatCon BOX_getGroupOptionNatCon(BOX_GroupOption arg) {
  
    return (BOX_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/**
 * Get the ws-after-op BOX_OptLayout of a BOX_GroupOption. Note that the precondition is that this BOX_GroupOption actually has a ws-after-op
 * \param[in] arg input BOX_GroupOption
 * \return the ws-after-op of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getGroupOptionWsAfterOp(BOX_GroupOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the BoxOperator BOX_BoxOperator of a BOX_GroupOption. Note that the precondition is that this BOX_GroupOption actually has a BoxOperator
 * \param[in] arg input BOX_GroupOption
 * \return the BoxOperator of #arg, if it exist or an undefined value if it does not
 */
BOX_BoxOperator BOX_getGroupOptionBoxOperator(BOX_GroupOption arg) {
  
    return (BOX_BoxOperator)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/**
 * Set the ws-after-gs of a BOX_GroupOption. The precondition being that this BOX_GroupOption actually has a ws-after-gs
 * \param[in] arg input BOX_GroupOption
 * \param[in] wsAfterGs new BOX_OptLayout to set in #arg
 * \return A new BOX_GroupOption with wsAfterGs at the right place, or a core dump if #arg did not have a wsAfterGs
 */
BOX_GroupOption BOX_setGroupOptionWsAfterGs(BOX_GroupOption arg, BOX_OptLayout wsAfterGs) {
  if (BOX_isGroupOptionSize(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterGs), 1), 1);
  }

  ATabort("GroupOption has no WsAfterGs: %t\n", arg);
  return (BOX_GroupOption)NULL;
}

/**
 * Set the ws-after-= of a BOX_GroupOption. The precondition being that this BOX_GroupOption actually has a ws-after-=
 * \param[in] arg input BOX_GroupOption
 * \param[in] wsAfterEquals new BOX_OptLayout to set in #arg
 * \return A new BOX_GroupOption with wsAfterEquals at the right place, or a core dump if #arg did not have a wsAfterEquals
 */
BOX_GroupOption BOX_setGroupOptionWsAfterEquals(BOX_GroupOption arg, BOX_OptLayout wsAfterEquals) {
  if (BOX_isGroupOptionSize(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEquals), 3), 1);
  }
  else if (BOX_isGroupOptionOperator(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEquals), 3), 1);
  }

  ATabort("GroupOption has no WsAfterEquals: %t\n", arg);
  return (BOX_GroupOption)NULL;
}

/**
 * Set the NatCon of a BOX_GroupOption. The precondition being that this BOX_GroupOption actually has a NatCon
 * \param[in] arg input BOX_GroupOption
 * \param[in] NatCon new BOX_NatCon to set in #arg
 * \return A new BOX_GroupOption with NatCon at the right place, or a core dump if #arg did not have a NatCon
 */
BOX_GroupOption BOX_setGroupOptionNatCon(BOX_GroupOption arg, BOX_NatCon NatCon) {
  if (BOX_isGroupOptionSize(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 4), 1);
  }

  ATabort("GroupOption has no NatCon: %t\n", arg);
  return (BOX_GroupOption)NULL;
}

/**
 * Set the ws-after-op of a BOX_GroupOption. The precondition being that this BOX_GroupOption actually has a ws-after-op
 * \param[in] arg input BOX_GroupOption
 * \param[in] wsAfterOp new BOX_OptLayout to set in #arg
 * \return A new BOX_GroupOption with wsAfterOp at the right place, or a core dump if #arg did not have a wsAfterOp
 */
BOX_GroupOption BOX_setGroupOptionWsAfterOp(BOX_GroupOption arg, BOX_OptLayout wsAfterOp) {
  if (BOX_isGroupOptionOperator(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOp), 1), 1);
  }

  ATabort("GroupOption has no WsAfterOp: %t\n", arg);
  return (BOX_GroupOption)NULL;
}

/**
 * Set the BoxOperator of a BOX_GroupOption. The precondition being that this BOX_GroupOption actually has a BoxOperator
 * \param[in] arg input BOX_GroupOption
 * \param[in] BoxOperator new BOX_BoxOperator to set in #arg
 * \return A new BOX_GroupOption with BoxOperator at the right place, or a core dump if #arg did not have a BoxOperator
 */
BOX_GroupOption BOX_setGroupOptionBoxOperator(BOX_GroupOption arg, BOX_BoxOperator BoxOperator) {
  if (BOX_isGroupOptionOperator(arg)) {
    return (BOX_GroupOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) BoxOperator), 4), 1);
  }

  ATabort("GroupOption has no BoxOperator: %t\n", arg);
  return (BOX_GroupOption)NULL;
}

/**
 * Assert whether a BOX_BoxOperator is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidBoxOperator(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorSeparatedList(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorComment(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorAlignment(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorRow(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorH(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorV(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorHv(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorHov(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorI(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorWd(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorFont(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator is a grouping. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a grouping, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorGrouping(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorGrouping, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a separated-list. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a separated-list, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorSeparatedList(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorSeparatedList, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a comment. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a comment, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorComment(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorComment);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a alignment. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a alignment, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorAlignment(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorAlignment, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a row. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a row, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorRow(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorRow);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a h. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a h, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorH(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorH, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a v. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a v, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorV(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorV, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a hv. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a hv, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorHv(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorHv, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a hov. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a hov, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorHov(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorHov, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a i. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a i, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorI(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorI, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a wd. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a wd, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorWd(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorWd);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator is a font. . May not be used to assert correctness of the BOX_BoxOperator
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if #arg corresponds to the signature of a font, or ATfalse otherwise
 */
inline ATbool BOX_isBoxOperatorFont(BOX_BoxOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxOperatorFont, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-G. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-G, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterG(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a group-options. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a group-options, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorGroupOptions(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorSeparatedList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-SL. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-SL, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterSL(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorSeparatedList(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-A. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-A, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterA(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a alignments. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a alignments, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorAlignments(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-alignments. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-alignments, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterAlignments(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a options. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a options, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorOptions(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorH(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorV(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorHv(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorHov(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxOperatorI(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-H. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-H, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterH(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorH(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-V. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-V, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterV(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorV(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-HV. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-HV, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterHV(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorHv(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-HOV. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-HOV, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterHOV(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorHov(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-I. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-I, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterI(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorI(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a ws-after-F. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a ws-after-F, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorWsAfterF(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorFont(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxOperator has a list. 
 * \param[in] arg input BOX_BoxOperator
 * \return ATtrue if the BOX_BoxOperator had a list, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperatorList(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorFont(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ws-after-G BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-G
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-G of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterG(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the group-options BOX_GroupOptionGroupOptions of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a group-options
 * \param[in] arg input BOX_BoxOperator
 * \return the group-options of #arg, if it exist or an undefined value if it does not
 */
BOX_GroupOptionGroupOptions BOX_getBoxOperatorGroupOptions(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return (BOX_GroupOptionGroupOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else 
    return (BOX_GroupOptionGroupOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/**
 * Get the ws-after-SL BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-SL
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-SL of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterSL(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-A BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-A
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-A of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterA(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the alignments BOX_AlignmentOptions of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a alignments
 * \param[in] arg input BOX_BoxOperator
 * \return the alignments of #arg, if it exist or an undefined value if it does not
 */
BOX_AlignmentOptions BOX_getBoxOperatorAlignments(BOX_BoxOperator arg) {
  
    return (BOX_AlignmentOptions)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2);
}

/**
 * Get the ws-after-alignments BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-alignments
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-alignments of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterAlignments(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Get the options BOX_SpaceOptionOptions of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a options
 * \param[in] arg input BOX_BoxOperator
 * \return the options of #arg, if it exist or an undefined value if it does not
 */
BOX_SpaceOptionOptions BOX_getBoxOperatorOptions(BOX_BoxOperator arg) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4), 1);
  }
  else if (BOX_isBoxOperatorH(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else if (BOX_isBoxOperatorV(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else if (BOX_isBoxOperatorHv(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else if (BOX_isBoxOperatorHov(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else 
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/**
 * Get the ws-after-H BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-H
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-H of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterH(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-V BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-V
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-V of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterV(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-HV BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-HV
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-HV of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterHV(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-HOV BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-HOV
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-HOV of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterHOV(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-I BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-I
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-I of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterI(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-F BOX_OptLayout of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a ws-after-F
 * \param[in] arg input BOX_BoxOperator
 * \return the ws-after-F of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxOperatorWsAfterF(BOX_BoxOperator arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the list BOX_FontOptionList of a BOX_BoxOperator. Note that the precondition is that this BOX_BoxOperator actually has a list
 * \param[in] arg input BOX_BoxOperator
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
BOX_FontOptionList BOX_getBoxOperatorList(BOX_BoxOperator arg) {
  
    return (BOX_FontOptionList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/**
 * Set the ws-after-G of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-G
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterG new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterG at the right place, or a core dump if #arg did not have a wsAfterG
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterG(BOX_BoxOperator arg, BOX_OptLayout wsAfterG) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterG), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterG: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the group-options of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a group-options
 * \param[in] arg input BOX_BoxOperator
 * \param[in] groupOptions new BOX_GroupOptionGroupOptions to set in #arg
 * \return A new BOX_BoxOperator with groupOptions at the right place, or a core dump if #arg did not have a groupOptions
 */
BOX_BoxOperator BOX_setBoxOperatorGroupOptions(BOX_BoxOperator arg, BOX_GroupOptionGroupOptions groupOptions) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) groupOptions), 1), 2), 1);
  }
  else if (BOX_isBoxOperatorSeparatedList(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) groupOptions), 1), 2), 1);
  }

  ATabort("BoxOperator has no GroupOptions: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-SL of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-SL
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterSL new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterSL at the right place, or a core dump if #arg did not have a wsAfterSL
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterSL(BOX_BoxOperator arg, BOX_OptLayout wsAfterSL) {
  if (BOX_isBoxOperatorSeparatedList(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSL), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterSL: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-A of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-A
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterA new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterA at the right place, or a core dump if #arg did not have a wsAfterA
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterA(BOX_BoxOperator arg, BOX_OptLayout wsAfterA) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterA), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterA: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the alignments of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a alignments
 * \param[in] arg input BOX_BoxOperator
 * \param[in] alignments new BOX_AlignmentOptions to set in #arg
 * \return A new BOX_BoxOperator with alignments at the right place, or a core dump if #arg did not have a alignments
 */
BOX_BoxOperator BOX_setBoxOperatorAlignments(BOX_BoxOperator arg, BOX_AlignmentOptions alignments) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) alignments), 2), 1);
  }

  ATabort("BoxOperator has no Alignments: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-alignments of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-alignments
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterAlignments new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterAlignments at the right place, or a core dump if #arg did not have a wsAfterAlignments
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterAlignments(BOX_BoxOperator arg, BOX_OptLayout wsAfterAlignments) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterAlignments), 3), 1);
  }

  ATabort("BoxOperator has no WsAfterAlignments: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the options of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a options
 * \param[in] arg input BOX_BoxOperator
 * \param[in] options new BOX_SpaceOptionOptions to set in #arg
 * \return A new BOX_BoxOperator with options at the right place, or a core dump if #arg did not have a options
 */
BOX_BoxOperator BOX_setBoxOperatorOptions(BOX_BoxOperator arg, BOX_SpaceOptionOptions options) {
  if (BOX_isBoxOperatorAlignment(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4), (ATerm)((ATerm) options), 1), 4), 1);
  }
  else if (BOX_isBoxOperatorH(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isBoxOperatorV(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isBoxOperatorHv(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isBoxOperatorHov(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isBoxOperatorI(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }

  ATabort("BoxOperator has no Options: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-H of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-H
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterH new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterH at the right place, or a core dump if #arg did not have a wsAfterH
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterH(BOX_BoxOperator arg, BOX_OptLayout wsAfterH) {
  if (BOX_isBoxOperatorH(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterH), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterH: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-V of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-V
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterV new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterV at the right place, or a core dump if #arg did not have a wsAfterV
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterV(BOX_BoxOperator arg, BOX_OptLayout wsAfterV) {
  if (BOX_isBoxOperatorV(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterV), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterV: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-HV of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-HV
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterHV new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterHV at the right place, or a core dump if #arg did not have a wsAfterHV
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterHV(BOX_BoxOperator arg, BOX_OptLayout wsAfterHV) {
  if (BOX_isBoxOperatorHv(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterHV), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterHV: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-HOV of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-HOV
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterHOV new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterHOV at the right place, or a core dump if #arg did not have a wsAfterHOV
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterHOV(BOX_BoxOperator arg, BOX_OptLayout wsAfterHOV) {
  if (BOX_isBoxOperatorHov(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterHOV), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterHOV: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-I of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-I
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterI new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterI at the right place, or a core dump if #arg did not have a wsAfterI
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterI(BOX_BoxOperator arg, BOX_OptLayout wsAfterI) {
  if (BOX_isBoxOperatorI(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterI), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterI: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the ws-after-F of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a ws-after-F
 * \param[in] arg input BOX_BoxOperator
 * \param[in] wsAfterF new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxOperator with wsAfterF at the right place, or a core dump if #arg did not have a wsAfterF
 */
BOX_BoxOperator BOX_setBoxOperatorWsAfterF(BOX_BoxOperator arg, BOX_OptLayout wsAfterF) {
  if (BOX_isBoxOperatorFont(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterF), 1), 1);
  }

  ATabort("BoxOperator has no WsAfterF: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Set the list of a BOX_BoxOperator. The precondition being that this BOX_BoxOperator actually has a list
 * \param[in] arg input BOX_BoxOperator
 * \param[in] list new BOX_FontOptionList to set in #arg
 * \return A new BOX_BoxOperator with list at the right place, or a core dump if #arg did not have a list
 */
BOX_BoxOperator BOX_setBoxOperatorList(BOX_BoxOperator arg, BOX_FontOptionList list) {
  if (BOX_isBoxOperatorFont(arg)) {
    return (BOX_BoxOperator)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) list), 1), 2), 1);
  }

  ATabort("BoxOperator has no List: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg) {
  if (BOX_isGroupOptionGroupOptionsEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions is a empty. . May not be used to assert correctness of the BOX_GroupOptionGroupOptions
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isGroupOptionGroupOptionsEmpty(BOX_GroupOptionGroupOptions arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternGroupOptionGroupOptionsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions is a single. . May not be used to assert correctness of the BOX_GroupOptionGroupOptions
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isGroupOptionGroupOptionsSingle(BOX_GroupOptionGroupOptions arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternGroupOptionGroupOptionsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions is a many. . May not be used to assert correctness of the BOX_GroupOptionGroupOptions
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isGroupOptionGroupOptionsMany(BOX_GroupOptionGroupOptions arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternGroupOptionGroupOptionsMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions has a head. 
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if the BOX_GroupOptionGroupOptions had a head, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionGroupOptionsHead(BOX_GroupOptionGroupOptions arg) {
  if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions has a ws-after-head. 
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if the BOX_GroupOptionGroupOptions had a ws-after-head, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionGroupOptionsWsAfterHead(BOX_GroupOptionGroupOptions arg) {
  if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_GroupOptionGroupOptions has a tail. 
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return ATtrue if the BOX_GroupOptionGroupOptions had a tail, or ATfalse otherwise
 */
ATbool BOX_hasGroupOptionGroupOptionsTail(BOX_GroupOptionGroupOptions arg) {
  if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Returns a list of all but the first element of a BOX_GroupOptionGroupOptions. 
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return A new BOX_GroupOptionGroupOptions, without the first element and the separator(s) just after it.)
 */
BOX_GroupOptionGroupOptions BOX_getGroupOptionGroupOptionsTail(BOX_GroupOptionGroupOptions arg) {
  assert(!BOX_isGroupOptionGroupOptionsEmpty(arg) && "getTail on an empty list");
  if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return (BOX_GroupOptionGroupOptions) BOX_makeGroupOptionGroupOptionsEmpty();
  }
  else {
  
    return (BOX_GroupOptionGroupOptions)ATgetTail((ATermList)arg, 2);
  }
}

/**
 * Get the head BOX_GroupOption of a BOX_GroupOptionGroupOptions. Note that the precondition is that this BOX_GroupOptionGroupOptions actually has a head
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_GroupOption BOX_getGroupOptionGroupOptionsHead(BOX_GroupOptionGroupOptions arg) {
  if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return (BOX_GroupOption)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_GroupOption)ATgetFirst((ATermList)arg);
}

/**
 * Get the ws-after-head BOX_OptLayout of a BOX_GroupOptionGroupOptions. Note that the precondition is that this BOX_GroupOptionGroupOptions actually has a ws-after-head
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \return the ws-after-head of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getGroupOptionGroupOptionsWsAfterHead(BOX_GroupOptionGroupOptions arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 1);
}

/**
 * Set the head of a BOX_GroupOptionGroupOptions. The precondition being that this BOX_GroupOptionGroupOptions actually has a head
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \param[in] head new BOX_GroupOption to set in #arg
 * \return A new BOX_GroupOptionGroupOptions with head at the right place, or a core dump if #arg did not have a head
 */
BOX_GroupOptionGroupOptions BOX_setGroupOptionGroupOptionsHead(BOX_GroupOptionGroupOptions arg, BOX_GroupOption head) {
  if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return (BOX_GroupOptionGroupOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return (BOX_GroupOptionGroupOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("GroupOptionGroupOptions has no Head: %t\n", arg);
  return (BOX_GroupOptionGroupOptions)NULL;
}

/**
 * Set the ws-after-head of a BOX_GroupOptionGroupOptions. The precondition being that this BOX_GroupOptionGroupOptions actually has a ws-after-head
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \param[in] wsAfterHead new BOX_OptLayout to set in #arg
 * \return A new BOX_GroupOptionGroupOptions with wsAfterHead at the right place, or a core dump if #arg did not have a wsAfterHead
 */
BOX_GroupOptionGroupOptions BOX_setGroupOptionGroupOptionsWsAfterHead(BOX_GroupOptionGroupOptions arg, BOX_OptLayout wsAfterHead) {
  if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return (BOX_GroupOptionGroupOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("GroupOptionGroupOptions has no WsAfterHead: %t\n", arg);
  return (BOX_GroupOptionGroupOptions)NULL;
}

/**
 * Set the tail of a BOX_GroupOptionGroupOptions. The precondition being that this BOX_GroupOptionGroupOptions actually has a tail
 * \param[in] arg input BOX_GroupOptionGroupOptions
 * \param[in] tail new BOX_GroupOptionGroupOptions to set in #arg
 * \return A new BOX_GroupOptionGroupOptions with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_GroupOptionGroupOptions BOX_setGroupOptionGroupOptionsTail(BOX_GroupOptionGroupOptions arg, BOX_GroupOptionGroupOptions tail) {
  if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return (BOX_GroupOptionGroupOptions)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 2);
  }

  ATabort("GroupOptionGroupOptions has no Tail: %t\n", arg);
  return (BOX_GroupOptionGroupOptions)NULL;
}

/**
 * Assert whether a BOX_LexNatCon is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexNatCon
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexNatCon(BOX_LexNatCon arg) {
  if (BOX_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexNatCon is a digits. Always returns ATtrue
 * \param[in] arg input BOX_LexNatCon
 * \return ATtrue if #arg corresponds to the signature of a digits, or ATfalse otherwise
 */
inline ATbool BOX_isLexNatConDigits(BOX_LexNatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLexNatConDigits, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_LexNatCon has a list. 
 * \param[in] arg input BOX_LexNatCon
 * \return ATtrue if the BOX_LexNatCon had a list, or ATfalse otherwise
 */
ATbool BOX_hasLexNatConList(BOX_LexNatCon arg) {
  if (BOX_isLexNatConDigits(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the list char* of a BOX_LexNatCon. Note that the precondition is that this BOX_LexNatCon actually has a list
 * \param[in] arg input BOX_LexNatCon
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
char* BOX_getLexNatConList(BOX_LexNatCon arg) {
  
    return (char*)BOX_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/**
 * Set the list of a BOX_LexNatCon. The precondition being that this BOX_LexNatCon actually has a list
 * \param[in] arg input BOX_LexNatCon
 * \param[in] list new const char* to set in #arg
 * \return A new BOX_LexNatCon with list at the right place, or a core dump if #arg did not have a list
 */
BOX_LexNatCon BOX_setLexNatConList(BOX_LexNatCon arg, const char* list) {
  if (BOX_isLexNatConDigits(arg)) {
    return (BOX_LexNatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) BOX_stringToChars(list))), 1), 0), 1);
  }

  ATabort("LexNatCon has no List: %t\n", arg);
  return (BOX_LexNatCon)NULL;
}

/**
 * Assert whether a BOX_NatCon is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_NatCon
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidNatCon(BOX_NatCon arg) {
  if (BOX_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_NatCon is a Lex-to-cf. Always returns ATtrue
 * \param[in] arg input BOX_NatCon
 * \return ATtrue if #arg corresponds to the signature of a Lex-to-cf, or ATfalse otherwise
 */
inline ATbool BOX_isNatConLexToCf(BOX_NatCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternNatConLexToCf, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_NatCon has a NatCon. 
 * \param[in] arg input BOX_NatCon
 * \return ATtrue if the BOX_NatCon had a NatCon, or ATfalse otherwise
 */
ATbool BOX_hasNatConNatCon(BOX_NatCon arg) {
  if (BOX_isNatConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the NatCon BOX_LexNatCon of a BOX_NatCon. Note that the precondition is that this BOX_NatCon actually has a NatCon
 * \param[in] arg input BOX_NatCon
 * \return the NatCon of #arg, if it exist or an undefined value if it does not
 */
BOX_LexNatCon BOX_getNatConNatCon(BOX_NatCon arg) {
  
    return (BOX_LexNatCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the NatCon of a BOX_NatCon. The precondition being that this BOX_NatCon actually has a NatCon
 * \param[in] arg input BOX_NatCon
 * \param[in] NatCon new BOX_LexNatCon to set in #arg
 * \return A new BOX_NatCon with NatCon at the right place, or a core dump if #arg did not have a NatCon
 */
BOX_NatCon BOX_setNatConNatCon(BOX_NatCon arg, BOX_LexNatCon NatCon) {
  if (BOX_isNatConLexToCf(arg)) {
    return (BOX_NatCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 0), 1);
  }

  ATabort("NatCon has no NatCon: %t\n", arg);
  return (BOX_NatCon)NULL;
}

/**
 * Assert whether a BOX_AlignmentOption is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidAlignmentOption(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionCentre(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionRight(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOption is a left. . May not be used to assert correctness of the BOX_AlignmentOption
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if #arg corresponds to the signature of a left, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionLeft(BOX_AlignmentOption arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionLeft, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_AlignmentOption is a centre. . May not be used to assert correctness of the BOX_AlignmentOption
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if #arg corresponds to the signature of a centre, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionCentre(BOX_AlignmentOption arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionCentre, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_AlignmentOption is a right. . May not be used to assert correctness of the BOX_AlignmentOption
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if #arg corresponds to the signature of a right, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionRight(BOX_AlignmentOption arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionRight, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_AlignmentOption has a ws-after-l. 
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if the BOX_AlignmentOption had a ws-after-l, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionWsAfterL(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOption has a options. 
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if the BOX_AlignmentOption had a options, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionOptions(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionCentre(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionRight(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOption has a ws-after-c. 
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if the BOX_AlignmentOption had a ws-after-c, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionWsAfterC(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionCentre(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOption has a ws-after-r. 
 * \param[in] arg input BOX_AlignmentOption
 * \return ATtrue if the BOX_AlignmentOption had a ws-after-r, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionWsAfterR(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionRight(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ws-after-l BOX_OptLayout of a BOX_AlignmentOption. Note that the precondition is that this BOX_AlignmentOption actually has a ws-after-l
 * \param[in] arg input BOX_AlignmentOption
 * \return the ws-after-l of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionWsAfterL(BOX_AlignmentOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the options BOX_SpaceOptionOptions of a BOX_AlignmentOption. Note that the precondition is that this BOX_AlignmentOption actually has a options
 * \param[in] arg input BOX_AlignmentOption
 * \return the options of #arg, if it exist or an undefined value if it does not
 */
BOX_SpaceOptionOptions BOX_getAlignmentOptionOptions(BOX_AlignmentOption arg) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else if (BOX_isAlignmentOptionCentre(arg)) {
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
  }
  else 
    return (BOX_SpaceOptionOptions)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/**
 * Get the ws-after-c BOX_OptLayout of a BOX_AlignmentOption. Note that the precondition is that this BOX_AlignmentOption actually has a ws-after-c
 * \param[in] arg input BOX_AlignmentOption
 * \return the ws-after-c of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionWsAfterC(BOX_AlignmentOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-r BOX_OptLayout of a BOX_AlignmentOption. Note that the precondition is that this BOX_AlignmentOption actually has a ws-after-r
 * \param[in] arg input BOX_AlignmentOption
 * \return the ws-after-r of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionWsAfterR(BOX_AlignmentOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Set the ws-after-l of a BOX_AlignmentOption. The precondition being that this BOX_AlignmentOption actually has a ws-after-l
 * \param[in] arg input BOX_AlignmentOption
 * \param[in] wsAfterL new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOption with wsAfterL at the right place, or a core dump if #arg did not have a wsAfterL
 */
BOX_AlignmentOption BOX_setAlignmentOptionWsAfterL(BOX_AlignmentOption arg, BOX_OptLayout wsAfterL) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterL), 1), 1);
  }

  ATabort("AlignmentOption has no WsAfterL: %t\n", arg);
  return (BOX_AlignmentOption)NULL;
}

/**
 * Set the options of a BOX_AlignmentOption. The precondition being that this BOX_AlignmentOption actually has a options
 * \param[in] arg input BOX_AlignmentOption
 * \param[in] options new BOX_SpaceOptionOptions to set in #arg
 * \return A new BOX_AlignmentOption with options at the right place, or a core dump if #arg did not have a options
 */
BOX_AlignmentOption BOX_setAlignmentOptionOptions(BOX_AlignmentOption arg, BOX_SpaceOptionOptions options) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isAlignmentOptionCentre(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }
  else if (BOX_isAlignmentOptionRight(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) options), 1), 2), 1);
  }

  ATabort("AlignmentOption has no Options: %t\n", arg);
  return (BOX_AlignmentOption)NULL;
}

/**
 * Set the ws-after-c of a BOX_AlignmentOption. The precondition being that this BOX_AlignmentOption actually has a ws-after-c
 * \param[in] arg input BOX_AlignmentOption
 * \param[in] wsAfterC new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOption with wsAfterC at the right place, or a core dump if #arg did not have a wsAfterC
 */
BOX_AlignmentOption BOX_setAlignmentOptionWsAfterC(BOX_AlignmentOption arg, BOX_OptLayout wsAfterC) {
  if (BOX_isAlignmentOptionCentre(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterC), 1), 1);
  }

  ATabort("AlignmentOption has no WsAfterC: %t\n", arg);
  return (BOX_AlignmentOption)NULL;
}

/**
 * Set the ws-after-r of a BOX_AlignmentOption. The precondition being that this BOX_AlignmentOption actually has a ws-after-r
 * \param[in] arg input BOX_AlignmentOption
 * \param[in] wsAfterR new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOption with wsAfterR at the right place, or a core dump if #arg did not have a wsAfterR
 */
BOX_AlignmentOption BOX_setAlignmentOptionWsAfterR(BOX_AlignmentOption arg, BOX_OptLayout wsAfterR) {
  if (BOX_isAlignmentOptionRight(arg)) {
    return (BOX_AlignmentOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterR), 1), 1);
  }

  ATabort("AlignmentOption has no WsAfterR: %t\n", arg);
  return (BOX_AlignmentOption)NULL;
}

/**
 * Assert whether a BOX_AlignmentOptions is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_AlignmentOptions
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidAlignmentOptions(BOX_AlignmentOptions arg) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptions is a Default. Always returns ATtrue
 * \param[in] arg input BOX_AlignmentOptions
 * \return ATtrue if #arg corresponds to the signature of a Default, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionsDefault(BOX_AlignmentOptions arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionsDefault, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_AlignmentOptions has a ws-after-(. 
 * \param[in] arg input BOX_AlignmentOptions
 * \return ATtrue if the BOX_AlignmentOptions had a ws-after-(, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionsWsAfterParenOpen(BOX_AlignmentOptions arg) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptions has a list. 
 * \param[in] arg input BOX_AlignmentOptions
 * \return ATtrue if the BOX_AlignmentOptions had a list, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionsList(BOX_AlignmentOptions arg) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptions has a ws-after-list. 
 * \param[in] arg input BOX_AlignmentOptions
 * \return ATtrue if the BOX_AlignmentOptions had a ws-after-list, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionsWsAfterList(BOX_AlignmentOptions arg) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ws-after-( BOX_OptLayout of a BOX_AlignmentOptions. Note that the precondition is that this BOX_AlignmentOptions actually has a ws-after-(
 * \param[in] arg input BOX_AlignmentOptions
 * \return the ws-after-( of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionsWsAfterParenOpen(BOX_AlignmentOptions arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the list BOX_AlignmentOptionList of a BOX_AlignmentOptions. Note that the precondition is that this BOX_AlignmentOptions actually has a list
 * \param[in] arg input BOX_AlignmentOptions
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
BOX_AlignmentOptionList BOX_getAlignmentOptionsList(BOX_AlignmentOptions arg) {
  
    return (BOX_AlignmentOptionList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), 1);
}

/**
 * Get the ws-after-list BOX_OptLayout of a BOX_AlignmentOptions. Note that the precondition is that this BOX_AlignmentOptions actually has a ws-after-list
 * \param[in] arg input BOX_AlignmentOptions
 * \return the ws-after-list of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionsWsAfterList(BOX_AlignmentOptions arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Set the ws-after-( of a BOX_AlignmentOptions. The precondition being that this BOX_AlignmentOptions actually has a ws-after-(
 * \param[in] arg input BOX_AlignmentOptions
 * \param[in] wsAfterParenOpen new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOptions with wsAfterParenOpen at the right place, or a core dump if #arg did not have a wsAfterParenOpen
 */
BOX_AlignmentOptions BOX_setAlignmentOptionsWsAfterParenOpen(BOX_AlignmentOptions arg, BOX_OptLayout wsAfterParenOpen) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return (BOX_AlignmentOptions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterParenOpen), 1), 1);
  }

  ATabort("AlignmentOptions has no WsAfterParenOpen: %t\n", arg);
  return (BOX_AlignmentOptions)NULL;
}

/**
 * Set the list of a BOX_AlignmentOptions. The precondition being that this BOX_AlignmentOptions actually has a list
 * \param[in] arg input BOX_AlignmentOptions
 * \param[in] list new BOX_AlignmentOptionList to set in #arg
 * \return A new BOX_AlignmentOptions with list at the right place, or a core dump if #arg did not have a list
 */
BOX_AlignmentOptions BOX_setAlignmentOptionsList(BOX_AlignmentOptions arg, BOX_AlignmentOptionList list) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return (BOX_AlignmentOptions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2), (ATerm)((ATerm) list), 1), 2), 1);
  }

  ATabort("AlignmentOptions has no List: %t\n", arg);
  return (BOX_AlignmentOptions)NULL;
}

/**
 * Set the ws-after-list of a BOX_AlignmentOptions. The precondition being that this BOX_AlignmentOptions actually has a ws-after-list
 * \param[in] arg input BOX_AlignmentOptions
 * \param[in] wsAfterList new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOptions with wsAfterList at the right place, or a core dump if #arg did not have a wsAfterList
 */
BOX_AlignmentOptions BOX_setAlignmentOptionsWsAfterList(BOX_AlignmentOptions arg, BOX_OptLayout wsAfterList) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return (BOX_AlignmentOptions)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 3), 1);
  }

  ATabort("AlignmentOptions has no WsAfterList: %t\n", arg);
  return (BOX_AlignmentOptions)NULL;
}

/**
 * Assert whether a BOX_SpaceOptionOptions is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidSpaceOptionOptions(BOX_SpaceOptionOptions arg) {
  if (BOX_isSpaceOptionOptionsEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceOptionOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOptionOptions is a empty. . May not be used to assert correctness of the BOX_SpaceOptionOptions
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceOptionOptionsEmpty(BOX_SpaceOptionOptions arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternSpaceOptionOptionsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_SpaceOptionOptions is a single. . May not be used to assert correctness of the BOX_SpaceOptionOptions
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceOptionOptionsSingle(BOX_SpaceOptionOptions arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceOptionOptionsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceOptionOptions is a many. . May not be used to assert correctness of the BOX_SpaceOptionOptions
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceOptionOptionsMany(BOX_SpaceOptionOptions arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceOptionOptionsMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceOptionOptions has a head. 
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if the BOX_SpaceOptionOptions had a head, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionOptionsHead(BOX_SpaceOptionOptions arg) {
  if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceOptionOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOptionOptions has a ws-after-head. 
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if the BOX_SpaceOptionOptions had a ws-after-head, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionOptionsWsAfterHead(BOX_SpaceOptionOptions arg) {
  if (BOX_isSpaceOptionOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOptionOptions has a tail. 
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return ATtrue if the BOX_SpaceOptionOptions had a tail, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionOptionsTail(BOX_SpaceOptionOptions arg) {
  if (BOX_isSpaceOptionOptionsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Returns a list of all but the first element of a BOX_SpaceOptionOptions. 
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return A new BOX_SpaceOptionOptions, without the first element and the separator(s) just after it.)
 */
BOX_SpaceOptionOptions BOX_getSpaceOptionOptionsTail(BOX_SpaceOptionOptions arg) {
  assert(!BOX_isSpaceOptionOptionsEmpty(arg) && "getTail on an empty list");
  if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return (BOX_SpaceOptionOptions) BOX_makeSpaceOptionOptionsEmpty();
  }
  else {
  
    return (BOX_SpaceOptionOptions)ATgetTail((ATermList)arg, 2);
  }
}

/**
 * Get the head BOX_SpaceOption of a BOX_SpaceOptionOptions. Note that the precondition is that this BOX_SpaceOptionOptions actually has a head
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_SpaceOption BOX_getSpaceOptionOptionsHead(BOX_SpaceOptionOptions arg) {
  if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return (BOX_SpaceOption)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_SpaceOption)ATgetFirst((ATermList)arg);
}

/**
 * Get the ws-after-head BOX_OptLayout of a BOX_SpaceOptionOptions. Note that the precondition is that this BOX_SpaceOptionOptions actually has a ws-after-head
 * \param[in] arg input BOX_SpaceOptionOptions
 * \return the ws-after-head of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getSpaceOptionOptionsWsAfterHead(BOX_SpaceOptionOptions arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 1);
}

/**
 * Set the head of a BOX_SpaceOptionOptions. The precondition being that this BOX_SpaceOptionOptions actually has a head
 * \param[in] arg input BOX_SpaceOptionOptions
 * \param[in] head new BOX_SpaceOption to set in #arg
 * \return A new BOX_SpaceOptionOptions with head at the right place, or a core dump if #arg did not have a head
 */
BOX_SpaceOptionOptions BOX_setSpaceOptionOptionsHead(BOX_SpaceOptionOptions arg, BOX_SpaceOption head) {
  if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return (BOX_SpaceOptionOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isSpaceOptionOptionsMany(arg)) {
    return (BOX_SpaceOptionOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("SpaceOptionOptions has no Head: %t\n", arg);
  return (BOX_SpaceOptionOptions)NULL;
}

/**
 * Set the ws-after-head of a BOX_SpaceOptionOptions. The precondition being that this BOX_SpaceOptionOptions actually has a ws-after-head
 * \param[in] arg input BOX_SpaceOptionOptions
 * \param[in] wsAfterHead new BOX_OptLayout to set in #arg
 * \return A new BOX_SpaceOptionOptions with wsAfterHead at the right place, or a core dump if #arg did not have a wsAfterHead
 */
BOX_SpaceOptionOptions BOX_setSpaceOptionOptionsWsAfterHead(BOX_SpaceOptionOptions arg, BOX_OptLayout wsAfterHead) {
  if (BOX_isSpaceOptionOptionsMany(arg)) {
    return (BOX_SpaceOptionOptions)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("SpaceOptionOptions has no WsAfterHead: %t\n", arg);
  return (BOX_SpaceOptionOptions)NULL;
}

/**
 * Set the tail of a BOX_SpaceOptionOptions. The precondition being that this BOX_SpaceOptionOptions actually has a tail
 * \param[in] arg input BOX_SpaceOptionOptions
 * \param[in] tail new BOX_SpaceOptionOptions to set in #arg
 * \return A new BOX_SpaceOptionOptions with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_SpaceOptionOptions BOX_setSpaceOptionOptionsTail(BOX_SpaceOptionOptions arg, BOX_SpaceOptionOptions tail) {
  if (BOX_isSpaceOptionOptionsMany(arg)) {
    return (BOX_SpaceOptionOptions)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 2);
  }

  ATabort("SpaceOptionOptions has no Tail: %t\n", arg);
  return (BOX_SpaceOptionOptions)NULL;
}

/**
 * Assert whether a BOX_AlignmentOptionList is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidAlignmentOptionList(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptionList is a empty. . May not be used to assert correctness of the BOX_AlignmentOptionList
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionListEmpty(BOX_AlignmentOptionList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionListEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_AlignmentOptionList is a single. . May not be used to assert correctness of the BOX_AlignmentOptionList
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionListSingle(BOX_AlignmentOptionList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_AlignmentOptionList is a many. . May not be used to assert correctness of the BOX_AlignmentOptionList
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isAlignmentOptionListMany(BOX_AlignmentOptionList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternAlignmentOptionListMany, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_AlignmentOptionList has a head. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if the BOX_AlignmentOptionList had a head, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionListHead(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isAlignmentOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptionList has a ws-after-head. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if the BOX_AlignmentOptionList had a ws-after-head, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionListWsAfterHead(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptionList has a ws-after-sep. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if the BOX_AlignmentOptionList had a ws-after-sep, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionListWsAfterSep(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_AlignmentOptionList has a tail. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return ATtrue if the BOX_AlignmentOptionList had a tail, or ATfalse otherwise
 */
ATbool BOX_hasAlignmentOptionListTail(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Returns a list of all but the first element of a BOX_AlignmentOptionList. 
 * \param[in] arg input BOX_AlignmentOptionList
 * \return A new BOX_AlignmentOptionList, without the first element and the separator(s) just after it.)
 */
BOX_AlignmentOptionList BOX_getAlignmentOptionListTail(BOX_AlignmentOptionList arg) {
  assert(!BOX_isAlignmentOptionListEmpty(arg) && "getTail on an empty list");
  if (BOX_isAlignmentOptionListSingle(arg)) {
    return (BOX_AlignmentOptionList) BOX_makeAlignmentOptionListEmpty();
  }
  else {
  
    return (BOX_AlignmentOptionList)ATgetTail((ATermList)arg, 4);
  }
}

/**
 * Get the head BOX_AlignmentOption of a BOX_AlignmentOptionList. Note that the precondition is that this BOX_AlignmentOptionList actually has a head
 * \param[in] arg input BOX_AlignmentOptionList
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_AlignmentOption BOX_getAlignmentOptionListHead(BOX_AlignmentOptionList arg) {
  if (BOX_isAlignmentOptionListSingle(arg)) {
    return (BOX_AlignmentOption)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_AlignmentOption)ATgetFirst((ATermList)arg);
}

/**
 * Get the ws-after-head BOX_OptLayout of a BOX_AlignmentOptionList. Note that the precondition is that this BOX_AlignmentOptionList actually has a ws-after-head
 * \param[in] arg input BOX_AlignmentOptionList
 * \return the ws-after-head of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionListWsAfterHead(BOX_AlignmentOptionList arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 1);
}

/**
 * Get the ws-after-sep BOX_OptLayout of a BOX_AlignmentOptionList. Note that the precondition is that this BOX_AlignmentOptionList actually has a ws-after-sep
 * \param[in] arg input BOX_AlignmentOptionList
 * \return the ws-after-sep of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getAlignmentOptionListWsAfterSep(BOX_AlignmentOptionList arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 3);
}

/**
 * Set the head of a BOX_AlignmentOptionList. The precondition being that this BOX_AlignmentOptionList actually has a head
 * \param[in] arg input BOX_AlignmentOptionList
 * \param[in] head new BOX_AlignmentOption to set in #arg
 * \return A new BOX_AlignmentOptionList with head at the right place, or a core dump if #arg did not have a head
 */
BOX_AlignmentOptionList BOX_setAlignmentOptionListHead(BOX_AlignmentOptionList arg, BOX_AlignmentOption head) {
  if (BOX_isAlignmentOptionListSingle(arg)) {
    return (BOX_AlignmentOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isAlignmentOptionListMany(arg)) {
    return (BOX_AlignmentOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("AlignmentOptionList has no Head: %t\n", arg);
  return (BOX_AlignmentOptionList)NULL;
}

/**
 * Set the ws-after-head of a BOX_AlignmentOptionList. The precondition being that this BOX_AlignmentOptionList actually has a ws-after-head
 * \param[in] arg input BOX_AlignmentOptionList
 * \param[in] wsAfterHead new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOptionList with wsAfterHead at the right place, or a core dump if #arg did not have a wsAfterHead
 */
BOX_AlignmentOptionList BOX_setAlignmentOptionListWsAfterHead(BOX_AlignmentOptionList arg, BOX_OptLayout wsAfterHead) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return (BOX_AlignmentOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("AlignmentOptionList has no WsAfterHead: %t\n", arg);
  return (BOX_AlignmentOptionList)NULL;
}

/**
 * Set the ws-after-sep of a BOX_AlignmentOptionList. The precondition being that this BOX_AlignmentOptionList actually has a ws-after-sep
 * \param[in] arg input BOX_AlignmentOptionList
 * \param[in] wsAfterSep new BOX_OptLayout to set in #arg
 * \return A new BOX_AlignmentOptionList with wsAfterSep at the right place, or a core dump if #arg did not have a wsAfterSep
 */
BOX_AlignmentOptionList BOX_setAlignmentOptionListWsAfterSep(BOX_AlignmentOptionList arg, BOX_OptLayout wsAfterSep) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return (BOX_AlignmentOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterSep), 3);
  }

  ATabort("AlignmentOptionList has no WsAfterSep: %t\n", arg);
  return (BOX_AlignmentOptionList)NULL;
}

/**
 * Set the tail of a BOX_AlignmentOptionList. The precondition being that this BOX_AlignmentOptionList actually has a tail
 * \param[in] arg input BOX_AlignmentOptionList
 * \param[in] tail new BOX_AlignmentOptionList to set in #arg
 * \return A new BOX_AlignmentOptionList with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_AlignmentOptionList BOX_setAlignmentOptionListTail(BOX_AlignmentOptionList arg, BOX_AlignmentOptionList tail) {
  if (BOX_isAlignmentOptionListMany(arg)) {
    return (BOX_AlignmentOptionList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 4);
  }

  ATabort("AlignmentOptionList has no Tail: %t\n", arg);
  return (BOX_AlignmentOptionList)NULL;
}

/**
 * Assert whether a BOX_SpaceSymbol is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_SpaceSymbol
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidSpaceSymbol(BOX_SpaceSymbol arg) {
  if (BOX_isSpaceSymbolHorizontal(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceSymbolVertical(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceSymbolIndentation(arg)) {
    return ATtrue;
  }
  else if (BOX_isSpaceSymbolTabstop(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceSymbol is a horizontal. . May not be used to assert correctness of the BOX_SpaceSymbol
 * \param[in] arg input BOX_SpaceSymbol
 * \return ATtrue if #arg corresponds to the signature of a horizontal, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceSymbolHorizontal(BOX_SpaceSymbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceSymbolHorizontal);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceSymbol is a vertical. . May not be used to assert correctness of the BOX_SpaceSymbol
 * \param[in] arg input BOX_SpaceSymbol
 * \return ATtrue if #arg corresponds to the signature of a vertical, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceSymbolVertical(BOX_SpaceSymbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceSymbolVertical);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceSymbol is a indentation. . May not be used to assert correctness of the BOX_SpaceSymbol
 * \param[in] arg input BOX_SpaceSymbol
 * \return ATtrue if #arg corresponds to the signature of a indentation, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceSymbolIndentation(BOX_SpaceSymbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceSymbolIndentation);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceSymbol is a tabstop. . May not be used to assert correctness of the BOX_SpaceSymbol
 * \param[in] arg input BOX_SpaceSymbol
 * \return ATtrue if #arg corresponds to the signature of a tabstop, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceSymbolTabstop(BOX_SpaceSymbol arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternSpaceSymbolTabstop);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_SpaceOption is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidSpaceOption(BOX_SpaceOption arg) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOption is a Default. Always returns ATtrue
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if #arg corresponds to the signature of a Default, or ATfalse otherwise
 */
inline ATbool BOX_isSpaceOptionDefault(BOX_SpaceOption arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternSpaceOptionDefault, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_SpaceOption has a SpaceSymbol. 
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if the BOX_SpaceOption had a SpaceSymbol, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionSpaceSymbol(BOX_SpaceOption arg) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOption has a ws-after-SpaceSymbol. 
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if the BOX_SpaceOption had a ws-after-SpaceSymbol, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionWsAfterSpaceSymbol(BOX_SpaceOption arg) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOption has a ws-after-=. 
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if the BOX_SpaceOption had a ws-after-=, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionWsAfterEquals(BOX_SpaceOption arg) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_SpaceOption has a NatCon. 
 * \param[in] arg input BOX_SpaceOption
 * \return ATtrue if the BOX_SpaceOption had a NatCon, or ATfalse otherwise
 */
ATbool BOX_hasSpaceOptionNatCon(BOX_SpaceOption arg) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the SpaceSymbol BOX_SpaceSymbol of a BOX_SpaceOption. Note that the precondition is that this BOX_SpaceOption actually has a SpaceSymbol
 * \param[in] arg input BOX_SpaceOption
 * \return the SpaceSymbol of #arg, if it exist or an undefined value if it does not
 */
BOX_SpaceSymbol BOX_getSpaceOptionSpaceSymbol(BOX_SpaceOption arg) {
  
    return (BOX_SpaceSymbol)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the ws-after-SpaceSymbol BOX_OptLayout of a BOX_SpaceOption. Note that the precondition is that this BOX_SpaceOption actually has a ws-after-SpaceSymbol
 * \param[in] arg input BOX_SpaceOption
 * \return the ws-after-SpaceSymbol of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getSpaceOptionWsAfterSpaceSymbol(BOX_SpaceOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-= BOX_OptLayout of a BOX_SpaceOption. Note that the precondition is that this BOX_SpaceOption actually has a ws-after-=
 * \param[in] arg input BOX_SpaceOption
 * \return the ws-after-= of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getSpaceOptionWsAfterEquals(BOX_SpaceOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Get the NatCon BOX_NatCon of a BOX_SpaceOption. Note that the precondition is that this BOX_SpaceOption actually has a NatCon
 * \param[in] arg input BOX_SpaceOption
 * \return the NatCon of #arg, if it exist or an undefined value if it does not
 */
BOX_NatCon BOX_getSpaceOptionNatCon(BOX_SpaceOption arg) {
  
    return (BOX_NatCon)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/**
 * Set the SpaceSymbol of a BOX_SpaceOption. The precondition being that this BOX_SpaceOption actually has a SpaceSymbol
 * \param[in] arg input BOX_SpaceOption
 * \param[in] SpaceSymbol new BOX_SpaceSymbol to set in #arg
 * \return A new BOX_SpaceOption with SpaceSymbol at the right place, or a core dump if #arg did not have a SpaceSymbol
 */
BOX_SpaceOption BOX_setSpaceOptionSpaceSymbol(BOX_SpaceOption arg, BOX_SpaceSymbol SpaceSymbol) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return (BOX_SpaceOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) SpaceSymbol), 0), 1);
  }

  ATabort("SpaceOption has no SpaceSymbol: %t\n", arg);
  return (BOX_SpaceOption)NULL;
}

/**
 * Set the ws-after-SpaceSymbol of a BOX_SpaceOption. The precondition being that this BOX_SpaceOption actually has a ws-after-SpaceSymbol
 * \param[in] arg input BOX_SpaceOption
 * \param[in] wsAfterSpaceSymbol new BOX_OptLayout to set in #arg
 * \return A new BOX_SpaceOption with wsAfterSpaceSymbol at the right place, or a core dump if #arg did not have a wsAfterSpaceSymbol
 */
BOX_SpaceOption BOX_setSpaceOptionWsAfterSpaceSymbol(BOX_SpaceOption arg, BOX_OptLayout wsAfterSpaceSymbol) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return (BOX_SpaceOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterSpaceSymbol), 1), 1);
  }

  ATabort("SpaceOption has no WsAfterSpaceSymbol: %t\n", arg);
  return (BOX_SpaceOption)NULL;
}

/**
 * Set the ws-after-= of a BOX_SpaceOption. The precondition being that this BOX_SpaceOption actually has a ws-after-=
 * \param[in] arg input BOX_SpaceOption
 * \param[in] wsAfterEquals new BOX_OptLayout to set in #arg
 * \return A new BOX_SpaceOption with wsAfterEquals at the right place, or a core dump if #arg did not have a wsAfterEquals
 */
BOX_SpaceOption BOX_setSpaceOptionWsAfterEquals(BOX_SpaceOption arg, BOX_OptLayout wsAfterEquals) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return (BOX_SpaceOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEquals), 3), 1);
  }

  ATabort("SpaceOption has no WsAfterEquals: %t\n", arg);
  return (BOX_SpaceOption)NULL;
}

/**
 * Set the NatCon of a BOX_SpaceOption. The precondition being that this BOX_SpaceOption actually has a NatCon
 * \param[in] arg input BOX_SpaceOption
 * \param[in] NatCon new BOX_NatCon to set in #arg
 * \return A new BOX_SpaceOption with NatCon at the right place, or a core dump if #arg did not have a NatCon
 */
BOX_SpaceOption BOX_setSpaceOptionNatCon(BOX_SpaceOption arg, BOX_NatCon NatCon) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return (BOX_SpaceOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 4), 1);
  }

  ATabort("SpaceOption has no NatCon: %t\n", arg);
  return (BOX_SpaceOption)NULL;
}

/**
 * Assert whether a BOX_Box is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_Box
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidBox(BOX_Box arg) {
  if (BOX_isBoxString(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box is a string. . May not be used to assert correctness of the BOX_Box
 * \param[in] arg input BOX_Box
 * \return ATtrue if #arg corresponds to the signature of a string, or ATfalse otherwise
 */
inline ATbool BOX_isBoxString(BOX_Box arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxString, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_Box is a appl. . May not be used to assert correctness of the BOX_Box
 * \param[in] arg input BOX_Box
 * \return ATtrue if #arg corresponds to the signature of a appl, or ATfalse otherwise
 */
inline ATbool BOX_isBoxAppl(BOX_Box arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxAppl, NULL, NULL, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_Box has a StrCon. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a StrCon, or ATfalse otherwise
 */
ATbool BOX_hasBoxStrCon(BOX_Box arg) {
  if (BOX_isBoxString(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box has a operator. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a operator, or ATfalse otherwise
 */
ATbool BOX_hasBoxOperator(BOX_Box arg) {
  if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box has a ws-after-operator. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a ws-after-operator, or ATfalse otherwise
 */
ATbool BOX_hasBoxWsAfterOperator(BOX_Box arg) {
  if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box has a ws-after-[. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a ws-after-[, or ATfalse otherwise
 */
ATbool BOX_hasBoxWsAfterBracketOpen(BOX_Box arg) {
  if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box has a list. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a list, or ATfalse otherwise
 */
ATbool BOX_hasBoxList(BOX_Box arg) {
  if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_Box has a ws-after-list. 
 * \param[in] arg input BOX_Box
 * \return ATtrue if the BOX_Box had a ws-after-list, or ATfalse otherwise
 */
ATbool BOX_hasBoxWsAfterList(BOX_Box arg) {
  if (BOX_isBoxAppl(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the StrCon BOX_StrCon of a BOX_Box. Note that the precondition is that this BOX_Box actually has a StrCon
 * \param[in] arg input BOX_Box
 * \return the StrCon of #arg, if it exist or an undefined value if it does not
 */
BOX_StrCon BOX_getBoxStrCon(BOX_Box arg) {
  
    return (BOX_StrCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the operator BOX_BoxOperator of a BOX_Box. Note that the precondition is that this BOX_Box actually has a operator
 * \param[in] arg input BOX_Box
 * \return the operator of #arg, if it exist or an undefined value if it does not
 */
BOX_BoxOperator BOX_getBoxOperator(BOX_Box arg) {
  
    return (BOX_BoxOperator)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the ws-after-operator BOX_OptLayout of a BOX_Box. Note that the precondition is that this BOX_Box actually has a ws-after-operator
 * \param[in] arg input BOX_Box
 * \return the ws-after-operator of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxWsAfterOperator(BOX_Box arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-[ BOX_OptLayout of a BOX_Box. Note that the precondition is that this BOX_Box actually has a ws-after-[
 * \param[in] arg input BOX_Box
 * \return the ws-after-[ of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxWsAfterBracketOpen(BOX_Box arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Get the list BOX_BoxList of a BOX_Box. Note that the precondition is that this BOX_Box actually has a list
 * \param[in] arg input BOX_Box
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
BOX_BoxList BOX_getBoxList(BOX_Box arg) {
  
    return (BOX_BoxList)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4), 1);
}

/**
 * Get the ws-after-list BOX_OptLayout of a BOX_Box. Note that the precondition is that this BOX_Box actually has a ws-after-list
 * \param[in] arg input BOX_Box
 * \return the ws-after-list of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxWsAfterList(BOX_Box arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 5);
}

/**
 * Set the StrCon of a BOX_Box. The precondition being that this BOX_Box actually has a StrCon
 * \param[in] arg input BOX_Box
 * \param[in] StrCon new BOX_StrCon to set in #arg
 * \return A new BOX_Box with StrCon at the right place, or a core dump if #arg did not have a StrCon
 */
BOX_Box BOX_setBoxStrCon(BOX_Box arg, BOX_StrCon StrCon) {
  if (BOX_isBoxString(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrCon), 0), 1);
  }

  ATabort("Box has no StrCon: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Set the operator of a BOX_Box. The precondition being that this BOX_Box actually has a operator
 * \param[in] arg input BOX_Box
 * \param[in] operator new BOX_BoxOperator to set in #arg
 * \return A new BOX_Box with operator at the right place, or a core dump if #arg did not have a operator
 */
BOX_Box BOX_setBoxOperator(BOX_Box arg, BOX_BoxOperator operator) {
  if (BOX_isBoxAppl(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) operator), 0), 1);
  }

  ATabort("Box has no Operator: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Set the ws-after-operator of a BOX_Box. The precondition being that this BOX_Box actually has a ws-after-operator
 * \param[in] arg input BOX_Box
 * \param[in] wsAfterOperator new BOX_OptLayout to set in #arg
 * \return A new BOX_Box with wsAfterOperator at the right place, or a core dump if #arg did not have a wsAfterOperator
 */
BOX_Box BOX_setBoxWsAfterOperator(BOX_Box arg, BOX_OptLayout wsAfterOperator) {
  if (BOX_isBoxAppl(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterOperator), 1), 1);
  }

  ATabort("Box has no WsAfterOperator: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Set the ws-after-[ of a BOX_Box. The precondition being that this BOX_Box actually has a ws-after-[
 * \param[in] arg input BOX_Box
 * \param[in] wsAfterBracketOpen new BOX_OptLayout to set in #arg
 * \return A new BOX_Box with wsAfterBracketOpen at the right place, or a core dump if #arg did not have a wsAfterBracketOpen
 */
BOX_Box BOX_setBoxWsAfterBracketOpen(BOX_Box arg, BOX_OptLayout wsAfterBracketOpen) {
  if (BOX_isBoxAppl(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterBracketOpen), 3), 1);
  }

  ATabort("Box has no WsAfterBracketOpen: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Set the list of a BOX_Box. The precondition being that this BOX_Box actually has a list
 * \param[in] arg input BOX_Box
 * \param[in] list new BOX_BoxList to set in #arg
 * \return A new BOX_Box with list at the right place, or a core dump if #arg did not have a list
 */
BOX_Box BOX_setBoxList(BOX_Box arg, BOX_BoxList list) {
  if (BOX_isBoxAppl(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4), (ATerm)((ATerm) list), 1), 4), 1);
  }

  ATabort("Box has no List: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Set the ws-after-list of a BOX_Box. The precondition being that this BOX_Box actually has a ws-after-list
 * \param[in] arg input BOX_Box
 * \param[in] wsAfterList new BOX_OptLayout to set in #arg
 * \return A new BOX_Box with wsAfterList at the right place, or a core dump if #arg did not have a wsAfterList
 */
BOX_Box BOX_setBoxWsAfterList(BOX_Box arg, BOX_OptLayout wsAfterList) {
  if (BOX_isBoxAppl(arg)) {
    return (BOX_Box)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterList), 5), 1);
  }

  ATabort("Box has no WsAfterList: %t\n", arg);
  return (BOX_Box)NULL;
}

/**
 * Assert whether a BOX_BoxList is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidBoxList(BOX_BoxList arg) {
  if (BOX_isBoxListEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxList is a empty. . May not be used to assert correctness of the BOX_BoxList
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isBoxListEmpty(BOX_BoxList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternBoxListEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_BoxList is a single. . May not be used to assert correctness of the BOX_BoxList
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isBoxListSingle(BOX_BoxList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxList is a many. . May not be used to assert correctness of the BOX_BoxList
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isBoxListMany(BOX_BoxList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternBoxListMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_BoxList has a head. 
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if the BOX_BoxList had a head, or ATfalse otherwise
 */
ATbool BOX_hasBoxListHead(BOX_BoxList arg) {
  if (BOX_isBoxListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isBoxListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxList has a ws-after-head. 
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if the BOX_BoxList had a ws-after-head, or ATfalse otherwise
 */
ATbool BOX_hasBoxListWsAfterHead(BOX_BoxList arg) {
  if (BOX_isBoxListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_BoxList has a tail. 
 * \param[in] arg input BOX_BoxList
 * \return ATtrue if the BOX_BoxList had a tail, or ATfalse otherwise
 */
ATbool BOX_hasBoxListTail(BOX_BoxList arg) {
  if (BOX_isBoxListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Returns a list of all but the first element of a BOX_BoxList. 
 * \param[in] arg input BOX_BoxList
 * \return A new BOX_BoxList, without the first element and the separator(s) just after it.)
 */
BOX_BoxList BOX_getBoxListTail(BOX_BoxList arg) {
  assert(!BOX_isBoxListEmpty(arg) && "getTail on an empty list");
  if (BOX_isBoxListSingle(arg)) {
    return (BOX_BoxList) BOX_makeBoxListEmpty();
  }
  else {
  
    return (BOX_BoxList)ATgetTail((ATermList)arg, 2);
  }
}

/**
 * Get the head BOX_Box of a BOX_BoxList. Note that the precondition is that this BOX_BoxList actually has a head
 * \param[in] arg input BOX_BoxList
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_Box BOX_getBoxListHead(BOX_BoxList arg) {
  if (BOX_isBoxListSingle(arg)) {
    return (BOX_Box)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_Box)ATgetFirst((ATermList)arg);
}

/**
 * Get the ws-after-head BOX_OptLayout of a BOX_BoxList. Note that the precondition is that this BOX_BoxList actually has a ws-after-head
 * \param[in] arg input BOX_BoxList
 * \return the ws-after-head of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getBoxListWsAfterHead(BOX_BoxList arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 1);
}

/**
 * Set the head of a BOX_BoxList. The precondition being that this BOX_BoxList actually has a head
 * \param[in] arg input BOX_BoxList
 * \param[in] head new BOX_Box to set in #arg
 * \return A new BOX_BoxList with head at the right place, or a core dump if #arg did not have a head
 */
BOX_BoxList BOX_setBoxListHead(BOX_BoxList arg, BOX_Box head) {
  if (BOX_isBoxListSingle(arg)) {
    return (BOX_BoxList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isBoxListMany(arg)) {
    return (BOX_BoxList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("BoxList has no Head: %t\n", arg);
  return (BOX_BoxList)NULL;
}

/**
 * Set the ws-after-head of a BOX_BoxList. The precondition being that this BOX_BoxList actually has a ws-after-head
 * \param[in] arg input BOX_BoxList
 * \param[in] wsAfterHead new BOX_OptLayout to set in #arg
 * \return A new BOX_BoxList with wsAfterHead at the right place, or a core dump if #arg did not have a wsAfterHead
 */
BOX_BoxList BOX_setBoxListWsAfterHead(BOX_BoxList arg, BOX_OptLayout wsAfterHead) {
  if (BOX_isBoxListMany(arg)) {
    return (BOX_BoxList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("BoxList has no WsAfterHead: %t\n", arg);
  return (BOX_BoxList)NULL;
}

/**
 * Set the tail of a BOX_BoxList. The precondition being that this BOX_BoxList actually has a tail
 * \param[in] arg input BOX_BoxList
 * \param[in] tail new BOX_BoxList to set in #arg
 * \return A new BOX_BoxList with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_BoxList BOX_setBoxListTail(BOX_BoxList arg, BOX_BoxList tail) {
  if (BOX_isBoxListMany(arg)) {
    return (BOX_BoxList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 2);
  }

  ATabort("BoxList has no Tail: %t\n", arg);
  return (BOX_BoxList)NULL;
}

/**
 * Assert whether a BOX_LexLayout is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexLayout(BOX_LexLayout arg) {
  if (BOX_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexLayoutLine(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexLayoutNested(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexLayout is a whitespace. . May not be used to assert correctness of the BOX_LexLayout
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if #arg corresponds to the signature of a whitespace, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutWhitespace(BOX_LexLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexLayoutWhitespace, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexLayout is a line. . May not be used to assert correctness of the BOX_LexLayout
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if #arg corresponds to the signature of a line, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutLine(BOX_LexLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexLayoutLine, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexLayout is a nested. . May not be used to assert correctness of the BOX_LexLayout
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if #arg corresponds to the signature of a nested, or ATfalse otherwise
 */
inline ATbool BOX_isLexLayoutNested(BOX_LexLayout arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexLayoutNested, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexLayout has a ch. 
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if the BOX_LexLayout had a ch, or ATfalse otherwise
 */
ATbool BOX_hasLexLayoutCh(BOX_LexLayout arg) {
  if (BOX_isLexLayoutWhitespace(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexLayout has a line. 
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if the BOX_LexLayout had a line, or ATfalse otherwise
 */
ATbool BOX_hasLexLayoutLine(BOX_LexLayout arg) {
  if (BOX_isLexLayoutLine(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexLayout has a content. 
 * \param[in] arg input BOX_LexLayout
 * \return ATtrue if the BOX_LexLayout had a content, or ATfalse otherwise
 */
ATbool BOX_hasLexLayoutContent(BOX_LexLayout arg) {
  if (BOX_isLexLayoutNested(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the ch char of a BOX_LexLayout. Note that the precondition is that this BOX_LexLayout actually has a ch
 * \param[in] arg input BOX_LexLayout
 * \return the ch of #arg, if it exist or an undefined value if it does not
 */
char BOX_getLexLayoutCh(BOX_LexLayout arg) {
  
    return (char)BOX_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

/**
 * Get the line char* of a BOX_LexLayout. Note that the precondition is that this BOX_LexLayout actually has a line
 * \param[in] arg input BOX_LexLayout
 * \return the line of #arg, if it exist or an undefined value if it does not
 */
char* BOX_getLexLayoutLine(BOX_LexLayout arg) {
  
    return (char*)BOX_charsToString((ATerm)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), 1));
}

/**
 * Get the content char* of a BOX_LexLayout. Note that the precondition is that this BOX_LexLayout actually has a content
 * \param[in] arg input BOX_LexLayout
 * \return the content of #arg, if it exist or an undefined value if it does not
 */
char* BOX_getLexLayoutContent(BOX_LexLayout arg) {
  
    return (char*)BOX_charsToString((ATerm)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), 1));
}

/**
 * Set the ch of a BOX_LexLayout. The precondition being that this BOX_LexLayout actually has a ch
 * \param[in] arg input BOX_LexLayout
 * \param[in] ch new char to set in #arg
 * \return A new BOX_LexLayout with ch at the right place, or a core dump if #arg did not have a ch
 */
BOX_LexLayout BOX_setLexLayoutCh(BOX_LexLayout arg, char ch) {
  if (BOX_isLexLayoutWhitespace(arg)) {
    return (BOX_LexLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) BOX_byteToChar(ch))), 0), 1);
  }

  ATabort("LexLayout has no Ch: %t\n", arg);
  return (BOX_LexLayout)NULL;
}

/**
 * Set the line of a BOX_LexLayout. The precondition being that this BOX_LexLayout actually has a line
 * \param[in] arg input BOX_LexLayout
 * \param[in] line new const char* to set in #arg
 * \return A new BOX_LexLayout with line at the right place, or a core dump if #arg did not have a line
 */
BOX_LexLayout BOX_setLexLayoutLine(BOX_LexLayout arg, const char* line) {
  if (BOX_isLexLayoutLine(arg)) {
    return (BOX_LexLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), (ATerm)((ATerm) ((ATerm) BOX_stringToChars(line))), 1), 1), 1);
  }

  ATabort("LexLayout has no Line: %t\n", arg);
  return (BOX_LexLayout)NULL;
}

/**
 * Set the content of a BOX_LexLayout. The precondition being that this BOX_LexLayout actually has a content
 * \param[in] arg input BOX_LexLayout
 * \param[in] content new const char* to set in #arg
 * \return A new BOX_LexLayout with content at the right place, or a core dump if #arg did not have a content
 */
BOX_LexLayout BOX_setLexLayoutContent(BOX_LexLayout arg, const char* content) {
  if (BOX_isLexLayoutNested(arg)) {
    return (BOX_LexLayout)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), (ATerm)((ATerm) ((ATerm) BOX_stringToChars(content))), 1), 1), 1);
  }

  ATabort("LexLayout has no Content: %t\n", arg);
  return (BOX_LexLayout)NULL;
}

/**
 * Assert whether a BOX_LexFontId is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexFontId
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexFontId(BOX_LexFontId arg) {
  if (BOX_isLexFontIdDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexFontId is a default. Always returns ATtrue
 * \param[in] arg input BOX_LexFontId
 * \return ATtrue if #arg corresponds to the signature of a default, or ATfalse otherwise
 */
inline ATbool BOX_isLexFontIdDefault(BOX_LexFontId arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLexFontIdDefault, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_LexFontId has a list. 
 * \param[in] arg input BOX_LexFontId
 * \return ATtrue if the BOX_LexFontId had a list, or ATfalse otherwise
 */
ATbool BOX_hasLexFontIdList(BOX_LexFontId arg) {
  if (BOX_isLexFontIdDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the list char* of a BOX_LexFontId. Note that the precondition is that this BOX_LexFontId actually has a list
 * \param[in] arg input BOX_LexFontId
 * \return the list of #arg, if it exist or an undefined value if it does not
 */
char* BOX_getLexFontIdList(BOX_LexFontId arg) {
  
    return (char*)BOX_charsToString((ATerm)ATgetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), 1));
}

/**
 * Set the list of a BOX_LexFontId. The precondition being that this BOX_LexFontId actually has a list
 * \param[in] arg input BOX_LexFontId
 * \param[in] list new const char* to set in #arg
 * \return A new BOX_LexFontId with list at the right place, or a core dump if #arg did not have a list
 */
BOX_LexFontId BOX_setLexFontIdList(BOX_LexFontId arg, const char* list) {
  if (BOX_isLexFontIdDefault(arg)) {
    return (BOX_LexFontId)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)), (ATerm)((ATerm) ((ATerm) BOX_stringToChars(list))), 1), 0), 1);
  }

  ATabort("LexFontId has no List: %t\n", arg);
  return (BOX_LexFontId)NULL;
}

/**
 * Assert whether a BOX_FontId is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontId
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontId(BOX_FontId arg) {
  if (BOX_isFontIdLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontId is a Lex-to-cf. Always returns ATtrue
 * \param[in] arg input BOX_FontId
 * \return ATtrue if #arg corresponds to the signature of a Lex-to-cf, or ATfalse otherwise
 */
inline ATbool BOX_isFontIdLexToCf(BOX_FontId arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternFontIdLexToCf, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_FontId has a FontId. 
 * \param[in] arg input BOX_FontId
 * \return ATtrue if the BOX_FontId had a FontId, or ATfalse otherwise
 */
ATbool BOX_hasFontIdFontId(BOX_FontId arg) {
  if (BOX_isFontIdLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the FontId BOX_LexFontId of a BOX_FontId. Note that the precondition is that this BOX_FontId actually has a FontId
 * \param[in] arg input BOX_FontId
 * \return the FontId of #arg, if it exist or an undefined value if it does not
 */
BOX_LexFontId BOX_getFontIdFontId(BOX_FontId arg) {
  
    return (BOX_LexFontId)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the FontId of a BOX_FontId. The precondition being that this BOX_FontId actually has a FontId
 * \param[in] arg input BOX_FontId
 * \param[in] FontId new BOX_LexFontId to set in #arg
 * \return A new BOX_FontId with FontId at the right place, or a core dump if #arg did not have a FontId
 */
BOX_FontId BOX_setFontIdFontId(BOX_FontId arg, BOX_LexFontId FontId) {
  if (BOX_isFontIdLexToCf(arg)) {
    return (BOX_FontId)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) FontId), 0), 1);
  }

  ATabort("FontId has no FontId: %t\n", arg);
  return (BOX_FontId)NULL;
}

/**
 * Assert whether a BOX_FontValue is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontValue
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontValue(BOX_FontValue arg) {
  if (BOX_isFontValueNatural(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontValueFontId(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontValue is a natural. . May not be used to assert correctness of the BOX_FontValue
 * \param[in] arg input BOX_FontValue
 * \return ATtrue if #arg corresponds to the signature of a natural, or ATfalse otherwise
 */
inline ATbool BOX_isFontValueNatural(BOX_FontValue arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontValueNatural, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontValue is a font-id. . May not be used to assert correctness of the BOX_FontValue
 * \param[in] arg input BOX_FontValue
 * \return ATtrue if #arg corresponds to the signature of a font-id, or ATfalse otherwise
 */
inline ATbool BOX_isFontValueFontId(BOX_FontValue arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontValueFontId, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontValue has a NatCon. 
 * \param[in] arg input BOX_FontValue
 * \return ATtrue if the BOX_FontValue had a NatCon, or ATfalse otherwise
 */
ATbool BOX_hasFontValueNatCon(BOX_FontValue arg) {
  if (BOX_isFontValueNatural(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontValue has a FontId. 
 * \param[in] arg input BOX_FontValue
 * \return ATtrue if the BOX_FontValue had a FontId, or ATfalse otherwise
 */
ATbool BOX_hasFontValueFontId(BOX_FontValue arg) {
  if (BOX_isFontValueFontId(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the NatCon BOX_NatCon of a BOX_FontValue. Note that the precondition is that this BOX_FontValue actually has a NatCon
 * \param[in] arg input BOX_FontValue
 * \return the NatCon of #arg, if it exist or an undefined value if it does not
 */
BOX_NatCon BOX_getFontValueNatCon(BOX_FontValue arg) {
  
    return (BOX_NatCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the FontId BOX_FontId of a BOX_FontValue. Note that the precondition is that this BOX_FontValue actually has a FontId
 * \param[in] arg input BOX_FontValue
 * \return the FontId of #arg, if it exist or an undefined value if it does not
 */
BOX_FontId BOX_getFontValueFontId(BOX_FontValue arg) {
  
    return (BOX_FontId)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the NatCon of a BOX_FontValue. The precondition being that this BOX_FontValue actually has a NatCon
 * \param[in] arg input BOX_FontValue
 * \param[in] NatCon new BOX_NatCon to set in #arg
 * \return A new BOX_FontValue with NatCon at the right place, or a core dump if #arg did not have a NatCon
 */
BOX_FontValue BOX_setFontValueNatCon(BOX_FontValue arg, BOX_NatCon NatCon) {
  if (BOX_isFontValueNatural(arg)) {
    return (BOX_FontValue)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) NatCon), 0), 1);
  }

  ATabort("FontValue has no NatCon: %t\n", arg);
  return (BOX_FontValue)NULL;
}

/**
 * Set the FontId of a BOX_FontValue. The precondition being that this BOX_FontValue actually has a FontId
 * \param[in] arg input BOX_FontValue
 * \param[in] FontId new BOX_FontId to set in #arg
 * \return A new BOX_FontValue with FontId at the right place, or a core dump if #arg did not have a FontId
 */
BOX_FontValue BOX_setFontValueFontId(BOX_FontValue arg, BOX_FontId FontId) {
  if (BOX_isFontValueFontId(arg)) {
    return (BOX_FontValue)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) FontId), 0), 1);
  }

  ATabort("FontValue has no FontId: %t\n", arg);
  return (BOX_FontValue)NULL;
}

/**
 * Assert whether a BOX_FontOption is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontOption(BOX_FontOption arg) {
  if (BOX_isFontOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOption is a Default. Always returns ATtrue
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if #arg corresponds to the signature of a Default, or ATfalse otherwise
 */
inline ATbool BOX_isFontOptionDefault(BOX_FontOption arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternFontOptionDefault, NULL, NULL, NULL, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_FontOption has a FontParam. 
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if the BOX_FontOption had a FontParam, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionFontParam(BOX_FontOption arg) {
  if (BOX_isFontOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOption has a ws-after-FontParam. 
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if the BOX_FontOption had a ws-after-FontParam, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionWsAfterFontParam(BOX_FontOption arg) {
  if (BOX_isFontOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOption has a ws-after-=. 
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if the BOX_FontOption had a ws-after-=, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionWsAfterEquals(BOX_FontOption arg) {
  if (BOX_isFontOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOption has a FontValue. 
 * \param[in] arg input BOX_FontOption
 * \return ATtrue if the BOX_FontOption had a FontValue, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionFontValue(BOX_FontOption arg) {
  if (BOX_isFontOptionDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the FontParam BOX_FontParam of a BOX_FontOption. Note that the precondition is that this BOX_FontOption actually has a FontParam
 * \param[in] arg input BOX_FontOption
 * \return the FontParam of #arg, if it exist or an undefined value if it does not
 */
BOX_FontParam BOX_getFontOptionFontParam(BOX_FontOption arg) {
  
    return (BOX_FontParam)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Get the ws-after-FontParam BOX_OptLayout of a BOX_FontOption. Note that the precondition is that this BOX_FontOption actually has a ws-after-FontParam
 * \param[in] arg input BOX_FontOption
 * \return the ws-after-FontParam of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getFontOptionWsAfterFontParam(BOX_FontOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1);
}

/**
 * Get the ws-after-= BOX_OptLayout of a BOX_FontOption. Note that the precondition is that this BOX_FontOption actually has a ws-after-=
 * \param[in] arg input BOX_FontOption
 * \return the ws-after-= of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getFontOptionWsAfterEquals(BOX_FontOption arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3);
}

/**
 * Get the FontValue BOX_FontValue of a BOX_FontOption. Note that the precondition is that this BOX_FontOption actually has a FontValue
 * \param[in] arg input BOX_FontOption
 * \return the FontValue of #arg, if it exist or an undefined value if it does not
 */
BOX_FontValue BOX_getFontOptionFontValue(BOX_FontOption arg) {
  
    return (BOX_FontValue)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 4);
}

/**
 * Set the FontParam of a BOX_FontOption. The precondition being that this BOX_FontOption actually has a FontParam
 * \param[in] arg input BOX_FontOption
 * \param[in] FontParam new BOX_FontParam to set in #arg
 * \return A new BOX_FontOption with FontParam at the right place, or a core dump if #arg did not have a FontParam
 */
BOX_FontOption BOX_setFontOptionFontParam(BOX_FontOption arg, BOX_FontParam FontParam) {
  if (BOX_isFontOptionDefault(arg)) {
    return (BOX_FontOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) FontParam), 0), 1);
  }

  ATabort("FontOption has no FontParam: %t\n", arg);
  return (BOX_FontOption)NULL;
}

/**
 * Set the ws-after-FontParam of a BOX_FontOption. The precondition being that this BOX_FontOption actually has a ws-after-FontParam
 * \param[in] arg input BOX_FontOption
 * \param[in] wsAfterFontParam new BOX_OptLayout to set in #arg
 * \return A new BOX_FontOption with wsAfterFontParam at the right place, or a core dump if #arg did not have a wsAfterFontParam
 */
BOX_FontOption BOX_setFontOptionWsAfterFontParam(BOX_FontOption arg, BOX_OptLayout wsAfterFontParam) {
  if (BOX_isFontOptionDefault(arg)) {
    return (BOX_FontOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterFontParam), 1), 1);
  }

  ATabort("FontOption has no WsAfterFontParam: %t\n", arg);
  return (BOX_FontOption)NULL;
}

/**
 * Set the ws-after-= of a BOX_FontOption. The precondition being that this BOX_FontOption actually has a ws-after-=
 * \param[in] arg input BOX_FontOption
 * \param[in] wsAfterEquals new BOX_OptLayout to set in #arg
 * \return A new BOX_FontOption with wsAfterEquals at the right place, or a core dump if #arg did not have a wsAfterEquals
 */
BOX_FontOption BOX_setFontOptionWsAfterEquals(BOX_FontOption arg, BOX_OptLayout wsAfterEquals) {
  if (BOX_isFontOptionDefault(arg)) {
    return (BOX_FontOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) wsAfterEquals), 3), 1);
  }

  ATabort("FontOption has no WsAfterEquals: %t\n", arg);
  return (BOX_FontOption)NULL;
}

/**
 * Set the FontValue of a BOX_FontOption. The precondition being that this BOX_FontOption actually has a FontValue
 * \param[in] arg input BOX_FontOption
 * \param[in] FontValue new BOX_FontValue to set in #arg
 * \return A new BOX_FontOption with FontValue at the right place, or a core dump if #arg did not have a FontValue
 */
BOX_FontOption BOX_setFontOptionFontValue(BOX_FontOption arg, BOX_FontValue FontValue) {
  if (BOX_isFontOptionDefault(arg)) {
    return (BOX_FontOption)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) FontValue), 4), 1);
  }

  ATabort("FontOption has no FontValue: %t\n", arg);
  return (BOX_FontOption)NULL;
}

/**
 * Assert whether a BOX_FontParam is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontParam(BOX_FontParam arg) {
  if (BOX_isFontParamName(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontParamFamily(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontParamSeries(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontParamShape(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontParamSize(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontParamColor(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontParam is a name. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a name, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamName(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamName);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontParam is a family. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a family, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamFamily(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamFamily);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontParam is a series. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a series, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamSeries(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamSeries);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontParam is a shape. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a shape, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamShape(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamShape);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontParam is a size. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a size, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamSize(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamSize);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontParam is a color. . May not be used to assert correctness of the BOX_FontParam
 * \param[in] arg input BOX_FontParam
 * \return ATtrue if #arg corresponds to the signature of a color, or ATfalse otherwise
 */
inline ATbool BOX_isFontParamColor(BOX_FontParam arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontParamColor);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontOperator(BOX_FontOperator arg) {
  if (BOX_isFontOperatorKeyword(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorVariable(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorNumber(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorMath(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorEscape(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorComment(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOperatorString(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOperator is a keyword. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a keyword, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorKeyword(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorKeyword);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a variable. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a variable, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorVariable(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorVariable);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a number. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a number, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorNumber(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorNumber);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a math. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a math, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorMath(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorMath);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a escape. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a escape, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorEscape(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorEscape);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a comment. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a comment, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorComment(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorComment);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOperator is a string. . May not be used to assert correctness of the BOX_FontOperator
 * \param[in] arg input BOX_FontOperator
 * \return ATtrue if #arg corresponds to the signature of a string, or ATfalse otherwise
 */
inline ATbool BOX_isFontOperatorString(BOX_FontOperator arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOperatorString);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOptionList is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidFontOptionList(BOX_FontOptionList arg) {
  if (BOX_isFontOptionListEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOptionListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOptionList is a empty. . May not be used to assert correctness of the BOX_FontOptionList
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isFontOptionListEmpty(BOX_FontOptionList arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternFontOptionListEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_FontOptionList is a single. . May not be used to assert correctness of the BOX_FontOptionList
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isFontOptionListSingle(BOX_FontOptionList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOptionListSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOptionList is a many. . May not be used to assert correctness of the BOX_FontOptionList
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isFontOptionListMany(BOX_FontOptionList arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternFontOptionListMany, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_FontOptionList has a head. 
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if the BOX_FontOptionList had a head, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionListHead(BOX_FontOptionList arg) {
  if (BOX_isFontOptionListSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isFontOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOptionList has a ws-after-head. 
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if the BOX_FontOptionList had a ws-after-head, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionListWsAfterHead(BOX_FontOptionList arg) {
  if (BOX_isFontOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_FontOptionList has a tail. 
 * \param[in] arg input BOX_FontOptionList
 * \return ATtrue if the BOX_FontOptionList had a tail, or ATfalse otherwise
 */
ATbool BOX_hasFontOptionListTail(BOX_FontOptionList arg) {
  if (BOX_isFontOptionListMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Returns a list of all but the first element of a BOX_FontOptionList. 
 * \param[in] arg input BOX_FontOptionList
 * \return A new BOX_FontOptionList, without the first element and the separator(s) just after it.)
 */
BOX_FontOptionList BOX_getFontOptionListTail(BOX_FontOptionList arg) {
  assert(!BOX_isFontOptionListEmpty(arg) && "getTail on an empty list");
  if (BOX_isFontOptionListSingle(arg)) {
    return (BOX_FontOptionList) BOX_makeFontOptionListEmpty();
  }
  else {
  
    return (BOX_FontOptionList)ATgetTail((ATermList)arg, 2);
  }
}

/**
 * Get the head BOX_FontOption of a BOX_FontOptionList. Note that the precondition is that this BOX_FontOptionList actually has a head
 * \param[in] arg input BOX_FontOptionList
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_FontOption BOX_getFontOptionListHead(BOX_FontOptionList arg) {
  if (BOX_isFontOptionListSingle(arg)) {
    return (BOX_FontOption)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_FontOption)ATgetFirst((ATermList)arg);
}

/**
 * Get the ws-after-head BOX_OptLayout of a BOX_FontOptionList. Note that the precondition is that this BOX_FontOptionList actually has a ws-after-head
 * \param[in] arg input BOX_FontOptionList
 * \return the ws-after-head of #arg, if it exist or an undefined value if it does not
 */
BOX_OptLayout BOX_getFontOptionListWsAfterHead(BOX_FontOptionList arg) {
  
    return (BOX_OptLayout)ATelementAt((ATermList)arg, 1);
}

/**
 * Set the head of a BOX_FontOptionList. The precondition being that this BOX_FontOptionList actually has a head
 * \param[in] arg input BOX_FontOptionList
 * \param[in] head new BOX_FontOption to set in #arg
 * \return A new BOX_FontOptionList with head at the right place, or a core dump if #arg did not have a head
 */
BOX_FontOptionList BOX_setFontOptionListHead(BOX_FontOptionList arg, BOX_FontOption head) {
  if (BOX_isFontOptionListSingle(arg)) {
    return (BOX_FontOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isFontOptionListMany(arg)) {
    return (BOX_FontOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("FontOptionList has no Head: %t\n", arg);
  return (BOX_FontOptionList)NULL;
}

/**
 * Set the ws-after-head of a BOX_FontOptionList. The precondition being that this BOX_FontOptionList actually has a ws-after-head
 * \param[in] arg input BOX_FontOptionList
 * \param[in] wsAfterHead new BOX_OptLayout to set in #arg
 * \return A new BOX_FontOptionList with wsAfterHead at the right place, or a core dump if #arg did not have a wsAfterHead
 */
BOX_FontOptionList BOX_setFontOptionListWsAfterHead(BOX_FontOptionList arg, BOX_OptLayout wsAfterHead) {
  if (BOX_isFontOptionListMany(arg)) {
    return (BOX_FontOptionList)ATreplace((ATermList)arg, (ATerm)((ATerm) wsAfterHead), 1);
  }

  ATabort("FontOptionList has no WsAfterHead: %t\n", arg);
  return (BOX_FontOptionList)NULL;
}

/**
 * Set the tail of a BOX_FontOptionList. The precondition being that this BOX_FontOptionList actually has a tail
 * \param[in] arg input BOX_FontOptionList
 * \param[in] tail new BOX_FontOptionList to set in #arg
 * \return A new BOX_FontOptionList with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_FontOptionList BOX_setFontOptionListTail(BOX_FontOptionList arg, BOX_FontOptionList tail) {
  if (BOX_isFontOptionListMany(arg)) {
    return (BOX_FontOptionList)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 2);
  }

  ATabort("FontOptionList has no Tail: %t\n", arg);
  return (BOX_FontOptionList)NULL;
}

/**
 * Assert whether a BOX_LexStrChar is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexStrChar(BOX_LexStrChar arg) {
  if (BOX_isLexStrCharNewline(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharTab(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharQuote(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharBackslash(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrChar is a newline. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a newline, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharNewline(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharNewline);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar is a tab. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a tab, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharTab(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharTab);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar is a quote. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a quote, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharQuote(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharQuote);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar is a backslash. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a backslash, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharBackslash(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharBackslash);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar is a decimal. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a decimal, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharDecimal(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharDecimal, NULL, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar is a normal. . May not be used to assert correctness of the BOX_LexStrChar
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if #arg corresponds to the signature of a normal, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharNormal(BOX_LexStrChar arg) {
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharNormal, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrChar has a a. 
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if the BOX_LexStrChar had a a, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharA(BOX_LexStrChar arg) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrChar has a b. 
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if the BOX_LexStrChar had a b, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharB(BOX_LexStrChar arg) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrChar has a c. 
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if the BOX_LexStrChar had a c, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharC(BOX_LexStrChar arg) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrChar has a ch. 
 * \param[in] arg input BOX_LexStrChar
 * \return ATtrue if the BOX_LexStrChar had a ch, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharCh(BOX_LexStrChar arg) {
  if (BOX_isLexStrCharNormal(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the a char of a BOX_LexStrChar. Note that the precondition is that this BOX_LexStrChar actually has a a
 * \param[in] arg input BOX_LexStrChar
 * \return the a of #arg, if it exist or an undefined value if it does not
 */
char BOX_getLexStrCharA(BOX_LexStrChar arg) {
  
    return (char)BOX_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1));
}

/**
 * Get the b char of a BOX_LexStrChar. Note that the precondition is that this BOX_LexStrChar actually has a b
 * \param[in] arg input BOX_LexStrChar
 * \return the b of #arg, if it exist or an undefined value if it does not
 */
char BOX_getLexStrCharB(BOX_LexStrChar arg) {
  
    return (char)BOX_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 2));
}

/**
 * Get the c char of a BOX_LexStrChar. Note that the precondition is that this BOX_LexStrChar actually has a c
 * \param[in] arg input BOX_LexStrChar
 * \return the c of #arg, if it exist or an undefined value if it does not
 */
char BOX_getLexStrCharC(BOX_LexStrChar arg) {
  
    return (char)BOX_charToByte((ATerm)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 3));
}

/**
 * Get the ch char of a BOX_LexStrChar. Note that the precondition is that this BOX_LexStrChar actually has a ch
 * \param[in] arg input BOX_LexStrChar
 * \return the ch of #arg, if it exist or an undefined value if it does not
 */
char BOX_getLexStrCharCh(BOX_LexStrChar arg) {
  
    return (char)BOX_charToByte((ATerm)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1)));
}

/**
 * Set the a of a BOX_LexStrChar. The precondition being that this BOX_LexStrChar actually has a a
 * \param[in] arg input BOX_LexStrChar
 * \param[in] a new char to set in #arg
 * \return A new BOX_LexStrChar with a at the right place, or a core dump if #arg did not have a a
 */
BOX_LexStrChar BOX_setLexStrCharA(BOX_LexStrChar arg, char a) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return (BOX_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) BOX_byteToChar(a))), 1), 1);
  }

  ATabort("LexStrChar has no A: %t\n", arg);
  return (BOX_LexStrChar)NULL;
}

/**
 * Set the b of a BOX_LexStrChar. The precondition being that this BOX_LexStrChar actually has a b
 * \param[in] arg input BOX_LexStrChar
 * \param[in] b new char to set in #arg
 * \return A new BOX_LexStrChar with b at the right place, or a core dump if #arg did not have a b
 */
BOX_LexStrChar BOX_setLexStrCharB(BOX_LexStrChar arg, char b) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return (BOX_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) BOX_byteToChar(b))), 2), 1);
  }

  ATabort("LexStrChar has no B: %t\n", arg);
  return (BOX_LexStrChar)NULL;
}

/**
 * Set the c of a BOX_LexStrChar. The precondition being that this BOX_LexStrChar actually has a c
 * \param[in] arg input BOX_LexStrChar
 * \param[in] c new char to set in #arg
 * \return A new BOX_LexStrChar with c at the right place, or a core dump if #arg did not have a c
 */
BOX_LexStrChar BOX_setLexStrCharC(BOX_LexStrChar arg, char c) {
  if (BOX_isLexStrCharDecimal(arg)) {
    return (BOX_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) BOX_byteToChar(c))), 3), 1);
  }

  ATabort("LexStrChar has no C: %t\n", arg);
  return (BOX_LexStrChar)NULL;
}

/**
 * Set the ch of a BOX_LexStrChar. The precondition being that this BOX_LexStrChar actually has a ch
 * \param[in] arg input BOX_LexStrChar
 * \param[in] ch new char to set in #arg
 * \return A new BOX_LexStrChar with ch at the right place, or a core dump if #arg did not have a ch
 */
BOX_LexStrChar BOX_setLexStrCharCh(BOX_LexStrChar arg, char ch) {
  if (BOX_isLexStrCharNormal(arg)) {
    return (BOX_LexStrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) ((ATerm) BOX_byteToChar(ch))), 0), 1);
  }

  ATabort("LexStrChar has no Ch: %t\n", arg);
  return (BOX_LexStrChar)NULL;
}

/**
 * Assert whether a BOX_StrChar is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_StrChar
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidStrChar(BOX_StrChar arg) {
  if (BOX_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_StrChar is a Lex-to-cf. Always returns ATtrue
 * \param[in] arg input BOX_StrChar
 * \return ATtrue if #arg corresponds to the signature of a Lex-to-cf, or ATfalse otherwise
 */
inline ATbool BOX_isStrCharLexToCf(BOX_StrChar arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternStrCharLexToCf, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_StrChar has a StrChar. 
 * \param[in] arg input BOX_StrChar
 * \return ATtrue if the BOX_StrChar had a StrChar, or ATfalse otherwise
 */
ATbool BOX_hasStrCharStrChar(BOX_StrChar arg) {
  if (BOX_isStrCharLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the StrChar BOX_LexStrChar of a BOX_StrChar. Note that the precondition is that this BOX_StrChar actually has a StrChar
 * \param[in] arg input BOX_StrChar
 * \return the StrChar of #arg, if it exist or an undefined value if it does not
 */
BOX_LexStrChar BOX_getStrCharStrChar(BOX_StrChar arg) {
  
    return (BOX_LexStrChar)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the StrChar of a BOX_StrChar. The precondition being that this BOX_StrChar actually has a StrChar
 * \param[in] arg input BOX_StrChar
 * \param[in] StrChar new BOX_LexStrChar to set in #arg
 * \return A new BOX_StrChar with StrChar at the right place, or a core dump if #arg did not have a StrChar
 */
BOX_StrChar BOX_setStrCharStrChar(BOX_StrChar arg, BOX_LexStrChar StrChar) {
  if (BOX_isStrCharLexToCf(arg)) {
    return (BOX_StrChar)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrChar), 0), 1);
  }

  ATabort("StrChar has no StrChar: %t\n", arg);
  return (BOX_StrChar)NULL;
}

/**
 * Assert whether a BOX_LexStrCon is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexStrCon
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexStrCon(BOX_LexStrCon arg) {
  if (BOX_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrCon is a default. Always returns ATtrue
 * \param[in] arg input BOX_LexStrCon
 * \return ATtrue if #arg corresponds to the signature of a default, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrConDefault(BOX_LexStrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLexStrConDefault, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_LexStrCon has a chars. 
 * \param[in] arg input BOX_LexStrCon
 * \return ATtrue if the BOX_LexStrCon had a chars, or ATfalse otherwise
 */
ATbool BOX_hasLexStrConChars(BOX_LexStrCon arg) {
  if (BOX_isLexStrConDefault(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the chars BOX_LexStrCharChars of a BOX_LexStrCon. Note that the precondition is that this BOX_LexStrCon actually has a chars
 * \param[in] arg input BOX_LexStrCon
 * \return the chars of #arg, if it exist or an undefined value if it does not
 */
BOX_LexStrCharChars BOX_getLexStrConChars(BOX_LexStrCon arg) {
  
    return (BOX_LexStrCharChars)ATgetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), 1);
}

/**
 * Set the chars of a BOX_LexStrCon. The precondition being that this BOX_LexStrCon actually has a chars
 * \param[in] arg input BOX_LexStrCon
 * \param[in] chars new BOX_LexStrCharChars to set in #arg
 * \return A new BOX_LexStrCon with chars at the right place, or a core dump if #arg did not have a chars
 */
BOX_LexStrCon BOX_setLexStrConChars(BOX_LexStrCon arg, BOX_LexStrCharChars chars) {
  if (BOX_isLexStrConDefault(arg)) {
    return (BOX_LexStrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)ATsetArgument((ATermAppl)ATelementAt((ATermList)ATgetArgument((ATermAppl)arg, 1), 1), (ATerm)((ATerm) chars), 1), 1), 1);
  }

  ATabort("LexStrCon has no Chars: %t\n", arg);
  return (BOX_LexStrCon)NULL;
}

/**
 * Assert whether a BOX_StrCon is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_StrCon
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidStrCon(BOX_StrCon arg) {
  if (BOX_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_StrCon is a Lex-to-cf. Always returns ATtrue
 * \param[in] arg input BOX_StrCon
 * \return ATtrue if #arg corresponds to the signature of a Lex-to-cf, or ATfalse otherwise
 */
inline ATbool BOX_isStrConLexToCf(BOX_StrCon arg) {
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternStrConLexToCf, NULL));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_StrCon has a StrCon. 
 * \param[in] arg input BOX_StrCon
 * \return ATtrue if the BOX_StrCon had a StrCon, or ATfalse otherwise
 */
ATbool BOX_hasStrConStrCon(BOX_StrCon arg) {
  if (BOX_isStrConLexToCf(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the StrCon BOX_LexStrCon of a BOX_StrCon. Note that the precondition is that this BOX_StrCon actually has a StrCon
 * \param[in] arg input BOX_StrCon
 * \return the StrCon of #arg, if it exist or an undefined value if it does not
 */
BOX_LexStrCon BOX_getStrConStrCon(BOX_StrCon arg) {
  
    return (BOX_LexStrCon)ATgetFirst((ATermList)ATgetArgument((ATermAppl)arg, 1));
}

/**
 * Set the StrCon of a BOX_StrCon. The precondition being that this BOX_StrCon actually has a StrCon
 * \param[in] arg input BOX_StrCon
 * \param[in] StrCon new BOX_LexStrCon to set in #arg
 * \return A new BOX_StrCon with StrCon at the right place, or a core dump if #arg did not have a StrCon
 */
BOX_StrCon BOX_setStrConStrCon(BOX_StrCon arg, BOX_LexStrCon StrCon) {
  if (BOX_isStrConLexToCf(arg)) {
    return (BOX_StrCon)ATsetArgument((ATermAppl)arg, (ATerm)ATreplace((ATermList)ATgetArgument((ATermAppl)arg, 1), (ATerm)((ATerm) StrCon), 0), 1);
  }

  ATabort("StrCon has no StrCon: %t\n", arg);
  return (BOX_StrCon)NULL;
}

/**
 * Assert whether a BOX_LexStrCharChars is any of the valid alternatives, or not. This analysis does not go any deeper than the top level
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if #arg corresponds to the expected signature, or ATfalse otherwise
 */
ATbool BOX_isValidLexStrCharChars(BOX_LexStrCharChars arg) {
  if (BOX_isLexStrCharCharsEmpty(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrCharChars is a empty. . May not be used to assert correctness of the BOX_LexStrCharChars
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if #arg corresponds to the signature of a empty, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharCharsEmpty(BOX_LexStrCharChars arg) {
  if (!ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
#ifndef DISABLE_DYNAMIC_CHECKING
  assert(arg != NULL);
  assert(ATmatchTerm((ATerm)arg, BOX_patternLexStrCharCharsEmpty));
#endif
  return ATtrue;
}

/**
 * Assert whether a BOX_LexStrCharChars is a single. . May not be used to assert correctness of the BOX_LexStrCharChars
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if #arg corresponds to the signature of a single, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharCharsSingle(BOX_LexStrCharChars arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharCharsSingle, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrCharChars is a many. . May not be used to assert correctness of the BOX_LexStrCharChars
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if #arg corresponds to the signature of a many, or ATfalse otherwise
 */
inline ATbool BOX_isLexStrCharCharsMany(BOX_LexStrCharChars arg) {
  if (ATisEmpty((ATermList)arg)) {
    return ATfalse;
  }
  {
    static ATerm last_arg = NULL;
    static int last_gc = -1;
    static ATbool last_result;

    assert(arg != NULL);

    if (last_gc != ATgetGCCount() || (ATerm)arg != last_arg) {
      last_arg = (ATerm)arg;
      last_result = ATmatchTerm((ATerm)arg, BOX_patternLexStrCharCharsMany, NULL, NULL);
      last_gc = ATgetGCCount();
    }

    return last_result;
  }
}

/**
 * Assert whether a BOX_LexStrCharChars has a head. 
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if the BOX_LexStrCharChars had a head, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharCharsHead(BOX_LexStrCharChars arg) {
  if (BOX_isLexStrCharCharsSingle(arg)) {
    return ATtrue;
  }
  else if (BOX_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Assert whether a BOX_LexStrCharChars has a tail. 
 * \param[in] arg input BOX_LexStrCharChars
 * \return ATtrue if the BOX_LexStrCharChars had a tail, or ATfalse otherwise
 */
ATbool BOX_hasLexStrCharCharsTail(BOX_LexStrCharChars arg) {
  if (BOX_isLexStrCharCharsMany(arg)) {
    return ATtrue;
  }
  return ATfalse;
}

/**
 * Get the head BOX_LexStrChar of a BOX_LexStrCharChars. Note that the precondition is that this BOX_LexStrCharChars actually has a head
 * \param[in] arg input BOX_LexStrCharChars
 * \return the head of #arg, if it exist or an undefined value if it does not
 */
BOX_LexStrChar BOX_getLexStrCharCharsHead(BOX_LexStrCharChars arg) {
  if (BOX_isLexStrCharCharsSingle(arg)) {
    return (BOX_LexStrChar)ATgetFirst((ATermList)arg);
  }
  else 
    return (BOX_LexStrChar)ATgetFirst((ATermList)arg);
}

/**
 * Get the tail BOX_LexStrCharChars of a BOX_LexStrCharChars. Note that the precondition is that this BOX_LexStrCharChars actually has a tail
 * \param[in] arg input BOX_LexStrCharChars
 * \return the tail of #arg, if it exist or an undefined value if it does not
 */
BOX_LexStrCharChars BOX_getLexStrCharCharsTail(BOX_LexStrCharChars arg) {
  
    return (BOX_LexStrCharChars)ATgetNext((ATermList)arg);
}

/**
 * Set the head of a BOX_LexStrCharChars. The precondition being that this BOX_LexStrCharChars actually has a head
 * \param[in] arg input BOX_LexStrCharChars
 * \param[in] head new BOX_LexStrChar to set in #arg
 * \return A new BOX_LexStrCharChars with head at the right place, or a core dump if #arg did not have a head
 */
BOX_LexStrCharChars BOX_setLexStrCharCharsHead(BOX_LexStrCharChars arg, BOX_LexStrChar head) {
  if (BOX_isLexStrCharCharsSingle(arg)) {
    return (BOX_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }
  else if (BOX_isLexStrCharCharsMany(arg)) {
    return (BOX_LexStrCharChars)ATreplace((ATermList)arg, (ATerm)((ATerm) head), 0);
  }

  ATabort("LexStrCharChars has no Head: %t\n", arg);
  return (BOX_LexStrCharChars)NULL;
}

/**
 * Set the tail of a BOX_LexStrCharChars. The precondition being that this BOX_LexStrCharChars actually has a tail
 * \param[in] arg input BOX_LexStrCharChars
 * \param[in] tail new BOX_LexStrCharChars to set in #arg
 * \return A new BOX_LexStrCharChars with tail at the right place, or a core dump if #arg did not have a tail
 */
BOX_LexStrCharChars BOX_setLexStrCharCharsTail(BOX_LexStrCharChars arg, BOX_LexStrCharChars tail) {
  if (BOX_isLexStrCharCharsMany(arg)) {
    return (BOX_LexStrCharChars)ATreplaceTail((ATermList)arg, (ATermList)((ATerm) tail), 1);
  }

  ATabort("LexStrCharChars has no Tail: %t\n", arg);
  return (BOX_LexStrCharChars)NULL;
}

/**
 * Apply functions to the children of a BOX_OptLayout. 
 * \return A new BOX_OptLayout with new children where the argument functions might have applied
 */
BOX_OptLayout BOX_visitOptLayout(BOX_OptLayout arg, BOX_Layout (*acceptLayout)(BOX_Layout)) {
  if (BOX_isOptLayoutAbsent(arg)) {
    return BOX_makeOptLayoutAbsent();
  }
  if (BOX_isOptLayoutPresent(arg)) {
    return BOX_makeOptLayoutPresent(
        acceptLayout ? acceptLayout(BOX_getOptLayoutLayout(arg)) : BOX_getOptLayoutLayout(arg));
  }
  ATabort("not a OptLayout: %t\n", arg);
  return (BOX_OptLayout)NULL;
}
/**
 * Apply functions to the children of a BOX_Layout. 
 * \return A new BOX_Layout with new children where the argument functions might have applied
 */
BOX_Layout BOX_visitLayout(BOX_Layout arg, BOX_LexLayoutList (*acceptList)(BOX_LexLayoutList)) {
  if (BOX_isLayoutLexToCf(arg)) {
    return BOX_makeLayoutLexToCf(
        acceptList ? acceptList(BOX_getLayoutList(arg)) : BOX_getLayoutList(arg));
  }
  ATabort("not a Layout: %t\n", arg);
  return (BOX_Layout)NULL;
}
/**
 * Apply functions to the children of a BOX_LexLayoutList. 
 * \return A new BOX_LexLayoutList with new children where the argument functions might have applied
 */
BOX_LexLayoutList BOX_visitLexLayoutList(BOX_LexLayoutList arg, BOX_LexLayout (*acceptHead)(BOX_LexLayout)) {
  if (BOX_isLexLayoutListEmpty(arg)) {
    return BOX_makeLexLayoutListEmpty();
  }
  if (BOX_isLexLayoutListSingle(arg)) {
    return BOX_makeLexLayoutListSingle(
        acceptHead ? acceptHead(BOX_getLexLayoutListHead(arg)) : BOX_getLexLayoutListHead(arg));
  }
  if (BOX_isLexLayoutListMany(arg)) {
    return BOX_makeLexLayoutListMany(
        acceptHead ? acceptHead(BOX_getLexLayoutListHead(arg)) : BOX_getLexLayoutListHead(arg),
        BOX_visitLexLayoutList(BOX_getLexLayoutListTail(arg), acceptHead));
  }
  ATabort("not a LexLayoutList: %t\n", arg);
  return (BOX_LexLayoutList)NULL;
}
/**
 * Apply functions to the children of a BOX_Start. 
 * \return A new BOX_Start with new children where the argument functions might have applied
 */
BOX_Start BOX_visitStart(BOX_Start arg, BOX_OptLayout (*acceptWsBefore)(BOX_OptLayout), BOX_Box (*acceptTopBox)(BOX_Box), BOX_OptLayout (*acceptWsAfter)(BOX_OptLayout), int (*acceptAmbCnt)(int)) {
  if (BOX_isStartBox(arg)) {
    return BOX_makeStartBox(
        acceptWsBefore ? acceptWsBefore(BOX_getStartWsBefore(arg)) : BOX_getStartWsBefore(arg),
        acceptTopBox ? acceptTopBox(BOX_getStartTopBox(arg)) : BOX_getStartTopBox(arg),
        acceptWsAfter ? acceptWsAfter(BOX_getStartWsAfter(arg)) : BOX_getStartWsAfter(arg),
        acceptAmbCnt ? acceptAmbCnt(BOX_getStartAmbCnt(arg)) : BOX_getStartAmbCnt(arg));
  }
  ATabort("not a Start: %t\n", arg);
  return (BOX_Start)NULL;
}
/**
 * Apply functions to the children of a BOX_GroupOption. 
 * \return A new BOX_GroupOption with new children where the argument functions might have applied
 */
BOX_GroupOption BOX_visitGroupOption(BOX_GroupOption arg, BOX_OptLayout (*acceptWsAfterGs)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterEquals)(BOX_OptLayout), BOX_NatCon (*acceptNatCon)(BOX_NatCon), BOX_OptLayout (*acceptWsAfterOp)(BOX_OptLayout), BOX_BoxOperator (*acceptBoxOperator)(BOX_BoxOperator)) {
  if (BOX_isGroupOptionSize(arg)) {
    return BOX_makeGroupOptionSize(
        acceptWsAfterGs ? acceptWsAfterGs(BOX_getGroupOptionWsAfterGs(arg)) : BOX_getGroupOptionWsAfterGs(arg),
        acceptWsAfterEquals ? acceptWsAfterEquals(BOX_getGroupOptionWsAfterEquals(arg)) : BOX_getGroupOptionWsAfterEquals(arg),
        acceptNatCon ? acceptNatCon(BOX_getGroupOptionNatCon(arg)) : BOX_getGroupOptionNatCon(arg));
  }
  if (BOX_isGroupOptionOperator(arg)) {
    return BOX_makeGroupOptionOperator(
        acceptWsAfterOp ? acceptWsAfterOp(BOX_getGroupOptionWsAfterOp(arg)) : BOX_getGroupOptionWsAfterOp(arg),
        acceptWsAfterEquals ? acceptWsAfterEquals(BOX_getGroupOptionWsAfterEquals(arg)) : BOX_getGroupOptionWsAfterEquals(arg),
        acceptBoxOperator ? acceptBoxOperator(BOX_getGroupOptionBoxOperator(arg)) : BOX_getGroupOptionBoxOperator(arg));
  }
  ATabort("not a GroupOption: %t\n", arg);
  return (BOX_GroupOption)NULL;
}
/**
 * Apply functions to the children of a BOX_BoxOperator. 
 * \return A new BOX_BoxOperator with new children where the argument functions might have applied
 */
BOX_BoxOperator BOX_visitBoxOperator(BOX_BoxOperator arg, BOX_OptLayout (*acceptWsAfterG)(BOX_OptLayout), BOX_GroupOptionGroupOptions (*acceptGroupOptions)(BOX_GroupOptionGroupOptions), BOX_OptLayout (*acceptWsAfterSL)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterA)(BOX_OptLayout), BOX_AlignmentOptions (*acceptAlignments)(BOX_AlignmentOptions), BOX_OptLayout (*acceptWsAfterAlignments)(BOX_OptLayout), BOX_SpaceOptionOptions (*acceptOptions)(BOX_SpaceOptionOptions), BOX_OptLayout (*acceptWsAfterH)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterV)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterHV)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterHOV)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterI)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterF)(BOX_OptLayout), BOX_FontOptionList (*acceptList)(BOX_FontOptionList)) {
  if (BOX_isBoxOperatorGrouping(arg)) {
    return BOX_makeBoxOperatorGrouping(
        acceptWsAfterG ? acceptWsAfterG(BOX_getBoxOperatorWsAfterG(arg)) : BOX_getBoxOperatorWsAfterG(arg),
        acceptGroupOptions ? acceptGroupOptions(BOX_getBoxOperatorGroupOptions(arg)) : BOX_getBoxOperatorGroupOptions(arg));
  }
  if (BOX_isBoxOperatorSeparatedList(arg)) {
    return BOX_makeBoxOperatorSeparatedList(
        acceptWsAfterSL ? acceptWsAfterSL(BOX_getBoxOperatorWsAfterSL(arg)) : BOX_getBoxOperatorWsAfterSL(arg),
        acceptGroupOptions ? acceptGroupOptions(BOX_getBoxOperatorGroupOptions(arg)) : BOX_getBoxOperatorGroupOptions(arg));
  }
  if (BOX_isBoxOperatorComment(arg)) {
    return BOX_makeBoxOperatorComment();
  }
  if (BOX_isBoxOperatorAlignment(arg)) {
    return BOX_makeBoxOperatorAlignment(
        acceptWsAfterA ? acceptWsAfterA(BOX_getBoxOperatorWsAfterA(arg)) : BOX_getBoxOperatorWsAfterA(arg),
        acceptAlignments ? acceptAlignments(BOX_getBoxOperatorAlignments(arg)) : BOX_getBoxOperatorAlignments(arg),
        acceptWsAfterAlignments ? acceptWsAfterAlignments(BOX_getBoxOperatorWsAfterAlignments(arg)) : BOX_getBoxOperatorWsAfterAlignments(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorRow(arg)) {
    return BOX_makeBoxOperatorRow();
  }
  if (BOX_isBoxOperatorH(arg)) {
    return BOX_makeBoxOperatorH(
        acceptWsAfterH ? acceptWsAfterH(BOX_getBoxOperatorWsAfterH(arg)) : BOX_getBoxOperatorWsAfterH(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorV(arg)) {
    return BOX_makeBoxOperatorV(
        acceptWsAfterV ? acceptWsAfterV(BOX_getBoxOperatorWsAfterV(arg)) : BOX_getBoxOperatorWsAfterV(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorHv(arg)) {
    return BOX_makeBoxOperatorHv(
        acceptWsAfterHV ? acceptWsAfterHV(BOX_getBoxOperatorWsAfterHV(arg)) : BOX_getBoxOperatorWsAfterHV(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorHov(arg)) {
    return BOX_makeBoxOperatorHov(
        acceptWsAfterHOV ? acceptWsAfterHOV(BOX_getBoxOperatorWsAfterHOV(arg)) : BOX_getBoxOperatorWsAfterHOV(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorI(arg)) {
    return BOX_makeBoxOperatorI(
        acceptWsAfterI ? acceptWsAfterI(BOX_getBoxOperatorWsAfterI(arg)) : BOX_getBoxOperatorWsAfterI(arg),
        acceptOptions ? acceptOptions(BOX_getBoxOperatorOptions(arg)) : BOX_getBoxOperatorOptions(arg));
  }
  if (BOX_isBoxOperatorWd(arg)) {
    return BOX_makeBoxOperatorWd();
  }
  if (BOX_isBoxOperatorFont(arg)) {
    return BOX_makeBoxOperatorFont(
        acceptWsAfterF ? acceptWsAfterF(BOX_getBoxOperatorWsAfterF(arg)) : BOX_getBoxOperatorWsAfterF(arg),
        acceptList ? acceptList(BOX_getBoxOperatorList(arg)) : BOX_getBoxOperatorList(arg));
  }
  ATabort("not a BoxOperator: %t\n", arg);
  return (BOX_BoxOperator)NULL;
}
/**
 * Apply functions to the children of a BOX_GroupOptionGroupOptions. 
 * \return A new BOX_GroupOptionGroupOptions with new children where the argument functions might have applied
 */
BOX_GroupOptionGroupOptions BOX_visitGroupOptionGroupOptions(BOX_GroupOptionGroupOptions arg, BOX_GroupOption (*acceptHead)(BOX_GroupOption), BOX_OptLayout (*acceptWsAfterHead)(BOX_OptLayout)) {
  if (BOX_isGroupOptionGroupOptionsEmpty(arg)) {
    return BOX_makeGroupOptionGroupOptionsEmpty();
  }
  if (BOX_isGroupOptionGroupOptionsSingle(arg)) {
    return BOX_makeGroupOptionGroupOptionsSingle(
        acceptHead ? acceptHead(BOX_getGroupOptionGroupOptionsHead(arg)) : BOX_getGroupOptionGroupOptionsHead(arg));
  }
  if (BOX_isGroupOptionGroupOptionsMany(arg)) {
    return BOX_makeGroupOptionGroupOptionsMany(
        acceptHead ? acceptHead(BOX_getGroupOptionGroupOptionsHead(arg)) : BOX_getGroupOptionGroupOptionsHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(BOX_getGroupOptionGroupOptionsWsAfterHead(arg)) : BOX_getGroupOptionGroupOptionsWsAfterHead(arg),
        BOX_visitGroupOptionGroupOptions(BOX_getGroupOptionGroupOptionsTail(arg), acceptHead, acceptWsAfterHead));
  }
  ATabort("not a GroupOptionGroupOptions: %t\n", arg);
  return (BOX_GroupOptionGroupOptions)NULL;
}
/**
 * Apply functions to the children of a BOX_LexNatCon. 
 * \return A new BOX_LexNatCon with new children where the argument functions might have applied
 */
BOX_LexNatCon BOX_visitLexNatCon(BOX_LexNatCon arg, char* (*acceptList)(char*)) {
  if (BOX_isLexNatConDigits(arg)) {
    return BOX_makeLexNatConDigits(
        acceptList ? acceptList(BOX_getLexNatConList(arg)) : BOX_getLexNatConList(arg));
  }
  ATabort("not a LexNatCon: %t\n", arg);
  return (BOX_LexNatCon)NULL;
}
/**
 * Apply functions to the children of a BOX_NatCon. 
 * \return A new BOX_NatCon with new children where the argument functions might have applied
 */
BOX_NatCon BOX_visitNatCon(BOX_NatCon arg, BOX_LexNatCon (*acceptNatCon)(BOX_LexNatCon)) {
  if (BOX_isNatConLexToCf(arg)) {
    return BOX_makeNatConLexToCf(
        acceptNatCon ? acceptNatCon(BOX_getNatConNatCon(arg)) : BOX_getNatConNatCon(arg));
  }
  ATabort("not a NatCon: %t\n", arg);
  return (BOX_NatCon)NULL;
}
/**
 * Apply functions to the children of a BOX_AlignmentOption. 
 * \return A new BOX_AlignmentOption with new children where the argument functions might have applied
 */
BOX_AlignmentOption BOX_visitAlignmentOption(BOX_AlignmentOption arg, BOX_OptLayout (*acceptWsAfterL)(BOX_OptLayout), BOX_SpaceOptionOptions (*acceptOptions)(BOX_SpaceOptionOptions), BOX_OptLayout (*acceptWsAfterC)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterR)(BOX_OptLayout)) {
  if (BOX_isAlignmentOptionLeft(arg)) {
    return BOX_makeAlignmentOptionLeft(
        acceptWsAfterL ? acceptWsAfterL(BOX_getAlignmentOptionWsAfterL(arg)) : BOX_getAlignmentOptionWsAfterL(arg),
        acceptOptions ? acceptOptions(BOX_getAlignmentOptionOptions(arg)) : BOX_getAlignmentOptionOptions(arg));
  }
  if (BOX_isAlignmentOptionCentre(arg)) {
    return BOX_makeAlignmentOptionCentre(
        acceptWsAfterC ? acceptWsAfterC(BOX_getAlignmentOptionWsAfterC(arg)) : BOX_getAlignmentOptionWsAfterC(arg),
        acceptOptions ? acceptOptions(BOX_getAlignmentOptionOptions(arg)) : BOX_getAlignmentOptionOptions(arg));
  }
  if (BOX_isAlignmentOptionRight(arg)) {
    return BOX_makeAlignmentOptionRight(
        acceptWsAfterR ? acceptWsAfterR(BOX_getAlignmentOptionWsAfterR(arg)) : BOX_getAlignmentOptionWsAfterR(arg),
        acceptOptions ? acceptOptions(BOX_getAlignmentOptionOptions(arg)) : BOX_getAlignmentOptionOptions(arg));
  }
  ATabort("not a AlignmentOption: %t\n", arg);
  return (BOX_AlignmentOption)NULL;
}
/**
 * Apply functions to the children of a BOX_AlignmentOptions. 
 * \return A new BOX_AlignmentOptions with new children where the argument functions might have applied
 */
BOX_AlignmentOptions BOX_visitAlignmentOptions(BOX_AlignmentOptions arg, BOX_OptLayout (*acceptWsAfterParenOpen)(BOX_OptLayout), BOX_AlignmentOptionList (*acceptList)(BOX_AlignmentOptionList), BOX_OptLayout (*acceptWsAfterList)(BOX_OptLayout)) {
  if (BOX_isAlignmentOptionsDefault(arg)) {
    return BOX_makeAlignmentOptionsDefault(
        acceptWsAfterParenOpen ? acceptWsAfterParenOpen(BOX_getAlignmentOptionsWsAfterParenOpen(arg)) : BOX_getAlignmentOptionsWsAfterParenOpen(arg),
        acceptList ? acceptList(BOX_getAlignmentOptionsList(arg)) : BOX_getAlignmentOptionsList(arg),
        acceptWsAfterList ? acceptWsAfterList(BOX_getAlignmentOptionsWsAfterList(arg)) : BOX_getAlignmentOptionsWsAfterList(arg));
  }
  ATabort("not a AlignmentOptions: %t\n", arg);
  return (BOX_AlignmentOptions)NULL;
}
/**
 * Apply functions to the children of a BOX_SpaceOptionOptions. 
 * \return A new BOX_SpaceOptionOptions with new children where the argument functions might have applied
 */
BOX_SpaceOptionOptions BOX_visitSpaceOptionOptions(BOX_SpaceOptionOptions arg, BOX_SpaceOption (*acceptHead)(BOX_SpaceOption), BOX_OptLayout (*acceptWsAfterHead)(BOX_OptLayout)) {
  if (BOX_isSpaceOptionOptionsEmpty(arg)) {
    return BOX_makeSpaceOptionOptionsEmpty();
  }
  if (BOX_isSpaceOptionOptionsSingle(arg)) {
    return BOX_makeSpaceOptionOptionsSingle(
        acceptHead ? acceptHead(BOX_getSpaceOptionOptionsHead(arg)) : BOX_getSpaceOptionOptionsHead(arg));
  }
  if (BOX_isSpaceOptionOptionsMany(arg)) {
    return BOX_makeSpaceOptionOptionsMany(
        acceptHead ? acceptHead(BOX_getSpaceOptionOptionsHead(arg)) : BOX_getSpaceOptionOptionsHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(BOX_getSpaceOptionOptionsWsAfterHead(arg)) : BOX_getSpaceOptionOptionsWsAfterHead(arg),
        BOX_visitSpaceOptionOptions(BOX_getSpaceOptionOptionsTail(arg), acceptHead, acceptWsAfterHead));
  }
  ATabort("not a SpaceOptionOptions: %t\n", arg);
  return (BOX_SpaceOptionOptions)NULL;
}
/**
 * Apply functions to the children of a BOX_AlignmentOptionList. 
 * \return A new BOX_AlignmentOptionList with new children where the argument functions might have applied
 */
BOX_AlignmentOptionList BOX_visitAlignmentOptionList(BOX_AlignmentOptionList arg, BOX_AlignmentOption (*acceptHead)(BOX_AlignmentOption), BOX_OptLayout (*acceptWsAfterHead)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterSep)(BOX_OptLayout)) {
  if (BOX_isAlignmentOptionListEmpty(arg)) {
    return BOX_makeAlignmentOptionListEmpty();
  }
  if (BOX_isAlignmentOptionListSingle(arg)) {
    return BOX_makeAlignmentOptionListSingle(
        acceptHead ? acceptHead(BOX_getAlignmentOptionListHead(arg)) : BOX_getAlignmentOptionListHead(arg));
  }
  if (BOX_isAlignmentOptionListMany(arg)) {
    return BOX_makeAlignmentOptionListMany(
        acceptHead ? acceptHead(BOX_getAlignmentOptionListHead(arg)) : BOX_getAlignmentOptionListHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(BOX_getAlignmentOptionListWsAfterHead(arg)) : BOX_getAlignmentOptionListWsAfterHead(arg),
        acceptWsAfterSep ? acceptWsAfterSep(BOX_getAlignmentOptionListWsAfterSep(arg)) : BOX_getAlignmentOptionListWsAfterSep(arg),
        BOX_visitAlignmentOptionList(BOX_getAlignmentOptionListTail(arg), acceptHead, acceptWsAfterHead, acceptWsAfterSep));
  }
  ATabort("not a AlignmentOptionList: %t\n", arg);
  return (BOX_AlignmentOptionList)NULL;
}
/**
 * Apply functions to the children of a BOX_SpaceSymbol. 
 * \return A new BOX_SpaceSymbol with new children where the argument functions might have applied
 */
BOX_SpaceSymbol BOX_visitSpaceSymbol(BOX_SpaceSymbol arg) {
  if (BOX_isSpaceSymbolHorizontal(arg)) {
    return BOX_makeSpaceSymbolHorizontal();
  }
  if (BOX_isSpaceSymbolVertical(arg)) {
    return BOX_makeSpaceSymbolVertical();
  }
  if (BOX_isSpaceSymbolIndentation(arg)) {
    return BOX_makeSpaceSymbolIndentation();
  }
  if (BOX_isSpaceSymbolTabstop(arg)) {
    return BOX_makeSpaceSymbolTabstop();
  }
  ATabort("not a SpaceSymbol: %t\n", arg);
  return (BOX_SpaceSymbol)NULL;
}
/**
 * Apply functions to the children of a BOX_SpaceOption. 
 * \return A new BOX_SpaceOption with new children where the argument functions might have applied
 */
BOX_SpaceOption BOX_visitSpaceOption(BOX_SpaceOption arg, BOX_SpaceSymbol (*acceptSpaceSymbol)(BOX_SpaceSymbol), BOX_OptLayout (*acceptWsAfterSpaceSymbol)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterEquals)(BOX_OptLayout), BOX_NatCon (*acceptNatCon)(BOX_NatCon)) {
  if (BOX_isSpaceOptionDefault(arg)) {
    return BOX_makeSpaceOptionDefault(
        acceptSpaceSymbol ? acceptSpaceSymbol(BOX_getSpaceOptionSpaceSymbol(arg)) : BOX_getSpaceOptionSpaceSymbol(arg),
        acceptWsAfterSpaceSymbol ? acceptWsAfterSpaceSymbol(BOX_getSpaceOptionWsAfterSpaceSymbol(arg)) : BOX_getSpaceOptionWsAfterSpaceSymbol(arg),
        acceptWsAfterEquals ? acceptWsAfterEquals(BOX_getSpaceOptionWsAfterEquals(arg)) : BOX_getSpaceOptionWsAfterEquals(arg),
        acceptNatCon ? acceptNatCon(BOX_getSpaceOptionNatCon(arg)) : BOX_getSpaceOptionNatCon(arg));
  }
  ATabort("not a SpaceOption: %t\n", arg);
  return (BOX_SpaceOption)NULL;
}
/**
 * Apply functions to the children of a BOX_Box. 
 * \return A new BOX_Box with new children where the argument functions might have applied
 */
BOX_Box BOX_visitBox(BOX_Box arg, BOX_StrCon (*acceptStrCon)(BOX_StrCon), BOX_BoxOperator (*acceptOperator)(BOX_BoxOperator), BOX_OptLayout (*acceptWsAfterOperator)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterBracketOpen)(BOX_OptLayout), BOX_BoxList (*acceptList)(BOX_BoxList), BOX_OptLayout (*acceptWsAfterList)(BOX_OptLayout)) {
  if (BOX_isBoxString(arg)) {
    return BOX_makeBoxString(
        acceptStrCon ? acceptStrCon(BOX_getBoxStrCon(arg)) : BOX_getBoxStrCon(arg));
  }
  if (BOX_isBoxAppl(arg)) {
    return BOX_makeBoxAppl(
        acceptOperator ? acceptOperator(BOX_getBoxOperator(arg)) : BOX_getBoxOperator(arg),
        acceptWsAfterOperator ? acceptWsAfterOperator(BOX_getBoxWsAfterOperator(arg)) : BOX_getBoxWsAfterOperator(arg),
        acceptWsAfterBracketOpen ? acceptWsAfterBracketOpen(BOX_getBoxWsAfterBracketOpen(arg)) : BOX_getBoxWsAfterBracketOpen(arg),
        acceptList ? acceptList(BOX_getBoxList(arg)) : BOX_getBoxList(arg),
        acceptWsAfterList ? acceptWsAfterList(BOX_getBoxWsAfterList(arg)) : BOX_getBoxWsAfterList(arg));
  }
  ATabort("not a Box: %t\n", arg);
  return (BOX_Box)NULL;
}
/**
 * Apply functions to the children of a BOX_BoxList. 
 * \return A new BOX_BoxList with new children where the argument functions might have applied
 */
BOX_BoxList BOX_visitBoxList(BOX_BoxList arg, BOX_Box (*acceptHead)(BOX_Box), BOX_OptLayout (*acceptWsAfterHead)(BOX_OptLayout)) {
  if (BOX_isBoxListEmpty(arg)) {
    return BOX_makeBoxListEmpty();
  }
  if (BOX_isBoxListSingle(arg)) {
    return BOX_makeBoxListSingle(
        acceptHead ? acceptHead(BOX_getBoxListHead(arg)) : BOX_getBoxListHead(arg));
  }
  if (BOX_isBoxListMany(arg)) {
    return BOX_makeBoxListMany(
        acceptHead ? acceptHead(BOX_getBoxListHead(arg)) : BOX_getBoxListHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(BOX_getBoxListWsAfterHead(arg)) : BOX_getBoxListWsAfterHead(arg),
        BOX_visitBoxList(BOX_getBoxListTail(arg), acceptHead, acceptWsAfterHead));
  }
  ATabort("not a BoxList: %t\n", arg);
  return (BOX_BoxList)NULL;
}
/**
 * Apply functions to the children of a BOX_LexLayout. 
 * \return A new BOX_LexLayout with new children where the argument functions might have applied
 */
BOX_LexLayout BOX_visitLexLayout(BOX_LexLayout arg, char (*acceptCh)(char), char* (*acceptLine)(char*), char* (*acceptContent)(char*)) {
  if (BOX_isLexLayoutWhitespace(arg)) {
    return BOX_makeLexLayoutWhitespace(
        acceptCh ? acceptCh(BOX_getLexLayoutCh(arg)) : BOX_getLexLayoutCh(arg));
  }
  if (BOX_isLexLayoutLine(arg)) {
    return BOX_makeLexLayoutLine(
        acceptLine ? acceptLine(BOX_getLexLayoutLine(arg)) : BOX_getLexLayoutLine(arg));
  }
  if (BOX_isLexLayoutNested(arg)) {
    return BOX_makeLexLayoutNested(
        acceptContent ? acceptContent(BOX_getLexLayoutContent(arg)) : BOX_getLexLayoutContent(arg));
  }
  ATabort("not a LexLayout: %t\n", arg);
  return (BOX_LexLayout)NULL;
}
/**
 * Apply functions to the children of a BOX_LexFontId. 
 * \return A new BOX_LexFontId with new children where the argument functions might have applied
 */
BOX_LexFontId BOX_visitLexFontId(BOX_LexFontId arg, char* (*acceptList)(char*)) {
  if (BOX_isLexFontIdDefault(arg)) {
    return BOX_makeLexFontIdDefault(
        acceptList ? acceptList(BOX_getLexFontIdList(arg)) : BOX_getLexFontIdList(arg));
  }
  ATabort("not a LexFontId: %t\n", arg);
  return (BOX_LexFontId)NULL;
}
/**
 * Apply functions to the children of a BOX_FontId. 
 * \return A new BOX_FontId with new children where the argument functions might have applied
 */
BOX_FontId BOX_visitFontId(BOX_FontId arg, BOX_LexFontId (*acceptFontId)(BOX_LexFontId)) {
  if (BOX_isFontIdLexToCf(arg)) {
    return BOX_makeFontIdLexToCf(
        acceptFontId ? acceptFontId(BOX_getFontIdFontId(arg)) : BOX_getFontIdFontId(arg));
  }
  ATabort("not a FontId: %t\n", arg);
  return (BOX_FontId)NULL;
}
/**
 * Apply functions to the children of a BOX_FontValue. 
 * \return A new BOX_FontValue with new children where the argument functions might have applied
 */
BOX_FontValue BOX_visitFontValue(BOX_FontValue arg, BOX_NatCon (*acceptNatCon)(BOX_NatCon), BOX_FontId (*acceptFontId)(BOX_FontId)) {
  if (BOX_isFontValueNatural(arg)) {
    return BOX_makeFontValueNatural(
        acceptNatCon ? acceptNatCon(BOX_getFontValueNatCon(arg)) : BOX_getFontValueNatCon(arg));
  }
  if (BOX_isFontValueFontId(arg)) {
    return BOX_makeFontValueFontId(
        acceptFontId ? acceptFontId(BOX_getFontValueFontId(arg)) : BOX_getFontValueFontId(arg));
  }
  ATabort("not a FontValue: %t\n", arg);
  return (BOX_FontValue)NULL;
}
/**
 * Apply functions to the children of a BOX_FontOption. 
 * \return A new BOX_FontOption with new children where the argument functions might have applied
 */
BOX_FontOption BOX_visitFontOption(BOX_FontOption arg, BOX_FontParam (*acceptFontParam)(BOX_FontParam), BOX_OptLayout (*acceptWsAfterFontParam)(BOX_OptLayout), BOX_OptLayout (*acceptWsAfterEquals)(BOX_OptLayout), BOX_FontValue (*acceptFontValue)(BOX_FontValue)) {
  if (BOX_isFontOptionDefault(arg)) {
    return BOX_makeFontOptionDefault(
        acceptFontParam ? acceptFontParam(BOX_getFontOptionFontParam(arg)) : BOX_getFontOptionFontParam(arg),
        acceptWsAfterFontParam ? acceptWsAfterFontParam(BOX_getFontOptionWsAfterFontParam(arg)) : BOX_getFontOptionWsAfterFontParam(arg),
        acceptWsAfterEquals ? acceptWsAfterEquals(BOX_getFontOptionWsAfterEquals(arg)) : BOX_getFontOptionWsAfterEquals(arg),
        acceptFontValue ? acceptFontValue(BOX_getFontOptionFontValue(arg)) : BOX_getFontOptionFontValue(arg));
  }
  ATabort("not a FontOption: %t\n", arg);
  return (BOX_FontOption)NULL;
}
/**
 * Apply functions to the children of a BOX_FontParam. 
 * \return A new BOX_FontParam with new children where the argument functions might have applied
 */
BOX_FontParam BOX_visitFontParam(BOX_FontParam arg) {
  if (BOX_isFontParamName(arg)) {
    return BOX_makeFontParamName();
  }
  if (BOX_isFontParamFamily(arg)) {
    return BOX_makeFontParamFamily();
  }
  if (BOX_isFontParamSeries(arg)) {
    return BOX_makeFontParamSeries();
  }
  if (BOX_isFontParamShape(arg)) {
    return BOX_makeFontParamShape();
  }
  if (BOX_isFontParamSize(arg)) {
    return BOX_makeFontParamSize();
  }
  if (BOX_isFontParamColor(arg)) {
    return BOX_makeFontParamColor();
  }
  ATabort("not a FontParam: %t\n", arg);
  return (BOX_FontParam)NULL;
}
/**
 * Apply functions to the children of a BOX_FontOperator. 
 * \return A new BOX_FontOperator with new children where the argument functions might have applied
 */
BOX_FontOperator BOX_visitFontOperator(BOX_FontOperator arg) {
  if (BOX_isFontOperatorKeyword(arg)) {
    return BOX_makeFontOperatorKeyword();
  }
  if (BOX_isFontOperatorVariable(arg)) {
    return BOX_makeFontOperatorVariable();
  }
  if (BOX_isFontOperatorNumber(arg)) {
    return BOX_makeFontOperatorNumber();
  }
  if (BOX_isFontOperatorMath(arg)) {
    return BOX_makeFontOperatorMath();
  }
  if (BOX_isFontOperatorEscape(arg)) {
    return BOX_makeFontOperatorEscape();
  }
  if (BOX_isFontOperatorComment(arg)) {
    return BOX_makeFontOperatorComment();
  }
  if (BOX_isFontOperatorString(arg)) {
    return BOX_makeFontOperatorString();
  }
  ATabort("not a FontOperator: %t\n", arg);
  return (BOX_FontOperator)NULL;
}
/**
 * Apply functions to the children of a BOX_FontOptionList. 
 * \return A new BOX_FontOptionList with new children where the argument functions might have applied
 */
BOX_FontOptionList BOX_visitFontOptionList(BOX_FontOptionList arg, BOX_FontOption (*acceptHead)(BOX_FontOption), BOX_OptLayout (*acceptWsAfterHead)(BOX_OptLayout)) {
  if (BOX_isFontOptionListEmpty(arg)) {
    return BOX_makeFontOptionListEmpty();
  }
  if (BOX_isFontOptionListSingle(arg)) {
    return BOX_makeFontOptionListSingle(
        acceptHead ? acceptHead(BOX_getFontOptionListHead(arg)) : BOX_getFontOptionListHead(arg));
  }
  if (BOX_isFontOptionListMany(arg)) {
    return BOX_makeFontOptionListMany(
        acceptHead ? acceptHead(BOX_getFontOptionListHead(arg)) : BOX_getFontOptionListHead(arg),
        acceptWsAfterHead ? acceptWsAfterHead(BOX_getFontOptionListWsAfterHead(arg)) : BOX_getFontOptionListWsAfterHead(arg),
        BOX_visitFontOptionList(BOX_getFontOptionListTail(arg), acceptHead, acceptWsAfterHead));
  }
  ATabort("not a FontOptionList: %t\n", arg);
  return (BOX_FontOptionList)NULL;
}
/**
 * Apply functions to the children of a BOX_LexStrChar. 
 * \return A new BOX_LexStrChar with new children where the argument functions might have applied
 */
BOX_LexStrChar BOX_visitLexStrChar(BOX_LexStrChar arg, char (*acceptA)(char), char (*acceptB)(char), char (*acceptC)(char), char (*acceptCh)(char)) {
  if (BOX_isLexStrCharNewline(arg)) {
    return BOX_makeLexStrCharNewline();
  }
  if (BOX_isLexStrCharTab(arg)) {
    return BOX_makeLexStrCharTab();
  }
  if (BOX_isLexStrCharQuote(arg)) {
    return BOX_makeLexStrCharQuote();
  }
  if (BOX_isLexStrCharBackslash(arg)) {
    return BOX_makeLexStrCharBackslash();
  }
  if (BOX_isLexStrCharDecimal(arg)) {
    return BOX_makeLexStrCharDecimal(
        acceptA ? acceptA(BOX_getLexStrCharA(arg)) : BOX_getLexStrCharA(arg),
        acceptB ? acceptB(BOX_getLexStrCharB(arg)) : BOX_getLexStrCharB(arg),
        acceptC ? acceptC(BOX_getLexStrCharC(arg)) : BOX_getLexStrCharC(arg));
  }
  if (BOX_isLexStrCharNormal(arg)) {
    return BOX_makeLexStrCharNormal(
        acceptCh ? acceptCh(BOX_getLexStrCharCh(arg)) : BOX_getLexStrCharCh(arg));
  }
  ATabort("not a LexStrChar: %t\n", arg);
  return (BOX_LexStrChar)NULL;
}
/**
 * Apply functions to the children of a BOX_StrChar. 
 * \return A new BOX_StrChar with new children where the argument functions might have applied
 */
BOX_StrChar BOX_visitStrChar(BOX_StrChar arg, BOX_LexStrChar (*acceptStrChar)(BOX_LexStrChar)) {
  if (BOX_isStrCharLexToCf(arg)) {
    return BOX_makeStrCharLexToCf(
        acceptStrChar ? acceptStrChar(BOX_getStrCharStrChar(arg)) : BOX_getStrCharStrChar(arg));
  }
  ATabort("not a StrChar: %t\n", arg);
  return (BOX_StrChar)NULL;
}
/**
 * Apply functions to the children of a BOX_LexStrCon. 
 * \return A new BOX_LexStrCon with new children where the argument functions might have applied
 */
BOX_LexStrCon BOX_visitLexStrCon(BOX_LexStrCon arg, BOX_LexStrCharChars (*acceptChars)(BOX_LexStrCharChars)) {
  if (BOX_isLexStrConDefault(arg)) {
    return BOX_makeLexStrConDefault(
        acceptChars ? acceptChars(BOX_getLexStrConChars(arg)) : BOX_getLexStrConChars(arg));
  }
  ATabort("not a LexStrCon: %t\n", arg);
  return (BOX_LexStrCon)NULL;
}
/**
 * Apply functions to the children of a BOX_StrCon. 
 * \return A new BOX_StrCon with new children where the argument functions might have applied
 */
BOX_StrCon BOX_visitStrCon(BOX_StrCon arg, BOX_LexStrCon (*acceptStrCon)(BOX_LexStrCon)) {
  if (BOX_isStrConLexToCf(arg)) {
    return BOX_makeStrConLexToCf(
        acceptStrCon ? acceptStrCon(BOX_getStrConStrCon(arg)) : BOX_getStrConStrCon(arg));
  }
  ATabort("not a StrCon: %t\n", arg);
  return (BOX_StrCon)NULL;
}
/**
 * Apply functions to the children of a BOX_LexStrCharChars. 
 * \return A new BOX_LexStrCharChars with new children where the argument functions might have applied
 */
BOX_LexStrCharChars BOX_visitLexStrCharChars(BOX_LexStrCharChars arg, BOX_LexStrChar (*acceptHead)(BOX_LexStrChar)) {
  if (BOX_isLexStrCharCharsEmpty(arg)) {
    return BOX_makeLexStrCharCharsEmpty();
  }
  if (BOX_isLexStrCharCharsSingle(arg)) {
    return BOX_makeLexStrCharCharsSingle(
        acceptHead ? acceptHead(BOX_getLexStrCharCharsHead(arg)) : BOX_getLexStrCharCharsHead(arg));
  }
  if (BOX_isLexStrCharCharsMany(arg)) {
    return BOX_makeLexStrCharCharsMany(
        acceptHead ? acceptHead(BOX_getLexStrCharCharsHead(arg)) : BOX_getLexStrCharCharsHead(arg),
        BOX_visitLexStrCharChars(BOX_getLexStrCharCharsTail(arg), acceptHead));
  }
  ATabort("not a LexStrCharChars: %t\n", arg);
  return (BOX_LexStrCharChars)NULL;
}

