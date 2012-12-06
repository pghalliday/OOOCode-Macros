#include "OOOUnitTestDefines.h"
#include "OOOQuote.h"

OOOTest(OOOQuote)
{
	char * szTest;

	// Should handle text
	szTest = OOOQuote(Hello);
	if (O_strcmp("Hello", szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", "Hello", szTest);
	}

	// Should handle macros
	#define HELLO Hello
	szTest = OOOQuote(HELLO);
	if (O_strcmp("Hello", szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", "Hello", szTest);
	}

	// Should handle lists with commas
	OOOCheck(O_strcmp(OOOQuote(HELLO), "Hello") == 0);
	szTest = OOOQuote(Hello, this, is, a, test);
	if (O_strcmp("Hello, this, is, a, test", szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", "Hello, this, is, a, test", szTest);
	}
}
