#ifndef OOOPaste_H
#define OOOPaste_H

#include "OOOForEach.h"
#include "OOOSimplePaste.h"

#define _OOOPaste(FIRST,LAST,ITERATION,ARG,REMAINDER) OOOSimplePaste(ARG,REMAINDER)
#define OOOPaste(ARGS...) OOOForEach(_OOOPaste, 1, ARGS)

#endif
