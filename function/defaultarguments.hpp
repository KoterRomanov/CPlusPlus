#pragma once

#include "define.h"
/*
 * 1. 函数声明时指定参数的默认值, 定义时添加注释说明默认值是什么 
 * 2. 任何一个不带默认值的参数都要出现在所有带默认值的参数的左边（避免函数调用时参数匹配的二义性）
 * 3. 函数参数的默认值需要注意不能造成函数重载的二义性（例如 void show(int x = 10, double y = 9.9);  void show(int x);  show(1);说调用哪个函数无法确定的二义性）
 *
 */

void function_default_arguments(int value = 100)
{
	printf("The default value: %d\n", value);
}