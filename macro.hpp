#pragma once
/**
 * @brief   对 C++ 宏的练习
 * @author  koterromanov
 * @date    2022-09-11
 */
#include "define.h"

#define _REMOTE  (100 * 1024 * 8) // 100MB

// 宏定义的函数
#define COMPARE(a, b)	if (a > b) \
		printf("The first one is bigger\n"); \
	else \
		printf("The first one is not bigger\n");


// #a 是变量，  a##b 是拼接的字符串
#define Print(a, b)	cout << #a#b" is " << a##b << endl;

void function_macro()
{
	cout << "100MB = " << _REMOTE << endl;

	COMPARE(1, 2);

	Print(1, 2);
}