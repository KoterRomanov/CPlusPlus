#pragma once
/**
 * @brief   对 C++ 枚举的练习
 * @author  koterromanov
 * @date    2022-09-19
 */

#include "define.h"

enum WeekDay {

	Sun,
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat
};

enum DrinkType {

	Water,
	Oringejuce,
	Coffe = 100,
	Wine
};

void function_enum()
{
	cout << Sun << endl;
	cout << Sat << endl;

	/* 定义枚举变量，枚举变量大小 */
	WeekDay day;
	cout << "sizeof(WeekDay) = " << sizeof(day) << endl;

	/* 枚举变量赋值 */
	day = Wed;
	cout << "Now day = " << day << endl;

	/* 枚举指定值 */
	cout << Water << endl;
	cout << Coffe << endl;
	cout << Wine << endl;
}