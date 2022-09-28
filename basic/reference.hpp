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


	// 常量引用，引用字面值
	const int& rf_const = 100;
	cout << "rf_const :" << rf_const << endl;

	// 引用数组
	int arry_dat[10] = { 1, 2, 3, 4, 5 };
	int(&rf_arry_dat)[10] = arry_dat; // rf_arry_dat 首先和 & 结合，所以 rf_arry_dat 是引用，引用的对象是数组
	cout << arry_dat << endl;
	cout << rf_arry_dat << endl;
	for (int i = 0; i < 10; i++) {
		cout << rf_arry_dat[i] << endl;
	}

	// 扩展: 引用数组（数组里面保存的是引用）
	// int& arry_dat_[2]; (引用的数组是非法的)


	// 指针引用
	int* point_dat = &dat;
	int*& rf_point_dat = point_dat;  // 指针的引用，指针 point_dat 的别名
	cout << "point_dat address: " << point_dat << endl;
	cout << "rf_point_dat addres: " << rf_point_dat << endl;

	// 练习：指针的引用的用法
	cout << "dat data from reference: " << *rf_point_dat << endl;

	int new_dat = 200;
	rf_point_dat = &new_dat; // 通过引用让 point_dat 指针指向新的变量
	cout << "point_dat address: " << point_dat << endl;
	cout << "rf_point_dat addres: " << rf_point_dat << endl;
	cout << "dat data from reference: " << *rf_point_dat << endl;
}