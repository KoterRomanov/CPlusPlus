#pragma once
/*
 * C ���Բ����� extern "C" ������C ���Ե��� C++ ͷ�ļ�ʱ���׳��ֱ���ʧ�ܣ�
 * ���Բ���Ҫ����ͷ�ļ�
 *
 */

// ���������� C ���ԵĹ淶����link ͷ�ļ��а����ĺ�����
extern "C" {
	#include "link.h"
}

int function_link(int a, int b)
{
	test_link();
	return 100;
}
