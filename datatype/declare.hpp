#pragma once
/**
 * @brief   �� C++ �������������ϰ
 * @author  koterromanov
 * @date    2022-10-15
 */
#include "define.h"

/* �����������ͼȲ���Ҫ����Ҳ����Ҫ���������� extern �ؼ��ֳ��⣬���� extern �ؼ�����Ϊ�˿��ļ�ʹ��ȫ�ֱ��� */
/* �����������ͣ��ṹ�����ϡ��ࣩ��Ҫ���壬ʹ����Ҫ��ǰ���� */
/* �ඨ���У��������ݳ�Ա��˵����䶼�����������Ƕ��壨���Բ�����������ֱ��Ϊ���ݳ�Ա��ֵ�� */
/* �౻����֮�󣬿�������������ʶ��������������������� */

int g_data; /* �������壬�������ڴ棬Ĭ�ϳ�ʼ��Ϊ 0 */

extern int g_remote; /* ����������û�з����ڴ棬�Ƕ����б��������ã�������ֲ�ͬ��Դ�ļ��� */

extern int g_local = 0; /* �������壬�������ڴ棬��ʽ��ʼ��Ϊ 0 */

/* �������� */
void test_function();

void function_declare()
{
	printf("fucntion declare\n");
}

void test_funcion()
{
	printf("This is a test function!\n");
}