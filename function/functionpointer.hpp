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

	/* ��ʽ��������ָ�붨�� + ��ֵ */
	int (*pMyPrintf_)(const char*, ...) = printf;

	/* ��ʽ����ʹ�ñ������庯��ָ����� */
	printfType pFunc = printf;

	/* ��ʽ�ģ�ȡ��ַ��ʽ��ֵ������ַ���뷽ʽ���ȼۣ� */
	pFunc = &printf;

	pMyPrintf("The is test function pointer: %d\n", 100);
}





