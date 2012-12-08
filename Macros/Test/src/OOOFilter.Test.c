#include "OOOUnitTestDefines.h"
#include "OOOFilter.h"
#include "OOOQuote.h"
#include "OOOList.h"

#define LABEL_0		0
#define LABEL_1		1
#define LABEL_2		2
#define LABEL_3		3

#define TYPE_0(ARGS...)	OOOList(LABEL_0,ARGS)
#define TYPE_1(ARGS...)	OOOList(LABEL_1,ARGS)
#define TYPE_2(ARGS...)	OOOList(LABEL_2,ARGS)
#define TYPE_3(ARGS...)	OOOList(LABEL_3,ARGS)

#define TEST_LISTS \
	TYPE_1(apple, banana, pear), \
	TYPE_3(hello, goodbye), \
	TYPE_0(foo, bar), \
	TYPE_0(orange), \
	TYPE_2(green, red, blue), \
	TYPE_3(tom, dick, harry), \
	TYPE_3(cheese)

#define TEST_0 \
	"2, foo, bar , " \
	"1, orange"

#define TEST_1 \
	"3, apple, banana, pear"

#define TEST_2 \
	"3, green, red, blue"

#define TEST_3 \
	"2, hello, goodbye , " \
	"3, tom, dick, harry , " \
	"1, cheese"

OOOTest(OOOFilter)
{
	char * szTest;

	szTest = OOOQuote(OOOFilter(LABEL_0,TEST_LISTS));
	if (O_strcmp(TEST_0, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_0, szTest);
	}

	szTest = OOOQuote(OOOFilter(LABEL_1,TEST_LISTS));
	if (O_strcmp(TEST_1, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_1, szTest);
	}

	szTest = OOOQuote(OOOFilter(LABEL_2,TEST_LISTS));
	if (O_strcmp(TEST_2, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_2, szTest);
	}

	szTest = OOOQuote(OOOFilter(LABEL_3,TEST_LISTS));
	if (O_strcmp(TEST_3, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_3, szTest);
	}
}
