#pragma once
/**
 * @brief   对 C++ 枚举的练习
 * @author  koterromanov
 * @date    2022-09-19
 */
#include "define.h"

/* 方式1：声明一个结构体 */
struct _MY_DATA_METHOD_1 {
	int _member;
};

/* 方式2：定义结构体时声明结构体变量，示例只声明了一个结构体变量，其实可以声明多个结构体变量。
 *		  如果不声明变量，就和方式1相同。 这种是方式1的演进版使用
 */
struct _MY_DATA_METHOD_2 {
	int _member;
}my_data_2;

/* 方式3： 声明结构体时使用 typedef 关键字取了一个别名，定义结构体变量时可以使用别名 */
typedef struct _MY_DATA_METHOD_3 {
	int _member;
}METHOD_3;

/* 方式4：匿名结构体，结构体没有名称，所以在定义结构体时就要声明结构体变量，
 *		  在其他的地方就没办法在声明匿名结构体的变量了。
 */
struct {
	int _member;
}my_data_4;


void function_struct()
{
	/* 方式1：声明（使用） */
	struct _MY_DATA_METHOD_1 my_data_1;
	my_data_1._member = 100;
	cout << my_data_1._member << endl;

	/* 方式2：声明（使用） */
	my_data_2._member = 100;
	cout << my_data_2._member << endl;

	/* 方式3：声明（使用） */
	METHOD_3 my_data_3;
	my_data_3._member = 100;
	cout << my_data_3._member << endl;

	struct _MY_DATA_METHOD_3 my_data_3_1;
	my_data_3_1._member = 100;
	cout << my_data_3_1._member << endl;

	/* 方式4：声明（使用） */
	my_data_4._member = 100;
	cout << my_data_4._member << endl;
}