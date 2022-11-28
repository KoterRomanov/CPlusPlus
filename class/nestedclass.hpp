#pragma once

#include "define.h"
#include <list>

namespace NESTED_CLASS {

	// Ƕ����
	class Teacher
	{
	public:
		Teacher() {}
		~Teacher() {}

		class Students {

		public:
			Students() {}
			~Students() {}

		private:

			std::string m_name;
		};

	private:

		std::string m_name;

		std::list<Students*> m_stu_list;
	};

	int global_nested = 100;
	static int global_static_nested = 100;
	void function_test() {

		int local_var = 100;
		static std::string local_name;
		class Local {

		public:
			Local() { 
				
				print();
			}

			~Local() {
			
			}

			// �ֲ���ĳ�Ա�������붨�������壬��Ϊ�޷�������֮�⣬�ֲ�����֮����ɶ���
			void print() {

				printf("%d", global_nested); // �ֲ���ĳ�Ա�������Է���ȫ�ֱ���
				printf("%d", global_static_nested); // �ֲ����Ա�������Է���ȫ�־�̬����
				printf("%s", local_name.c_str()); // �ֲ�����Է��ʺ����ڵľ�̬����
			}

		private:
			//static std::string m_local_name;   // ���뱨���ֲ��಻�����徲̬�������޷���ʼ��
		};
	}
}

void function_nestedclass()
{

}
