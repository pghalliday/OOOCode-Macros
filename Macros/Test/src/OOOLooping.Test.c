#include "OOOUnitTestDefines.h"
#include "OOOLooping.h"
#include "OOOPastingAndQuoting.h"

#define TEST "hellothisisatest"

OOOTest(OOOLooping)
{
	char * szTest = OOOForEach(OOOQuote, 1, hello, this, is, a, test);
	if (O_strcmp(TEST, szTest) != 0)
	{
		OOOError("Expected: %s: Received: %s", TEST, szTest);
	}
}
