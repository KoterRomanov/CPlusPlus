#pragma once
/**
 * @brief   �� C++ volatile �ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-09-04
 */
#include "define.h"

/*
 * @brief	�ں������ڣ�������ζ�ȡ����ֵ֮������û�жԱ�����ֵ�����޸�
 *			�����ñ�����Ȼ�п��ܱ������������жϷ������������̣߳����޸�
 *			��ô�������ͻ�Դ�������Ż������»�ӼĴ����ж�ȡ����ֵ���ͻ���ֱ�
 *			�޸��˵ı�����ֵ���ܼ�ʱ��ӳ�����⡣
 * 
 *			volatile �ؼ������εı���ÿ�ζ��Ǵ��ڴ��ж�ȡ������ֵ�������ǴӼĴ�����
 *			��ȡ
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

