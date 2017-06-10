// loader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	HMODULE hUtil;
	hUtil = LoadLibrary(TEXT("scanutil.dll"));
	if (NULL == hUtil) {
		printf("DLL NOT Loaded.");
		return -1;
	}
	else {
		printf("DLL Loaded.");
	}
	
	//WaitForSingleObject(GetCurrentProcess(), INFINITE);
    return 0;
}

