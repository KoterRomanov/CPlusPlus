#pragma once
// ����Ƚ�

#include "define.h"

namespace OPERATOR
{
	class Student
	{
	public:
		Student(const int age) :m_age(age) { printf("The student age: %d\n", m_age); }
		~Student() {}

		// ��ʽ1���ṩ�Զ�����ת��ʵ��
		operator int() { return m_age; }

		// ��ʽ2�����رȽ������
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
