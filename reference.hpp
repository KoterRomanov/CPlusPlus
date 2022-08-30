#pragma once
/**
 * @brief   对 C++ 引用的练习
 * @author  koterromanov
 * @date    2022-08-23
 */

 #include "define.h"

void func_reference()
{
    // 普通引用
    int local = 100;
    int &rLocal = local;

    	// 引用普通变量
	int dat = 100;
	int &rf_dat = dat;


	// 引用常量
	const int dat_const = 100;
	const int &rf_dat_const_a = dat_const; // 引用常量，引用和变量都是常量
	const int& rf_dat_const = dat; // 引用之后引用是常量，不能通过引用改变变量值


	// 引用字面常量


	// 引用数组


	// 指针引用
}