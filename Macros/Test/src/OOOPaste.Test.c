#include "OOOUnitTestDefines.h"
#include "OOOPaste.h"
#include "OOOQuote.h"

OOOTest(OOOPaste)
{
#define HELLO Hello
#define GOODBYE Goodbye
	OOOCheck(O_strcmp(OOOQuote(OOOPaste(HELLO, GOODBYE, HELLO, GOODBYE)), "HelloGoodbyeHelloGoodbye") == 0);
}
