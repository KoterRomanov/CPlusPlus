#pragma once
/**
 * @brief   �� C++ ���������ϰ
 * @author  koterromanov
 * @date    2022-09-23
 */

union un
{
	char c;
	int i;
	char b;
	char a;
};

union un_2
{
	char c;
	int i;
}a, b;

union
{
	char c;
	int i;
}d, e;

typedef union un_4
{
	char c;
	int i;
}un_4_;

void function_union()
{
	cout << sizeof(un) << endl;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;

	cout << sizeof(d) << endl;
	cout << sizeof(e) << endl;

	cout << sizeof(un_4_) << endl;

	/* �������ʼ��: ��ʼ����һ����Ա */
	un dd = { 100 };
	cout << dd.a << endl;

}