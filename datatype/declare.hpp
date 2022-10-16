#pragma once
/**
 * @brief   对 C++ 声明、定义的练习
 * @author  koterromanov
 * @date    2022-10-15
 */
#include "define.h"

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