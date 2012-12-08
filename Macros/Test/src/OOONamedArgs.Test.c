#include "OOOUnitTestDefines.h"
#include "OOOList.h"
#include "OOOPre.h"
#include "OOOPost.h"
#include "OOOSimplePaste.h"
#include "OOOForEachList.h"
#include "OOOFilter.h"

#define LABEL_NAME			0
#define LABEL_CONSTRUCTOR	1
#define LABEL_FUNCTION		2
#define LABEL_INTERFACE		3

#define CLASS_TYPE(NAME) \
	typedef struct OOOSimplePaste(_,NAME) NAME;
#define CLASS_CONSTRUCTOR(NAME, ARGS...) \
	NAME * OOOSimplePaste(NAME,_construct)(ARGS);
#define CLASS_FUNCTIONS(NAME, ARGS...)

#define CLASS_INTERFACES(NAME, ARGS...)

#define CLASS_DESTRUCTOR(NAME)

#define _CLASS(NAME, ARGS...) \
	CLASS_TYPE(NAME) \
	CLASS_CONSTRUCTOR(NAME, OOOPre(ARGS)) \
	CLASS_FUNCTIONS(NAME, OOOPre(OOOPost(ARGS))) \
	CLASS_INTERFACES(NAME, OOOPre(OOOPost(OOOPost(ARGS)))) \
	CLASS_DESTRUCTOR(NAME)

#define CLASS(ARGS...) \
 	_CLASS \
 	( \
 		OOOPre(OOOFilter(LABEL_NAME, ARGS)), \
		OOOPre(OOOFilter(LABEL_CONSTRUCTOR, ARGS)), \
		OOOList(OOOFilter(LABEL_FUNCTION, ARGS)), \
		OOOList(OOOFilter(LABEL_INTERFACE, ARGS)) \
	)

#define NAME(ARG) OOOList(LABEL_NAME, ARG)
#define CONSTRUCTOR(ARGS...) OOOList(LABEL_CONSTRUCTOR, ARGS)
#define FUNCTION(ARGS...) OOOList(LABEL_FUNCTION, ARGS)
#define INTERFACE(ARG) OOOList(LABEL_INTERFACE, ARG)

#define TEST_CLASS \
	"typedef struct _MyClass MyClass;" \
	"MyClass * MyClass_construct(int nNumber, char * szString);" \
	"int MyClass_getNumber(void);" \
	"char * MyClass_getString(void);" \
	"void MyClass_setValues(int nNumber, char * szString);" \
	"MyInterface * MyClass_asMyInterface(void);" \
	"YourInterface * MyClass_asYourInterface(void);" \
	"void MyClass_destroy(MyClass * pThis);"

OOOTest(OOONamedArgs)
{
	char * szTest;

	// should handle 2 functions and 2 fields
	szTest = OOOQuote
	(
		CLASS
		(
			NAME(MyClass),
			CONSTRUCTOR(int nNumber, char * szString),
			FUNCTION(int, getNumber),
			FUNCTION(char *, getString),
			FUNCTION(void , setValues, int nNumber, char * szString),
			INTERFACE(MyInterface),
			INTERFACE(YourInterface)
		)
	);
	if (O_strcmp(TEST_CLASS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_CLASS, szTest);
	}
}
