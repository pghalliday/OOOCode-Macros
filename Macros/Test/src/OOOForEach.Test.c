#include "OOOUnitTestDefines.h"
#include "OOOForEach.h"
#include "OOOQuote.h"
#include "OOOPaste.h"
#include "OOOList.h"

#define ON_EACH(FIRST, LAST, ITERATION, VALUE, REMAINDER...) \
	FIRST LAST ITERATION VALUE REMAINDER

#define TEST \
	"1 0 0 hello " \
	"0 0 1 this " \
	"0 0 2 is " \
	"0 0 3 a " \
	"0 0 4 test " \
	"0 1 5 !"

OOOTest(OOOForEach)
{
	char * szTest;

	szTest = OOOQuote(OOOForEach(ON_EACH, hello, this, is, a, test, !));
	if (O_strcmp(TEST, szTest) != 0)
	{
		OOOError("Expected: %s\nReceived: %s", TEST, szTest);
	}
}
