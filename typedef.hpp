#pragma once
/**
 * @brief   �� C++ typedef �ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-09-04
 */

#include "define.h"
#include <assert.h>

// ��ͨ���ͱ���
typedef int INT;
typedef int* PINT;

// ����
typedef int INT_ARRY[10];

// ����ָ��
typedef void (*P_FUNC)(int, int&);

void function(int input, int& output)
{
	assert(intput);
	assert(output);
}

void func_typedef()
{
	// ��ͨ�������͹ؼ��ֱ���
	INT _data = 100;
	cout << _data << endl;

	PINT _pdata = &_data;
	cout << *_pdata << endl;

	// �������
	INT_ARRY _arry = { 0 };

	// ����ָ��
	P_FUNC pFunc = function;
}