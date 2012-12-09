#include "OOOUnitTestDefines.h"
#include "OOOList.h"
#include "OOOQuote.h"

#include "OOOListAppend.h"

#define EMPTY
#define EMPTY_RESULT		""
#define ARGS_1				arg0
#define ARGS_1_RESULT		"arg0"
#define ARGS_2				arg0, arg1
#define ARGS_2_RESULT		"arg0, arg1"
#define ARGS_3				arg0, arg1, arg2
#define ARGS_3_RESULT		"arg0, arg1, arg2"
#define ARGS_10				arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
#define ARGS_10_RESULT		"arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9"

OOOTest(OOOListAppend)
{
	char * szTest;

	// should handle empty list with no args to append
	szTest = OOOQuote(OOOListAppend(OOOList(EMPTY), EMPTY));
	if (O_strcmp(OOOQuote(OOOList(EMPTY)), szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", OOOQuote(OOOList(EMPTY)), szTest);
	}

	// should handle empty list with args to append
	szTest = OOOQuote(OOOListAppend(OOOList(EMPTY), ARGS_1));
	if (O_strcmp(OOOQuote(OOOList(ARGS_1)), szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", OOOQuote(OOOList(ARGS_1)), szTest);
	}

	// should handle non empty list with no args to append
	szTest = OOOQuote(OOOListAppend(OOOList(ARGS_1), EMPTY));
	if (O_strcmp(OOOQuote(OOOList(ARGS_1)), szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", OOOQuote(OOOList(ARGS_1)), szTest);
	}

	// should handle non empty list with args to append
	szTest = OOOQuote(OOOListAppend(OOOList(ARGS_1), ARGS_2));
	if (O_strcmp(OOOQuote(OOOList(ARGS_1, ARGS_2)), szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", OOOQuote(OOOList(ARGS_1)), szTest);
	}

	// should handle longer lists
	szTest = OOOQuote(OOOListAppend(OOOList(ARGS_10), ARGS_3));
	if (O_strcmp(OOOQuote(OOOList(ARGS_10, ARGS_3)), szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", OOOQuote(OOOList(ARGS_1)), szTest);
	}
}
