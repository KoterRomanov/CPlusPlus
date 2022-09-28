#pragma once
/**
 * @brief   �� C++ ö�ٵ���ϰ
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

	/* ����ö�ٱ�����ö�ٱ�����С */
	WeekDay day;
	cout << "sizeof(WeekDay) = " << sizeof(day) << endl;

	/* ö�ٱ�����ֵ */
	day = Wed;
	cout << "Now day = " << day << endl;

	/* ö��ָ��ֵ */
	cout << Water << endl;
	cout << Coffe << endl;
	cout << Wine << endl;
}