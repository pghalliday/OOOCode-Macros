#include "OOOUnitTestDefines.h"
#include "OOOForEach.h"
#include "OOOQuote.h"
#include "OOOPaste.h"

#define TEST "hello1_0_0this0_0_1is0_0_2a0_0_3test0_0_4!0_1_5"
#define QUOTE_WITH_ITERATION(FIRST, LAST, ITERATION, VALUE, REMAINDER) OOOQuote(OOOPaste(VALUE, FIRST, _, LAST, _, ITERATION)) REMAINDER

OOOTest(OOOForEach)
{
	char * szTest;

	szTest = OOOForEach(QUOTE_WITH_ITERATION, hello, this, is, a, test, !);
	if (O_strcmp(TEST, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST, szTest);
	}
}
