// scanutil.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "scanutil.h"


// This is an example of an exported variable
SCANUTIL_API int nscanutil=0;

// This is an example of an exported function.
SCANUTIL_API int fnscanutil(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see scanutil.h for the class definition
Cscanutil::Cscanutil()
{
    return;
}

void Cscanutil::test()
{
	return;
}
