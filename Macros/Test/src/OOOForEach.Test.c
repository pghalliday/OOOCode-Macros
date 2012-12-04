#include "OOOUnitTestDefines.h"
#include "OOOForEach.h"
#include "OOOPaste.h"
#include "OOOQuote.h"

#define TEST_1 "hello0this1is2a3test4!5"
#define TEST_2 "hellothis0 isa1 test!2"

#define QUOTE_WITH_ITERATION(ITERATION, VALUE) OOOQuote(OOOPaste(VALUE, ITERATION))
#define PASTE_WITH_ITERATION(ITERATION, VALUE1, VALUE2) OOOPaste(OOOPaste(VALUE1, VALUE2), ITERATION)

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
