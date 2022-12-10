#pragma once
/* ���� */

#include "define.h"
#include <typeinfo>

void function_array_pointer();

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

	function_array_pointer();
}

void show(int arr[100])
{
	/* �Ϸ�����Ϊ arr ������ָ�룬ָ���������ƫ�� */
	arr++;
	cout << (*arr) << endl;
}

void function_array_pointer()
{
	/*
	 * 1. ��������ָ�볣��, ���ܸı�������ָ�������
	 */
	int arr[100] = { 0, 1, 2, 3, 4 };
	cout << typeid(arr).name() << endl;

	/* �Ƿ� */
	//arr++;

	/* �Ϸ� */
	int* p0 = arr + 1;
	cout << (*p0) << endl;


	/* 
	 * 2. �β��е����鱻����ָ�룬���������� 
	 */
	show(arr);
}
