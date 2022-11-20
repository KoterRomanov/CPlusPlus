#pragma once

// 编译器按照 C 语言的规范解析link 头文件中包含的函数名
extern "C" {
	#include "link.h"
}

int function_link(int a, int b)
{
	test_link();
	return 100;
}
