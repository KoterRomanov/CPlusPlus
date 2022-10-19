#pragma once
/**
 * @brief   对 C++ 声明、定义的练习
 * @author  koterromanov
 * @date    2022-10-15
 */
#include "define.h"

/* 基础数据类型既不需要定义也不需要声明，加了 extern 关键字除外，加了 extern 关键字是为了跨文件使用全局变量 */
/* 构造数据类型（结构、联合、类）需要定义，使用需要提前声明 */
/* 类定义中，所有数据成员的说明语句都是声明，不是定义（所以不能在类体内直接为数据成员赋值） */
/* 类被声明之后，可以用来声明标识符，但不能用来定义对象 */

int g_data; /* 变量定义，分配了内存，默认初始化为 0 */

extern int g_remote; /* 变量声明，没有分配内存，是对已有变量的引用，允许出现不同的源文件内 */

extern int g_local = 0; /* 变量定义，分配了内存，显式初始化为 0 */

/* 函数声明 */
void test_function();

void function_declare()
{
	printf("fucntion declare\n");
}

void test_funcion()
{
	printf("This is a test function!\n");
}