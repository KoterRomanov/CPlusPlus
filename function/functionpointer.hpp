#pragma once
/**
 * 函数指针 
 * 
 * ReturnType (*pFunctionPointerTypeName)(var-list)
 * 
 */

#include "define.h"

/* 函数指针变量声明 */
int (*pMyPrintf)(const char* fmt, ...);

/* 声明函数指针类型别名 */
typedef int(*printfType)(const char*, ...);

void function_pointer()
{
	/* 方式一：函数指针变量赋值 */
	pMyPrintf = printf;

	/* 方式二：函数指针定义 + 赋值 */
	int (*pMyPrintf_)(const char*, ...) = printf;

	/* 方式三：使用别名定义函数指针变量 */
	printfType pFunc = printf;

	/* 方式四：取地址方式赋值函数地址（与方式三等价） */
	pFunc = &printf;

	pMyPrintf("The is test function pointer: %d\n", 100);
}





