#pragma once
/*
 * C 语言不存在 extern "C" 声明，C 语言调用 C++ 头文件时容易出现编译失败，
 * 所以不需要包含头文件
 *
 */

// 编译器按照 C 语言的规范解析link 头文件中包含的函数名
extern "C" {
	#include "link.h"
}

int function_link(int a, int b)
{
	test_link();
	return 100;
}
