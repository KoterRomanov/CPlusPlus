#pragma once
/* 数组 */

#include "define.h"
#include <typeinfo>

void function_array_pointer();
void function_initialize();

void function_array()
{
	int A[4] = { 0 };

	cout << A << endl;
	cout << &A << endl;

	/* 数组指针，一维指针 */
	cout << typeid(A).name() << endl;
	cout << A + 1 << endl; /* +1 指向一维数组的下一个元素 */

	/* 指针数组，二维指针 */
	cout << typeid(&A).name() << endl;
	cout << &A + 1 << endl;  /* +1 指向数组的下一个元素，这里指针是二维数组的首地址，因此跳一步会跳第二维数组总长度的距离。例如 int A[3][5]，跳一步会跳 sizeof(int) * 5 */

	int B[3][5] = { 0 };
	cout << typeid(B).name() << endl;
	cout << typeid(&B).name() << endl;
	cout << B << endl;
	cout << B + 1 << endl;
	cout << &B + 1 << endl;

	function_array_pointer();

	function_initialize();
}

void show(int arr[100])
{
	/* 合法，因为 arr 被看做指针，指针可以自增偏移 */
	arr++;
	cout << (*arr) << endl;
}

void show_reference(int(&arr)[100])
{
	assert(arr);
}

void function_array_pointer()
{
	/*
	 * 1. 数组名是指针常量, 不能改变数组名指向的数组
	 */
	int arr[100] = { 0, 1, 2, 3, 4 };
	cout << typeid(arr).name() << endl;

	/* 非法 */
	//arr++;

	/* 合法 */
	int* p0 = arr + 1;
	cout << (*p0) << endl;


	/* 
	 * 2. 形参中的数组被看做指针，而不是数组 
	 */
	show(arr);

	/*
	 * 3. 形参是引用。 形参是对实参的引用，数组长度作为类型的一部分
	 */
	int new_arr[99] = { 0 };
	//show_reference(new_arr); /* 错误：参数类型是 int (&)[100]，传入的 new_arr 的类型是 int(&)[99]，参数类型不一致 */
	show_reference(arr);
}

void function_initialize()
{
	/* 方式1：初始所有数据为 0 */
	int arr[100] = {};

	/* 方式2：初始化给定初始值 */
	int arr_2[] = { 1, 2, 3 };

	/* 方式3：部分初始化 */
	int arr_3[5] = { 1, 2, 3 };

	/* 错误初始化 */
	int arr_4[2] = { 1, 2, 3 };
}
