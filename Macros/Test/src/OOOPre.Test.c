#include "OOOUnitTestDefines.h"
#include "OOOQuote.h"
#include "OOOCount.h"
#include "OOOPre.h"

#define EMPTY
#define EMPTY_RESULT	""

#define ARGS_1	arg0
#define ARGS_1_RESULT	"arg0"

#define ARGS_2	ARGS_1, arg1
#define ARGS_2_RESULT	ARGS_1_RESULT ", arg1"

#define ARGS_3	ARGS_2, arg2
#define ARGS_3_RESULT	ARGS_2_RESULT ", arg2"

#define ARGS_10	ARGS_3, arg3, arg4, arg5, arg6, arg7, arg8, arg9
#define ARGS_10_RESULT	ARGS_3_RESULT ", arg3, arg4, arg5, arg6, arg7, arg8, arg9"

OOOTest(OOOPre)
{
	char * szTest;

	// should handle 0 arguments not followed by anything
	szTest = OOOQuote(OOOPre(OOOCount(EMPTY)));
	if (O_strcmp(EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", EMPTY_RESULT, szTest);
	}

	// should handle 0 arguments followed by other arguments
	szTest = OOOQuote(OOOPre(OOOCount(EMPTY), ARGS_10));
	if (O_strcmp(EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", EMPTY_RESULT, szTest);
	}

	// should handle 1 argument not followed by anything
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_1), ARGS_1));
	if (O_strcmp(ARGS_1_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_1_RESULT, szTest);
	}

	// should handle 1 argument followed by other arguments
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_1), ARGS_1, ARGS_10));
	if (O_strcmp(ARGS_1_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_1_RESULT, szTest);
	}

	// should handle 2 arguments not followed by anything
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_2), ARGS_2));
	if (O_strcmp(ARGS_2_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_2_RESULT, szTest);
	}

	// should handle 2 argument followed by other arguments
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_2), ARGS_2, ARGS_10));
	if (O_strcmp(ARGS_2_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_2_RESULT, szTest);
	}

	// should handle 3 arguments not followed by anything
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_3), ARGS_3));
	if (O_strcmp(ARGS_3_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_3_RESULT, szTest);
	}

	// should handle 3 argument followed by other arguments
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_3), ARGS_3, ARGS_10));
	if (O_strcmp(ARGS_3_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_3_RESULT, szTest);
	}

	// should handle 10 arguments not followed by anything
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_10), ARGS_10));
	if (O_strcmp(ARGS_10_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_10_RESULT, szTest);
	}

	// should handle 10 argument followed by other arguments
	szTest = OOOQuote(OOOPre(OOOCount(ARGS_10), ARGS_10, ARGS_10));
	if (O_strcmp(ARGS_10_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", ARGS_10_RESULT, szTest);
	}
}
