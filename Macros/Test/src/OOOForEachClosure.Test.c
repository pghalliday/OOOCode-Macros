#include "OOOUnitTestDefines.h"

//#include "OOOForEachClosure.h"

#include "OOOList.h"
#include "OOOQuote.h"
#include "OOOPaste.h"
#include "OOOPre.h"
#include "OOOPost.h"

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
	LIST FIRST LAST ITERATION OOOPre(CLOSURE_AND_LIST_AND_REMAINDER) OOOPre(OOOPost((CLOSURE_AND_LIST_AND_REMAINDER)) OOOPost(OOOPost(CLOSURE_AND_LIST_AND_REMAINDER))

#define CLOSURE OOOList(closure1, closure2, closure3, closure4)
#define CLOSURE_RESULT	"closure1, closure2, closure3, closure4"

#define TEST_0  ""

#define TEST_1  \
	"LIST 1 1 0 " \
	CLOSURE_RESULT

#define TEST_2  \
	"LIST 1 0 0" \
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
