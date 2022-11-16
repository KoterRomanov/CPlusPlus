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

	return;
}





