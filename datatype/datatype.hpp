#pragma once
/**
 * @brief   对 C++ 数据类型的练习
 * @author  koterromanov
 * @date    2022-09-15
 */
#include "define.h"

void function_datatype()
{
	bool ret = false;

	if (ret) {
		cout << "Remote" << endl;
	}
	else {
	
		cout << "Local" << endl;
	}

	std::cout.imbue(std::locale("chs"));
}