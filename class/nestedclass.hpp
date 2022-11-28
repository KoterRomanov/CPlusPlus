#pragma once

#include "define.h"
#include <list>

namespace NESTED_CLASS {

	// 嵌套类
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

			// 局部类的成员函数必须定义在类体，因为无法在类体之外，局部函数之内完成定义
			void print() {

				printf("%d", global_nested); // 局部类的成员函数可以访问全局变量
				printf("%d", global_static_nested); // 局部类成员函数可以访问全局静态变量
				printf("%s", local_name.c_str()); // 局部类可以访问函数内的静态变量
			}

		private:
			//static std::string m_local_name;   // 编译报错，局部类不允许定义静态变量，无法初始化
		};
	}
}

void function_nestedclass()
{

}
