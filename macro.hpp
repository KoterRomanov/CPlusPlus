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

// #����ʾ����Ӧ�����ַ��������൱���ں�������߸�����һ��˫����ʹ�����ַ���
// ##�����������궨���еı�ʶ��ƴ����һ���γ�һ���µı�ʶ����(����õĲ��������Ǳ�ʶ����
//	   ���������궨���е��ַ���ƴ����һ���γ�һ���µ��ַ�����������õĲ����������ַ������ַ������������У�


// ����ת�����ַ���
#define Num2Str(a) cout << (#a) << endl;

// ��ʶ��ƴ�ӣ�ƴ�ӳ�һ������
#define Private(a) cout << g_##a << endl;

// �ַ���ƴ�ӣ�ƴ�ӳ�һ���ַ���
#define PrivateString(b) cout << "g_"##b << endl;

int g_remote = 100;

void function_macro()
{
	cout << "100MB = " << _REMOTE << endl;

	COMPARE(1, 2);

	Print(1, 2);

	Num2Str(11.000);

	Private(remote);

	PrivateString("remote");

	// ��α����ǳ����ַ���
	//string subStr = "remote";
	//PrivateString(subStr);

	//const char* subStr = "remote";
	//PrivateString(subStr);

}