#include "OOOUnitTestDefines.h"
#include "OOOSimplePaste.h"
#include "OOOQuote.h"

/*
 *  NB. Cannot use OOOSimplePaste as test name due to issues with
 *  macro expansion - very strange and slightly worrying
 */
OOOTest(OOOOSimplePaste)
{
	OOOCheck(O_strcmp(OOOQuote(OOOSimplePaste(Hello, Goodbye)), "HelloGoodbye") == 0);
#define HELLO Hello
#define GOODBYE Goodbye
	OOOCheck(O_strcmp(OOOQuote(OOOSimplePaste(HELLO, GOODBYE)), "HelloGoodbye") == 0);
}
