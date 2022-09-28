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

// #：表示将对应变量字符串化，相当于在宏变量两边各加上一个双引号使其变成字符串
// ##：宏参数名与宏定义中的标识符拼接在一起形成一个新的标识符；(宏调用的参数必须是标识符）
//	   宏参数名与宏定义中的字符串拼接在一起形成一个新的字符串；（宏调用的参数必须是字符串，字符串变量都不行）


// 数字转换成字符串
#define Num2Str(a) cout << (#a) << endl;

// 标识符拼接：拼接成一个变量
#define Private(a) cout << g_##a << endl;

// 字符串拼接：拼接成一个字符串
#define PrivateString(b) cout << "g_"##b << endl;

int g_remote = 100;

void function_macro()
{
	cout << "100MB = " << _REMOTE << endl;

	COMPARE(1, 2);

	Print(1, 2);

	Num2Str(11.000);

	Private(remote);

	PrivateString("remote");

	// 入参必须是常量字符串
	//string subStr = "remote";
	//PrivateString(subStr);

	//const char* subStr = "remote";
	//PrivateString(subStr);

}