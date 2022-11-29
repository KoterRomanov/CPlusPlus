#pragma once
// 对象比较

#include "define.h"

namespace OPERATOR
{
	class Student
	{
	public:
		Student(const int age) :m_age(age) { printf("The student age: %d\n", m_age); }
		~Student() {}

		// 方式1：提供自动类型转换实现
		operator int() { return m_age; }

		// 方式2：重载比较运算符
		bool operator==(const Student& obj) { return (m_age == obj.m_age); }

	private:
		int m_age;
	};
}

void funcion_operator_class()
{
	OPERATOR::Student som(100);
	OPERATOR::Student kitty(20);

	if (som == kitty) {
		printf("There are same age!\n");
	}
}
