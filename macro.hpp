#pragma once
/**
 * @brief   �� C++ �����ϰ
 * @author  koterromanov
 * @date    2022-09-11
 */
#include "define.h"

#define _REMOTE  (100 * 1024 * 8) // 100MB

// �궨��ĺ���
#define COMPARE(a, b)	if (a > b) \
		printf("The first one is bigger\n"); \
	else \
		printf("The first one is not bigger\n");


// #a �Ǳ�����  a##b ��ƴ�ӵ��ַ���
#define Print(a, b)	cout << #a#b" is " << a##b << endl;

void function_macro()
{
	cout << "100MB = " << _REMOTE << endl;

	COMPARE(1, 2);

	Print(1, 2);
}