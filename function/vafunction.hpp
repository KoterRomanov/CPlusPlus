#pragma once

#include "define.h"
#include <stdarg.h>

/*
 * 1. 可变参数函数至少带一个固定参数, 然后才是可变参数
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

	/* 可变参数列表 */
	va_list arguments;

	/* 可变参数列表指向第一个可变参数地址（通过最后一个固定参数的地址计算第一个可变参数地址） */
	va_start(arguments, a);

	printf("The val: %d\n", a);

	/* 获取可变参数列表中每一个参数 */
	int val = a;
	while (val) {

		/* 循环取参数 */
		/* 通过指定的参数类型取本参数的值, 并且把指针指向下一个参数的起始地址 */
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