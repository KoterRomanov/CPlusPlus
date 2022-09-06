#pragma once
/**
 * @brief   对 C++ typedef 关键字的练习
 * @author  koterromanov
 * @date    2022-09-04
 */

#include "define.h"
#include <assert.h>

// 普通类型变量
typedef int INT;
typedef int* PINT;

// 数组
typedef int INT_ARRY[10];

// 函数指针
typedef void (*P_FUNC)(int, int&);

void function(int input, int& output)
{
	assert(intput);
	assert(output);
}

void func_typedef()
{
	// 普通数据类型关键字别名
	INT _data = 100;
	cout << _data << endl;

	PINT _pdata = &_data;
	cout << *_pdata << endl;

	// 数组别名
	INT_ARRY _arry = { 0 };

	// 函数指针
	P_FUNC pFunc = function;
}