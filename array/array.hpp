#pragma once
/* ���� */

#include "define.h"
#include <typeinfo>

void function_array()
{
	int A[4] = { 0 };

	cout << A << endl;
	cout << &A << endl;

	/* ����ָ�룬һάָ�� */
	cout << typeid(A).name() << endl;
	cout << A + 1 << endl; /* +1 ָ��һά�������һ��Ԫ�� */

	/* ָ�����飬��άָ�� */
	cout << typeid(&A).name() << endl;
	cout << &A + 1 << endl;  /* +1 ָ���������һ��Ԫ�أ�����ָ���Ƕ�ά������׵�ַ�������һ�������ڶ�ά�����ܳ��ȵľ��롣���� int A[3][5]����һ������ sizeof(int) * 5 */

	int B[3][5] = { 0 };
	cout << typeid(B).name() << endl;
	cout << typeid(&B).name() << endl;
	cout << B << endl;
	cout << B + 1 << endl;
	cout << &B + 1 << endl;
}
