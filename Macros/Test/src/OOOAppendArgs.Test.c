#include "OOOUnitTestDefines.h"
#include "OOOAppendArgs.h"
#include "OOOQuote.h"

#define EMPTY_ARGS
#define TEST_ARGS arg0, arg1, arg3

#define EMPTY_ARGS_EMPTY_RESULT \
	""

#define EMPTY_ARGS_NOT_EMPTY_RESULT \
	""

#define TEST_ARGS_EMPTY_RESULT \
	"arg0, arg1, arg3"

#define TEST_ARGS_NOT_EMPTY_RESULT \
	", arg0, arg1, arg3"

OOOTest(OOOAppendArgs)
{
	char * szTest;

	szTest = OOOQuote(OOOAppendArgs(1, EMPTY_ARGS));
	if (O_strcmp(EMPTY_ARGS_EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", EMPTY_ARGS_EMPTY_RESULT, szTest);
	}

	szTest = OOOQuote(OOOAppendArgs(0, EMPTY_ARGS));
	if (O_strcmp(EMPTY_ARGS_NOT_EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", EMPTY_ARGS_NOT_EMPTY_RESULT, szTest);
	}

	szTest = OOOQuote(OOOAppendArgs(1, TEST_ARGS));
	if (O_strcmp(TEST_ARGS_EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_ARGS_EMPTY_RESULT, szTest);
	}

	szTest = OOOQuote(OOOAppendArgs(0, TEST_ARGS));
	if (O_strcmp(TEST_ARGS_NOT_EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_ARGS_NOT_EMPTY_RESULT, szTest);
	}
}
