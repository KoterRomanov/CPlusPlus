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

int f() {
	return 1;
}

int f(int a, int b) {
	return 20;
}

void invoke1(int (*func)()) {
	printf("%d\n", (*func)());
}

void invoke2(int func()) {
	printf("%d\n", func());
}

void invoke3(int (*p)(int a, int b), int a, int b)
{
	(*p)(a, b);
}

void invoke4(int p(int a, int b), int a, int b)
{
	p(a, b);
}

void function_pointer()
{
	/* 方式一：函数指针变量赋值 */
	pMyPrintf = printf;
	pMyPrintf("The is test function pointer: %d\n", 100);

	/* 方式二：函数指针定义 + 赋值 */
	int (*pMyPrintf_)(const char*, ...) = printf;
	pMyPrintf_("The test printf: %s\n", "hello printf");

	/* 方式三：使用别名定义函数指针变量 */
	printfType pFunc = printf;
	pFunc("The test pointer of function: %s\n", "Hello pointer of function");

	/* 方式四：取地址方式赋值函数地址（与方式三等价） */
	pFunc = &printf;
	pFunc("The test pointer of function useage &\n");

	invoke1(f);
	invoke2(f);

	invoke3(f, 100, 100);
	invoke4(f, 100, 100);

	return;
}





