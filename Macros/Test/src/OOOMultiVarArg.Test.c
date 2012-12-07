#include "OOOUnitTestDefines.h"
#include "OOOCount.h"
#include "OOOPre.h"
#include "OOOPost.h"
#include "OOOList.h"
#include "OOOSimplePaste.h"
#include "OOOQuote.h"
#include "OOOForEach.h"
#include "OOOForEachList.h"

#define TEST_RESULT_2_ARGS	\
	"FUNCTION_DECLARE apple; FUNCTION_DECLARE banana; " \
	"FIELD_DECLARE foo; FIELD_DECLARE bar; " \
	"FIELD_IMPLEMENT foo; FIELD_IMPLEMENT bar; " \
	"FUNCTION_IMPLEMENT apple; FUNCTION_IMPLEMENT banana;"

#define TEST_RESULT_VAR_ARGS	\
	"FUNCTION_DECLARE apple; FUNCTION_DECLARE banana; FUNCTION_DECLARE pear; " \
	"FIELD_DECLARE foo; FIELD_DECLARE bar; " \
	"FIELD_IMPLEMENT foo; FIELD_IMPLEMENT bar; " \
	"FUNCTION_IMPLEMENT apple; FUNCTION_IMPLEMENT banana; FUNCTION_IMPLEMENT pear;"

#define TEST_RESULT_3_LISTS	\
	"FUNCTION_DECLARE apple; FUNCTION_DECLARE banana; FUNCTION_DECLARE pear; " \
	"INTERFACE_IMPLEMENT hello; INTERFACE_IMPLEMENT goodbye; " \
	"FIELD_DECLARE foo; FIELD_DECLARE bar; " \
	"FIELD_IMPLEMENT foo; FIELD_IMPLEMENT bar; " \
	"FUNCTION_IMPLEMENT apple; FUNCTION_IMPLEMENT banana; FUNCTION_IMPLEMENT pear;"

#define TEST_RESULT_EMPTY_LIST	\
	"FUNCTION_DECLARE apple; FUNCTION_DECLARE banana; FUNCTION_DECLARE pear; " \
	"INTERFACE_IMPLEMENT hello; INTERFACE_IMPLEMENT goodbye; " \
	"" \
	"" \
	"FUNCTION_IMPLEMENT apple; FUNCTION_IMPLEMENT banana; FUNCTION_IMPLEMENT pear;"

#define TEST_RESULT_LISTS_OF_LISTS	\
	"FUNCTION_DECLARE int add( int nValue); FUNCTION_DECLARE char * toString(void); FUNCTION_DECLARE void request( char * url, char * headers); " \
	"INTERFACE_IMPLEMENT hello; INTERFACE_IMPLEMENT goodbye; " \
	"" \
	"" \
	"FUNCTION_IMPLEMENT int add( int nValue){}; FUNCTION_IMPLEMENT char * toString(void){}; FUNCTION_IMPLEMENT void request( char * url, char * headers){};"

#define FUNCTION_DECLARE(FIRST, LAST, ITERATION, FUNCTION, REMAINDER...) \
	FUNCTION_DECLARE FUNCTION; REMAINDER
#define FUNCTIONS_DECLARE(ARGS...) \
	OOOForEach(FUNCTION_DECLARE, ARGS)

#define FUNCTION_IMPLEMENT(FIRST, LAST, ITERATION, FUNCTION, REMAINDER...) \
	FUNCTION_IMPLEMENT FUNCTION; REMAINDER
#define FUNCTIONS_IMPLEMENT(ARGS...) \
	OOOForEach(FUNCTION_IMPLEMENT, ARGS)

#define FIELD_DECLARE(FIRST, LAST, ITERATION, FIELD, REMAINDER...) \
	FIELD_DECLARE FIELD; REMAINDER
#define FIELDS_DECLARE(ARGS...) \
	OOOForEach(FIELD_DECLARE, ARGS)

#define FIELD_IMPLEMENT(FIRST, LAST, ITERATION, FIELD, REMAINDER...) \
	FIELD_IMPLEMENT FIELD; REMAINDER
#define FIELDS_IMPLEMENT(ARGS...) \
	OOOForEach(FIELD_IMPLEMENT, ARGS)

#define INTERFACE_IMPLEMENT(FIRST, LAST, ITERATION, INTERFACE, REMAINDER...) \
	INTERFACE_IMPLEMENT INTERFACE; REMAINDER
#define INTERFACES_IMPLEMENT(ARGS...) \
	OOOForEach(INTERFACE_IMPLEMENT, ARGS)

#define FUNCTION_IMPLEMENTATION0(RETURN, NAME, ARGS...) \
	RETURN NAME(ARGS){}
#define FUNCTION_IMPLEMENTATION1(RETURN, NAME, ARGS...) \
	RETURN NAME(void){}
#define _FUNCTION_IMPLEMENTATION(RETURN, NAME, ARGS...) OOOSimplePaste(FUNCTION_IMPLEMENTATION,OOOIsEmpty(ARGS))(RETURN, NAME, ARGS)
#define FUNCTION_IMPLEMENTATION(ARGS...) _FUNCTION_IMPLEMENTATION(ARGS)

#define FUNCTION2_IMPLEMENT(FIRST, LAST, ITERATION, ARGS...) \
	FUNCTION_IMPLEMENT FUNCTION_IMPLEMENTATION(OOOPre(ARGS)); OOOPost(ARGS)
#define FUNCTIONS2_IMPLEMENT(ARGS...) \
	OOOForEachList(FUNCTION2_IMPLEMENT, ARGS)

#define FUNCTION_PROTOTYPE0(RETURN, NAME, ARGS...) \
	RETURN NAME(ARGS)
#define FUNCTION_PROTOTYPE1(RETURN, NAME, ARGS...) \
	RETURN NAME(void)
#define _FUNCTION_PROTOTYPE(RETURN, NAME, ARGS...) OOOSimplePaste(FUNCTION_PROTOTYPE,OOOIsEmpty(ARGS))(RETURN, NAME, ARGS)
#define FUNCTION_PROTOTYPE(ARGS...) _FUNCTION_PROTOTYPE(ARGS)

#define FUNCTION2_DECLARE(FIRST, LAST, ITERATION, ARGS...) \
	FUNCTION_DECLARE FUNCTION_PROTOTYPE(OOOPre(ARGS)); OOOPost(ARGS)
#define FUNCTIONS2_DECLARE(ARGS...) \
	OOOForEachList(FUNCTION2_DECLARE, ARGS)

#define CLASS(ARGS...) \
	FUNCTIONS_DECLARE(OOOPre(ARGS)) \
	FIELDS_DECLARE(OOOPre(OOOPost(ARGS))) \
	FIELDS_IMPLEMENT(OOOPre(OOOPost(ARGS))) \
	FUNCTIONS_IMPLEMENT(OOOPre(ARGS))

#define CLASS2(ARGS...) \
	FUNCTIONS_DECLARE(OOOPre(ARGS)) \
	INTERFACES_IMPLEMENT(OOOPre(OOOPost(OOOPost(ARGS)))) \
	FIELDS_DECLARE(OOOPre(OOOPost(ARGS))) \
	FIELDS_IMPLEMENT(OOOPre(OOOPost(ARGS))) \
	FUNCTIONS_IMPLEMENT(OOOPre(ARGS))

#define CLASS3(ARGS...) \
	FUNCTIONS2_DECLARE(OOOPre(ARGS)) \
	INTERFACES_IMPLEMENT(OOOPre(OOOPost(OOOPost(ARGS)))) \
	FIELDS_DECLARE(OOOPre(OOOPost(ARGS))) \
	FIELDS_IMPLEMENT(OOOPre(OOOPost(ARGS))) \
	FUNCTIONS2_IMPLEMENT(OOOPre(ARGS))

#define FUNCTIONS(ARGS...) OOOList(ARGS)
#define FIELDS(ARGS...) OOOList(ARGS)
#define INTERFACES(ARGS...) OOOList(ARGS)
#define FUNCTION(ARGS...) OOOList(ARGS)

OOOTest(OOOMultiVarArg)
{
	char * szTest;

	// should handle 2 functions and 2 fields
	szTest = OOOQuote(CLASS(FUNCTIONS(apple, banana), FIELDS(foo, bar)));
	if (O_strcmp(TEST_RESULT_2_ARGS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_RESULT_2_ARGS, szTest);
	}

	// should handle 3 functions and 2 fields
	szTest = OOOQuote(CLASS(FUNCTIONS(apple, banana, pear), FIELDS(foo, bar)));
	if (O_strcmp(TEST_RESULT_VAR_ARGS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_RESULT_VAR_ARGS, szTest);
	}

	// should handle 3 lists
	szTest = OOOQuote(CLASS2(FUNCTIONS(apple, banana, pear), FIELDS(foo, bar), INTERFACES(hello, goodbye)));
	if (O_strcmp(TEST_RESULT_3_LISTS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_RESULT_3_LISTS, szTest);
	}

	// should handle an empty list
	szTest = OOOQuote(CLASS2(FUNCTIONS(apple, banana, pear), FIELDS(), INTERFACES(hello, goodbye)));
	if (O_strcmp(TEST_RESULT_EMPTY_LIST, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_RESULT_EMPTY_LIST, szTest);
	}

	// should handle lists of lists
	szTest = OOOQuote(CLASS3(FUNCTIONS(FUNCTION(int, add, int nValue), FUNCTION(char *, toString), FUNCTION(void, request, char * url, char * headers)), FIELDS(), INTERFACES(hello, goodbye)));
	if (O_strcmp(TEST_RESULT_LISTS_OF_LISTS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_RESULT_LISTS_OF_LISTS, szTest);
	}
}
