#pragma once
/**
 * @brief   �� C++ ��ʽ��������ϰ
 * @author  koterromanov
 * @date    2022-09-08
 */

void func_link_operate()
{
	// ��ʽ��ֵ���������ҽ����
	int a, b, c, d;
	a = b = c = d = 100;
	a = (b = (c = (d = 100)));

	// ��ʽ�����������������
	a = 100, b = 200, c = 300, d = 400;
	cout << a << b << c << d << endl;
	((((cout << a) << b) << c) << d) << endl;
}