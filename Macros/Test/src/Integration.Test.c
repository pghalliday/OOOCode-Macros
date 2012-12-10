#include "OOOUnitTestDefines.h"
#include "OOOList.h"
#include "OOOPreList.h"
#include "OOOPostList.h"
#include "OOOSimplePaste.h"
#include "OOOFilter.h"
#include "OOOIsEmpty.h"
#include "OOOForEachClosure.h"
#include "OOOQuote.h"

#define LABEL_NAME			0
#define LABEL_CONSTRUCTOR	1
#define LABEL_FUNCTION		2
#define LABEL_INTERFACE		3

#define DECLARE_FUNCTION0(CLASS_NAME, RETURN, NAME, ARGS...) \
	RETURN OOOSimplePaste(CLASS_NAME,OOOSimplePaste(_,NAME))(ARGS);
#define DECLARE_FUNCTION1(CLASS_NAME, RETURN, NAME, ARGS...) \
	RETURN OOOSimplePaste(CLASS_NAME,OOOSimplePaste(_,NAME))(void);
#define __DECLARE_FUNCTION(CLASS_NAME, RETURN, NAME, ARGS...) \
	OOOSimplePaste(DECLARE_FUNCTION,OOOIsEmpty(ARGS))(CLASS_NAME, RETURN, NAME, ARGS)
#define _DECLARE_FUNCTION(ARGS...) __DECLARE_FUNCTION(ARGS)
#define DECLARE_FUNCTION(FIRST, LAST, ITERATION, CLOSURE_LIST_REMAINDER...) \
	_DECLARE_FUNCTION(OOOPreList(0,CLOSURE_LIST_REMAINDER),OOOPreList(1,CLOSURE_LIST_REMAINDER)) \
	OOOPostList(1,CLOSURE_LIST_REMAINDER)

#define __DECLARE_INTERFACE(CLASS_NAME, INTERFACE) \
	INTERFACE * OOOSimplePaste(CLASS_NAME,OOOSimplePaste(_as,INTERFACE))(void);
#define _DECLARE_INTERFACE(ARGS...) __DECLARE_INTERFACE(ARGS)
#define DECLARE_INTERFACE(FIRST, LAST, ITERATION, CLOSURE_LIST_REMAINDER...) \
	_DECLARE_INTERFACE(OOOPreList(0,CLOSURE_LIST_REMAINDER),OOOPreList(1,CLOSURE_LIST_REMAINDER)) \
	OOOPostList(1,CLOSURE_LIST_REMAINDER)

#define CLASS_TYPE(NAME) \
	typedef struct OOOSimplePaste(_,NAME) NAME;
#define CLASS_CONSTRUCTOR(NAME, ARGS...) \
	NAME * OOOSimplePaste(NAME,_construct)(ARGS);
#define CLASS_FUNCTIONS(NAME, ARGS...) \
	OOOForEachClosure(DECLARE_FUNCTION, OOOList(NAME), ARGS)
#define CLASS_INTERFACES(NAME, ARGS...) \
	OOOForEachClosure(DECLARE_INTERFACE, OOOList(NAME), ARGS)
#define CLASS_DESTRUCTOR(NAME) \
	void OOOSimplePaste(NAME,_destroy)(NAME * pThis);

#define _CLASS(NAME, ARGS...) \
	CLASS_TYPE(NAME) \
	CLASS_CONSTRUCTOR(NAME, OOOPreList(0,ARGS)) \
	CLASS_FUNCTIONS(NAME, OOOPreList(1,ARGS)) \
	CLASS_INTERFACES(NAME, OOOPreList(2,ARGS)) \
	CLASS_DESTRUCTOR(NAME)

#define CLASS(ARGS...) \
 	_CLASS \
 	( \
 		OOOPreList(0,OOOFilter(LABEL_NAME, ARGS)), \
		OOOList(OOOPreList(0,OOOFilter(LABEL_CONSTRUCTOR, ARGS))), \
		OOOList(OOOFilter(LABEL_FUNCTION, ARGS)), \
		OOOList(OOOFilter(LABEL_INTERFACE, ARGS)) \
	)

#define NAME(ARG) OOOList(LABEL_NAME, ARG)
#define CONSTRUCTOR(ARGS...) OOOList(LABEL_CONSTRUCTOR, ARGS)
#define FUNCTION(ARGS...) OOOList(LABEL_FUNCTION, ARGS)
#define INTERFACE(ARG) OOOList(LABEL_INTERFACE, ARG)

#define TEST_CLASS \
	"typedef struct _MyClass MyClass ; " \
	"MyClass * MyClass_construct( int nNumber, char * szString ); " \
	"int MyClass_getNumber (void); " \
	"char * MyClass_getString (void); " \
	"void MyClass_setValues( int nNumber, char * szString ); " \
	"MyInterface * MyClass_asMyInterface (void); " \
	"YourInterface * MyClass_asYourInterface (void); " \
	"void MyClass_destroy( MyClass * pThis);"

OOOTest(Integration)
{
	char * szTest;

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

	// should not care what order the elements are specified
	szTest = OOOQuote
	(
		CLASS
		(
			INTERFACE(MyInterface),
			FUNCTION(int, getNumber),
			FUNCTION(char *, getString),
			NAME(MyClass),
			FUNCTION(void , setValues, int nNumber, char * szString),
			CONSTRUCTOR(int nNumber, char * szString),
			INTERFACE(YourInterface)
		)
	);
	if (O_strcmp(TEST_CLASS, szTest) != 0)
	{
		OOOError("expected: %s\nReceived: %s", TEST_CLASS, szTest);
	}
}
