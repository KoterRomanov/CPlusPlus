#pragma once
// ��̬��Ա
#include "define.h"

// Note:  ��ľ�̬��Աû�г�ʼ������ʹ�ã�ʹ��δ��ʼ���ľ�̬��Ա��δ����Ĵ���
// Note:  �����ͨ��̬��Աһ��Ҫ���������ʼ�����������о�̬��Ա�����������ʼ������ȫ
// Note:  ��ľ�̬��Ա�������ܷ��������ͨ��Ա������Ҳ���ܵ��������ͨ��Ա����

namespace STATIC_MEMBER
{
	class Student
	{
	public:
		Student() {}


	public:

		// ��ͨ��̬��Ա
		static int m_weight;

		// ��ʽ1����̬������Ա�������ʼ��
		static const std::string m_name;

		// ��ʽ2����̬������Ա�����ڳ�ʼ��
		static const int m_age = 20;
	};

	// �������ʼ��������̬��Ա
	const std::string Student::m_name = std::string("Tom");

	// ��ͨ��̬��Ա��ʼ��
	int Student::m_weight = 100;
}

void function_static_member()
{
	STATIC_MEMBER::Student Tom;
	STATIC_MEMBER::Student::m_weight = 100;

	printf("The student name: %s\n", STATIC_MEMBER::Student::m_name.c_str());
}
