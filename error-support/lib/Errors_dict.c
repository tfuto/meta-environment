#include "Errors_dict.h"

AFun ME_afun8;
AFun ME_afun0;
AFun ME_afun11;
AFun ME_afun5;
AFun ME_afun3;
AFun ME_afun9;
AFun ME_afun10;
AFun ME_afun4;
AFun ME_afun13;
AFun ME_afun14;
AFun ME_afun2;
AFun ME_afun7;
AFun ME_afun12;
AFun ME_afun15;
AFun ME_afun6;
AFun ME_afun1;

ATerm ME_patternAreaNoArea = NULL;
ATerm ME_patternAreaArea = NULL;
ATerm ME_patternLocationLocation = NULL;
ATerm ME_patternSubjectWithLocation = NULL;
ATerm ME_patternSubjectWithoutLocation = NULL;
ATerm ME_patternSubjectSubjectListMany = NULL;
ATerm ME_patternSubjectSubjectListSingle = NULL;
ATerm ME_patternSubjectSubjectListEmpty = NULL;
ATerm ME_patternSubjectsSubjects = NULL;
ATerm ME_patternDescriptionDescription = NULL;
ATerm ME_patternProducerProducer = NULL;
ATerm ME_patternFatalErrorFatalError = NULL;
ATerm ME_patternErrorError = NULL;
ATerm ME_patternWarningWarning = NULL;
ATerm ME_patternInformationInformation = NULL;
ATerm ME_patternFeedbackFatalError = NULL;
ATerm ME_patternFeedbackError = NULL;
ATerm ME_patternFeedbackWarning = NULL;
ATerm ME_patternFeedbackInfo = NULL;

/*
 * ME_afun8 = producer(x,x)
 * ME_afun0 = info(x)
 * ME_afun11 = without-location(x,x)
 * ME_afun5 = warning(x,x,x,x)
 * ME_afun3 = fatal-error(x)
 * ME_afun9 = description(x)
 * ME_afun10 = subjects(x)
 * ME_afun4 = information(x,x,x,x)
 * ME_afun13 = location(x,x)
 * ME_afun14 = area(x,x,x,x,x,x)
 * ME_afun2 = error(x)
 * ME_afun7 = fatal-error(x,x,x,x)
 * ME_afun12 = with-location(x)
 * ME_afun15 = no-area
 * ME_afun6 = error(x,x,x,x)
 * ME_afun1 = warning(x)
 *
 * ME_patternAreaNoArea = no-area
 * ME_patternAreaArea = area(<int>,<int>,<int>,<int>,<int>,<int>)
 * ME_patternLocationLocation = location(<str>,<term>)
 * ME_patternSubjectWithLocation = with-location(<str>)
 * ME_patternSubjectWithoutLocation = without-location(<str>,<term>)
 * ME_patternSubjectSubjectListMany = [<term>,<list>]
 * ME_patternSubjectSubjectListSingle = [<term>]
 * ME_patternSubjectSubjectListEmpty = []
 * ME_patternSubjectsSubjects = subjects(<term>)
 * ME_patternDescriptionDescription = description(<str>)
 * ME_patternProducerProducer = producer(<str>,<str>)
 * ME_patternFatalErrorFatalError = fatal-error(<str>,<term>,<term>,<term>)
 * ME_patternErrorError = error(<str>,<term>,<term>,<term>)
 * ME_patternWarningWarning = warning(<str>,<term>,<term>,<term>)
 * ME_patternInformationInformation = information(<str>,<term>,<term>,<term>)
 * ME_patternFeedbackFatalError = fatal-error(<term>)
 * ME_patternFeedbackError = error(<term>)
 * ME_patternFeedbackWarning = warning(<term>)
 * ME_patternFeedbackInfo = info(<term>)
 *
 */

static ATerm _Errors_dict = NULL;

#define _Errors_dict_LEN 503

static char _Errors_dict_baf[_Errors_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x18,0x51,0x03,0x3C,0x5F,0x3E,0x01,0x00,0x04,0x04,0x05,
0x06,0x04,0x03,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x28,0x13,0x01,0x02,0x00,
0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,
0x02,0x01,0x02,0x02,0x5B,0x5D,0x00,0x00,0x01,0x03,0x69,0x6E,0x74,0x00,0x00,0x01,
0x03,0x73,0x74,0x72,0x00,0x00,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x00,0x01,0x04,
0x74,0x65,0x72,0x6D,0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x08,0x70,0x72,0x6F,
0x64,0x75,0x63,0x65,0x72,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x69,
0x6E,0x66,0x6F,0x01,0x00,0x02,0x02,0x00,0x07,0x10,0x77,0x69,0x74,0x68,0x6F,0x75,
0x74,0x2D,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x02,0x00,0x02,0x02,0x00,0x07,
0x02,0x00,0x07,0x07,0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x04,0x00,0x02,0x02,0x00,
0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x0B,0x66,0x61,0x74,0x61,0x6C,
0x2D,0x65,0x72,0x72,0x6F,0x72,0x01,0x00,0x02,0x02,0x00,0x07,0x0B,0x64,0x65,0x73,
0x63,0x72,0x69,0x70,0x74,0x69,0x6F,0x6E,0x01,0x00,0x02,0x02,0x00,0x07,0x08,0x73,
0x75,0x62,0x6A,0x65,0x63,0x74,0x73,0x01,0x00,0x02,0x02,0x00,0x07,0x0B,0x69,0x6E,
0x66,0x6F,0x72,0x6D,0x61,0x74,0x69,0x6F,0x6E,0x04,0x00,0x02,0x02,0x00,0x07,0x02,
0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x08,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,
0x6E,0x02,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x04,0x61,0x72,0x65,0x61,0x06,
0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,
0x07,0x02,0x00,0x07,0x05,0x65,0x72,0x72,0x6F,0x72,0x01,0x00,0x02,0x02,0x00,0x07,
0x0B,0x66,0x61,0x74,0x61,0x6C,0x2D,0x65,0x72,0x72,0x6F,0x72,0x04,0x00,0x02,0x02,
0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x0D,0x77,0x69,0x74,0x68,
0x2D,0x6C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x01,0x00,0x02,0x02,0x00,0x07,0x07,
0x6E,0x6F,0x2D,0x61,0x72,0x65,0x61,0x00,0x00,0x01,0x05,0x65,0x72,0x72,0x6F,0x72,
0x04,0x00,0x02,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x02,0x00,0x07,0x07,
0x77,0x61,0x72,0x6E,0x69,0x6E,0x67,0x01,0x00,0x02,0x02,0x00,0x07,0x01,0x07,0x98,
0x28,0x70,0x84,0x59,0x42,0x83,0x18,0x55,0x1A,0x70,0x85,0x04,0x44,0x92,0x20,0x45,
0x15,0x47,0x1A,0x28,0x60,0xC5,0x55,0x14,0x58,0x82,0x1C,0x55,0x18,0x78,0x84,0x02,
0x41,0x12,0xA8,0x01,0x25,0x0C,0x82,0x90,0x84,0x9A,0x06,0x00,0x00,0x00,0x18,0xEA,
0x22,0x14,0x11,0xF4,0x42,0x1A,0x44,0x10,0x08,0x22,0x42,0x02,0x46,0x11,0xF0,0x12,
0x42,0x87,0xA0,0x5D,0x28,0x41,0xC2,0x88,0x6D,0x88,0x84,0x16,0x74,0x41,0x08,0x44,
0xD1,0x88,0x21,0x08,0x19,0x91,0x04,0x21,0x1D,0x2A,0x20,0x84,0x21,0xAE,0x42,0x2A,
0xB4,0x20,0xA4,0xC2,0x32,0x24,0x2A
};

void init_Errors_dict()
{
  ATermList afuns, terms;

  _Errors_dict = ATreadFromBinaryString(_Errors_dict_baf, _Errors_dict_LEN);

  ATprotect(&_Errors_dict);

  afuns = (ATermList)ATelementAt((ATermList)_Errors_dict, 0);

  ME_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);
  ME_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_Errors_dict, 1);

  ME_patternAreaNoArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternAreaArea = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternLocationLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectWithLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectWithoutLocation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectSubjectListMany = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectSubjectListSingle = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectSubjectListEmpty = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternSubjectsSubjects = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternDescriptionDescription = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternProducerProducer = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternFatalErrorFatalError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternErrorError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternWarningWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternInformationInformation = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternFeedbackFatalError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternFeedbackError = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternFeedbackWarning = ATgetFirst(terms);
  terms = ATgetNext(terms);
  ME_patternFeedbackInfo = ATgetFirst(terms);
  terms = ATgetNext(terms);
}
