#pragma once

#include "define.h"
/*
 * 1. ��������ʱָ��������Ĭ��ֵ, ����ʱ���ע��˵��Ĭ��ֵ��ʲô 
 * 2. �κ�һ������Ĭ��ֵ�Ĳ�����Ҫ���������д�Ĭ��ֵ�Ĳ�������ߣ����⺯������ʱ����ƥ��Ķ����ԣ�
 * 3. ����������Ĭ��ֵ��Ҫע�ⲻ����ɺ������صĶ����ԣ����� void show(int x = 10, double y = 9.9);  void show(int x);  show(1);˵�����ĸ������޷�ȷ���Ķ����ԣ�
 *
 */

void function_default_arguments(int value = 100)
{
	printf("The default value: %d\n", value);
}