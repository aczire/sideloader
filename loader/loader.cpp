// loader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	HMODULE hUtil;
	hUtil = LoadLibrary(TEXT("scanutil.dll"));
	if (NULL == hUtil) {
		printf("DLL NOT Loaded.\n");
		return -1;
	}
	else {
		printf("DLL Loaded.\n");
	}
	
	//WaitForSingleObject(GetCurrentProcess(), INFINITE);
    return 0;
}

