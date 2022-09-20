#pragma once
/**
 * @brief   �� C++ ö�ٵ���ϰ
 * @author  koterromanov
 * @date    2022-09-19
 */
#include "define.h"

/* ��ʽ1������һ���ṹ�� */
struct _MY_DATA_METHOD_1 {
	int _member;
};

/* ��ʽ2������ṹ��ʱ�����ṹ�������ʾ��ֻ������һ���ṹ���������ʵ������������ṹ�������
 *		  ����������������ͺͷ�ʽ1��ͬ�� �����Ƿ�ʽ1���ݽ���ʹ��
 */
struct _MY_DATA_METHOD_2 {
	int _member;
}my_data_2;

/* ��ʽ3�� �����ṹ��ʱʹ�� typedef �ؼ���ȡ��һ������������ṹ�����ʱ����ʹ�ñ��� */
typedef struct _MY_DATA_METHOD_3 {
	int _member;
}METHOD_3;

/* ��ʽ4�������ṹ�壬�ṹ��û�����ƣ������ڶ���ṹ��ʱ��Ҫ�����ṹ�������
 *		  �������ĵط���û�취�����������ṹ��ı����ˡ�
 */
struct {
	int _member;
}my_data_4;


void function_struct()
{
	/* ��ʽ1��������ʹ�ã� */
	struct _MY_DATA_METHOD_1 my_data_1;
	my_data_1._member = 100;
	cout << my_data_1._member << endl;

	/* ��ʽ2��������ʹ�ã� */
	my_data_2._member = 100;
	cout << my_data_2._member << endl;

	/* ��ʽ3��������ʹ�ã� */
	METHOD_3 my_data_3;
	my_data_3._member = 100;
	cout << my_data_3._member << endl;

	struct _MY_DATA_METHOD_3 my_data_3_1;
	my_data_3_1._member = 100;
	cout << my_data_3_1._member << endl;

	/* ��ʽ4��������ʹ�ã� */
	my_data_4._member = 100;
	cout << my_data_4._member << endl;
}