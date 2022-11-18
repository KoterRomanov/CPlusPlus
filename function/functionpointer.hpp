#pragma once
/**
 * ����ָ�� 
 * 
 * ReturnType (*pFunctionPointerTypeName)(var-list)
 * 
 */

#include "define.h"

/* ����ָ��������� */
int (*pMyPrintf)(const char* fmt, ...);

/* ��������ָ�����ͱ��� */
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
	/* ��ʽһ������ָ�������ֵ */
	pMyPrintf = printf;
	pMyPrintf("The is test function pointer: %d\n", 100);

	/* ��ʽ��������ָ�붨�� + ��ֵ */
	int (*pMyPrintf_)(const char*, ...) = printf;
	pMyPrintf_("The test printf: %s\n", "hello printf");

	/* ��ʽ����ʹ�ñ������庯��ָ����� */
	printfType pFunc = printf;
	pFunc("The test pointer of function: %s\n", "Hello pointer of function");

	/* ��ʽ�ģ�ȡ��ַ��ʽ��ֵ������ַ���뷽ʽ���ȼۣ� */
	pFunc = &printf;
	pFunc("The test pointer of function useage &\n");

	invoke1(f);
	invoke2(f);

	invoke3(f, 100, 100);
	invoke4(f, 100, 100);

	return;
}





