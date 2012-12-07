#include "OOOUnitTestDefines.h"
#include "OOOList.h"
#include "OOOQuote.h"

#define EMPTY
#define EMPTY_LIST_RESULT	"0"

#define ARGS_1	arg0
#define ARGS_1_RESULT	"arg0"
#define ARGS_1_LIST_RESULT	"1, " ARGS_1_RESULT

#define ARGS_2	ARGS_1, arg1
#define ARGS_2_RESULT	ARGS_1_RESULT ", arg1"
#define ARGS_2_LIST_RESULT	"2, " ARGS_2_RESULT

#define ARGS_3	ARGS_2, arg2
#define ARGS_3_RESULT	ARGS_2_RESULT ", arg2"
#define ARGS_3_LIST_RESULT	"3, " ARGS_3_RESULT

#define ARGS_10	ARGS_3, arg3, arg4, arg5, arg6, arg7, arg8, arg9
#define ARGS_10_RESULT	ARGS_3_RESULT ", arg3, arg4, arg5, arg6, arg7, arg8, arg9"
#define ARGS_10_LIST_RESULT	"10, " ARGS_10_RESULT

OOOTest(OOOList)
{
	char * szTest;

	// should handle 0 arguments
	szTest = OOOQuote(OOOList(EMPTY));
	if (O_strcmp(EMPTY_LIST_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", EMPTY_LIST_RESULT, szTest);
	}

	// should handle 1 argument
	szTest = OOOQuote(OOOList(ARGS_1));
	if (O_strcmp(ARGS_1_LIST_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_1_LIST_RESULT, szTest);
	}

	// should handle 2 arguments
	szTest = OOOQuote(OOOList(ARGS_2));
	if (O_strcmp(ARGS_2_LIST_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_2_LIST_RESULT, szTest);
	}

	// should handle 3 arguments
	szTest = OOOQuote(OOOList(ARGS_3));
	if (O_strcmp(ARGS_3_LIST_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_3_LIST_RESULT, szTest);
	}

	// should handle 10 arguments
	szTest = OOOQuote(OOOList(ARGS_10));
	if (O_strcmp(ARGS_10_LIST_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_10_LIST_RESULT, szTest);
	}
}
