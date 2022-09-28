#pragma once
/**
 * @brief   对 C++ volatile 关键字的练习
 * @author  koterromanov
 * @date    2022-09-04
 */
#include "define.h"

/*
 * @brief	在函数体内，如果两次读取变量值之间的语句没有对变量的值进行修改
 *			，但该变量仍然有可能被其他程序（如中断服务程序、另外的线程）所修改
 *			那么编译器就会对代码进行优化。导致会从寄存器中读取变量值，就会出现被
 *			修改了的变量的值不能及时反映的问题。
 * 
 *			volatile 关键字修饰的变量每次都是从内存中读取变量的值，而不是从寄存器中
 *			读取
 */

void func_test()
{
	int i, j, k;
	int s;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			for (k = 0; k < 5; k++)
				s = 5;

	cout << s << endl;
}

void func_volatile()
{

	volatile int i = 10;
	int a = i;
	cout << a << endl;

	_asm {

		mov dword ptr 0[ebp-4], 80
	}

	int b = i;
	cout << b << endl;

	func_test();
}

