#pragma once

#include "define.h"
#include <stdarg.h>

/*
 * 1. �ɱ�����������ٴ�һ���̶�����, Ȼ����ǿɱ����
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

void func_va_char(char s, ...)
{
	va_list arguments;
	va_start(arguments, s);

	printf("The val: %c\n", s);

	char val = s;
	while (val != '\0') {

		val = va_arg(arguments, char);
		printf("The val: %c\n", val);
	}

	va_end(arguments);
}

void func_va_double(double d, ...)
{
	va_list arguments;
	va_start(arguments, d);

	double val = d;
	printf("The val: %f\n", val);
	while (val >= 1.00) {

		val = va_arg(arguments, double);
		printf("The val: %f\n", val);
	}

	va_end(arguments);
}

void function_va()
{
	printf("call func_va_ex\n");
	func_va_ex(1, 2, 3, 4, 5);

	printf("call func_va_macro\n");
	func_va_macro(1, 2, 3, 4, 0);

	printf("call func_va_char\n");
	func_va_char('A', 'B', 'C', 'D', '\0');

	printf("call func_va_double\n");
	func_va_double(1.00, 2.00, 3.00, 4.00, 0);
}