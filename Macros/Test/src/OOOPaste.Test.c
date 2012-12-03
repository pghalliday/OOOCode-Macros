#include "OOOUnitTestDefines.h"
#include "OOOPaste.h"
#include "OOOQuote.h"

OOOTest(OOOPaste)
{
#define HELLO Hello
	OOOCheck(O_strcmp(OOOQuote(OOOPaste(Hello, Goodbye)), "HelloGoodbye") == 0);
#define GOODBYE Goodbye
	OOOCheck(O_strcmp(OOOQuote(OOOPaste(HELLO, GOODBYE)), "HelloGoodbye") == 0);
}
