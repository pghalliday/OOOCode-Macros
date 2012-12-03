#include "OOOUnitTestDefines.h"
#include "OOOForEach.h"
#include "OOOPaste.h"
#include "OOOQuote.h"

#define TEST_1 "hellothisisatest!"
#define TEST_2 "hellothis isa test!"

OOOTest(OOOForEach)
{
	char * szTest;

	szTest = OOOForEach(OOOQuote, 1, hello, this, is, a, test, !);
	if (O_strcmp(TEST_1, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST_1, szTest);
	}

	szTest = OOOQuote(OOOForEach(OOOPaste, 2, hello, this, is, a, test, !));
	if (O_strcmp(TEST_2, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST_2, szTest);
	}
}
