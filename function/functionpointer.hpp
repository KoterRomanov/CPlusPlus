#pragma once
/**
 * º¯ÊýÖ¸Õë 
 * 
 * ReturnType (*pFunctionPointerTypeName)(var-list)
 * 
 */

#include "define.h"

int (*pMyPrintf)(const char* fmt, ...);


void function_pointer()
{
	pMyPrintf = printf;

	pMyPrintf("The is test function pointer: %d\n", 100);
}





