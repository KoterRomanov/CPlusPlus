#pragma once

#include "define.h"
#include <stdarg.h>

/*
 * 1. �ɱ�����������ٴ�һ���̶�����, Ȼ����ǿɱ����
 * 2. 
 *
 *
 *
 */

void func_va_ex(int a, ...) {

	int* ptr = &a;
	while (*ptr) {

		cout << *ptr << endl;
		ptr++;
	}
}

void func_va_macro(int a, ...) {

	/* �ɱ�����б� */
	va_list arguments;

	/* �ɱ�����б�ָ���һ���ɱ������ַ��ͨ�����һ���̶������ĵ�ַ�����һ���ɱ������ַ�� */
	va_start(arguments, a);

	printf("The val: %d\n", a);

	/* ��ȡ�ɱ�����б���ÿһ������ */
	int val = a;
	while (val) {

		/* ѭ��ȡ���� */
		/* ͨ��ָ���Ĳ�������ȡ��������ֵ, ���Ұ�ָ��ָ����һ����������ʼ��ַ */
		val = va_arg(arguments, int);
		printf("The val: %d\n", val);
	}

	va_end(arguments);
}

void function_va()
{
	printf("call func_va_ex\n");
	func_va_ex(1, 2, 3, 4, 5);

	printf("call func_va_macro\n");
	func_va_macro(1, 2, 3, 4, 0);
}