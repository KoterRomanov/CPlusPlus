#pragma once
// 静态成员
#include "define.h"

// Note:  类的静态成员没有初始化不能使用，使用未初始化的静态成员会未定义的错误
// Note:  类的普通静态成员一定要在类体外初始化，建议所有静态成员都在类体外初始化更安全
// Note:  类的静态成员函数不能访问类的普通成员变量，也不能调用类的普通成员函数

namespace STATIC_MEMBER
{
	class Student
	{
	public:
		Student() {}


	public:

		// 普通静态成员
		static int m_weight;

		// 方式1：静态常量成员类体外初始化
		static const std::string m_name;

		// 方式2：静态常量成员类体内初始化
		static const int m_age = 20;
	};

	// 类体外初始化常量静态成员
	const std::string Student::m_name = std::string("Tom");

	// 普通静态成员初始化
	int Student::m_weight = 100;
}

void function_static_member()
{
	STATIC_MEMBER::Student Tom;
	STATIC_MEMBER::Student::m_weight = 100;

	printf("The student name: %s\n", STATIC_MEMBER::Student::m_name.c_str());
}
