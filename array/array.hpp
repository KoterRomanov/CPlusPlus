#pragma once
/* 数组 */

#include "define.h"
#include <typeinfo>

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
}
