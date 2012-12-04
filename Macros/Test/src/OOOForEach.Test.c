#include "OOOUnitTestDefines.h"
#include "OOOForEach.h"
#include "OOOPaste.h"
#include "OOOQuote.h"

#define TEST_1 "hello1_0_0this0_0_1is0_0_2a0_0_3test0_0_4!0_1_5"
#define TEST_2 "hellothis1_0_0 isa0_0_1 test!0_1_2"

#define PASTE_ITERATION_PARAMS(FIRST, LAST, ITERATION) OOOPaste(OOOPaste(OOOPaste(OOOPaste(FIRST, _), LAST), _), ITERATION)
#define QUOTE_WITH_ITERATION(FIRST, LAST, ITERATION, VALUE) OOOQuote(OOOPaste(VALUE, PASTE_ITERATION_PARAMS(FIRST, LAST, ITERATION)))
#define PASTE_WITH_ITERATION(FIRST, LAST, ITERATION, VALUE1, VALUE2) OOOPaste(OOOPaste(VALUE1, VALUE2), PASTE_ITERATION_PARAMS(FIRST, LAST, ITERATION))

OOOTest(OOOForEach)
{
	char * szTest;

	szTest = OOOForEach(QUOTE_WITH_ITERATION, 1, hello, this, is, a, test, !);
	if (O_strcmp(TEST_1, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST_1, szTest);
	}

	szTest = OOOQuote(OOOForEach(PASTE_WITH_ITERATION, 2, hello, this, is, a, test, !));
	if (O_strcmp(TEST_2, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST_2, szTest);
	}
}
