#include "OOOUnitTestDefines.h"
#include "OOOQuote.h"
#include "OOOList.h"
#include "OOOListAppend.h"

#include "OOOPostList.h"

#define LIST_EMPTY			OOOList()
#define LIST_1				OOOList(arg0)
#define LIST_2				OOOListAppend(LIST_1, arg1)
#define LIST_3				OOOListAppend(LIST_2, arg2)
#define LIST_10				OOOListAppend(LIST_3, arg3, arg4, arg5, arg6, arg7, arg8, arg9)

#define LISTS \
	LIST_EMPTY, \
	LIST_1, \
	LIST_2, \
	LIST_3, \
	LIST_10

#define LIST_EMPTY_RESULT	OOOQuote(LIST_1, LIST_2, LIST_3, LIST_10)
#define LIST_1_RESULT		OOOQuote(LIST_2, LIST_3, LIST_10)
#define LIST_2_RESULT		OOOQuote(LIST_3, LIST_10)
#define LIST_3_RESULT		OOOQuote(LIST_10)
#define LIST_10_RESULT		OOOQuote()

OOOTest(OOOPostList)
{
	char * szTest;

	szTest = OOOQuote(OOOPostList(0,LISTS));
	if (O_strcmp(LIST_EMPTY_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", LIST_EMPTY_RESULT, szTest);
	}

	szTest = OOOQuote(OOOPostList(1,LISTS));
	if (O_strcmp(LIST_1_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", LIST_1_RESULT, szTest);
	}

	szTest = OOOQuote(OOOPostList(2,LISTS));
	if (O_strcmp(LIST_2_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", LIST_2_RESULT, szTest);
	}

	szTest = OOOQuote(OOOPostList(3,LISTS));
	if (O_strcmp(LIST_3_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", LIST_3_RESULT, szTest);
	}

	szTest = OOOQuote(OOOPostList(4,LISTS));
	if (O_strcmp(LIST_10_RESULT, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", LIST_10_RESULT, szTest);
	}
}
