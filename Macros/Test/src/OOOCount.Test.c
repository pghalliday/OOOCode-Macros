#include "OOOUnitTestDefines.h"
#include "OOOCount.h"

#define EMPTY
#define ARGS_1	arg0
#define ARGS_2	ARGS_1, arg1
#define ARGS_3	ARGS_2, arg2
#define ARGS_10	ARGS_3, arg3, arg4, arg5, arg6, arg7, arg8, arg9

OOOTest(OOOCount)
{
	// Should return 0 for an empty arg list
	OOOCheck(OOOCount(EMPTY) == 0);

	// Should return the number of arguments
	OOOCheck(OOOCount(ARGS_1) == 1);
	OOOCheck(OOOCount(ARGS_2) == 2);
	OOOCheck(OOOCount(ARGS_3) == 3);
	OOOCheck(OOOCount(ARGS_10) == 10);
}
