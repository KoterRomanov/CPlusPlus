#pragma once
/**
 * @brief   对 C++ 名字空间的练习
 * @author  koterromanov
 * @date    2022-09-10
 * @brief	1、一个名字空间可以在多个头文件、源文件中实现
 *			2、名字空间内可以定义类型、函数、变量，但名字空间不能定义在类和函数内部
 *			3、一个名字空间中可以自由地访问另外一个名字空间中的内容，因为名字空间并没有保护等级的限制
 *			4、使用 usding std::cin 的方式单独引用需要使用的名字空间内容会更好，避免引用整个名字空间带来冲突
 *			5、名字空间内部还可以定义另外一个名字，这样就形成了名字空间的嵌套
 *			6、可以使用 namespace [别名] = [名字空间名称] 的方式给名字空间起别名
 *			7、匿名名字空间。同一个源文件中多个匿名名字空间会被合并成一个匿名名字空间，匿名名字空间作用与 static 作用相同，用于定义文件内使用的变量，解决符号重定义问题
 */
#include "define.h"

namespace _TEST
{
	int g_local = 999;
	void function_namespacec()
	{
		printf("Usage namespace\n");
	}

	namespace _SUB_TEST
	{

		void function_sub_namespace()
		{
			printf("Usage namespace\n");
		}
	}
}

