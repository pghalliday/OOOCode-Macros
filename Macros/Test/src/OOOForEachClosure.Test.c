#include "OOOUnitTestDefines.h"
#include "OOOPostList.h"
#include "OOOPreList.h"
#include "OOOQuote.h"
#include "OOOList.h"

//#include "OOOForEachClosure.h"
#include "OOOIsEmpty.h"
#include "OOOList.h"
#include "OOOPreList.h"
#include "OOOPostList.h"
#include "OOOSimplePaste.h"

#define OOOForEachClosure6_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),6,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure7_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure6_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure5_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),5,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure6_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure5_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure4_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),4,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure5_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure4_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure3_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),3,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure4_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure3_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure2_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),2,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure3_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure2_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure1_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),1,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure2_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure1_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure0_0(MACRO,CLOSURE_AND_LISTS...) MACRO(1,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)),0,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOList(OOOPreList(1,CLOSURE_AND_LISTS)),OOOSimplePaste(OOOForEachClosure1_,OOOIsEmpty(OOOPostList(1,CLOSURE_AND_LISTS)))(MACRO,OOOList(OOOPreList(0,CLOSURE_AND_LISTS)),OOOPostList(1,CLOSURE_AND_LISTS)))
#define OOOForEachClosure0_1(MACRO,CLOSURE_AND_LISTS...)

#define OOOForEachClosure(MACRO,CLOSURE_AND_LISTS...) OOOSimplePaste(OOOForEachClosure0_,OOOIsEmpty(OOOPostList(0,CLOSURE_AND_LISTS)))(MACRO,CLOSURE_AND_LISTS)


#define EMPTY
#define EMPTY_RESULT 	""

#define ARGS_1			arg0
#define ARGS_1_RESULT	"arg0"

#define ARGS_2			ARGS_1, arg1
#define ARGS_2_RESULT	ARGS_1_RESULT ", arg1"

#define ARGS_3			ARGS_2, arg2
#define ARGS_3_RESULT	ARGS_2_RESULT ", arg2"

#define ARGS_10			ARGS_3, arg3, arg4, arg5, arg6, arg7, arg8, arg9
#define ARGS_10_RESULT	ARGS_3_RESULT ", arg3, arg4, arg5, arg6, arg7, arg8, arg9"

#define ADD_LIST(FIRST, LAST, ITERATION, CLOSURE_AND_LIST_AND_REMAINDER...) \
	LIST FIRST LAST ITERATION OOOPreList(0, CLOSURE_AND_LIST_AND_REMAINDER) OOOPreList(1, CLOSURE_AND_LIST_AND_REMAINDER) OOOPostList(1, CLOSURE_AND_LIST_AND_REMAINDER)

#define CLOSURE OOOList(closure1, closure2, closure3, closure4)
#define CLOSURE_RESULT	"closure1, closure2, closure3, closure4"

#define TEST_0  ""

#define TEST_1  \
	"LIST 1 1 0 " \
	CLOSURE_RESULT \
	EMPTY_RESULT

#define TEST_2  \
	"LIST 1 0 0 " \
	CLOSURE_RESULT \
	EMPTY_RESULT \
	" LIST 0 1 1 " \
	CLOSURE_RESULT " " \
	ARGS_1_RESULT

#define TEST_5 \
	"LIST 1 0 0 " \
	CLOSURE_RESULT \
	EMPTY_RESULT \
	" LIST 0 0 1 " \
	CLOSURE_RESULT " " \
	ARGS_1_RESULT \
	" LIST 0 0 2 " \
	CLOSURE_RESULT " " \
	ARGS_2_RESULT \
	" LIST 0 0 3 " \
	CLOSURE_RESULT " " \
	ARGS_3_RESULT \
	" LIST 0 1 4 " \
	CLOSURE_RESULT " " \
	ARGS_10_RESULT

OOOTest(OOOForEachClosure)
{
	char * szTest;

	szTest = OOOQuote(OOOForEachClosure(ADD_LIST, CLOSURE, EMPTY));
	if (O_strcmp(TEST_0, szTest) != 0)
	{
		OOOError("Expected: %s\nReceived: %s", TEST_0, szTest);
	}

	szTest = OOOQuote(OOOForEachClosure(ADD_LIST, CLOSURE, OOOList(EMPTY)));
	if (O_strcmp(TEST_1, szTest) != 0)
	{
		OOOError("Expected: %s\nReceived: %s", TEST_1, szTest);
	}

	szTest = OOOQuote(OOOForEachClosure(ADD_LIST, CLOSURE, OOOList(EMPTY), OOOList(ARGS_1)));
	if (O_strcmp(TEST_2, szTest) != 0)
	{
		OOOError("Expected: %s\nReceived: %s", TEST_2, szTest);
	}

	szTest = OOOQuote(OOOForEachClosure(ADD_LIST, CLOSURE, OOOList(EMPTY), OOOList(ARGS_1), OOOList(ARGS_2), OOOList(ARGS_3), OOOList(ARGS_10)));
	if (O_strcmp(TEST_5, szTest) != 0)
	{
		OOOError("Expected: %s\nReceived: %s", TEST_5, szTest);
	}
}
