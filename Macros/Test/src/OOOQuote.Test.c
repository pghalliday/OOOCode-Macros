#include "OOOUnitTestDefines.h"
#include "OOOQuote.h"

OOOTest(OOOQuote)
{
	OOOCheck(O_strcmp(OOOQuote(Hello), "Hello") == 0);
#define HELLO Hello
	OOOCheck(O_strcmp(OOOQuote(HELLO), "Hello") == 0);
}
