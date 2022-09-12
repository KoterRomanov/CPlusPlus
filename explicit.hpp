#pragma once
/**
 * @brief   对 C++ explicit 关键字的练习
 * @author  koterromanov
 * @date    2022-09-12
 */

// explicit：禁止隐式调用类的单参数的构造函数（无参数、多参数的构造函数总是显式调用，加关键字 explicit 没有意义）
// 1、禁止隐式调用拷贝构造函数
// 2、禁止类对象之间的隐式转换（其他类型对象构造本类对象）

namespace _EXPLICIT
{
	class RemoteAbstract
	{
	public:
		RemoteAbstract() { m_num = 0; }
		RemoteAbstract(int num) { m_num = num; }
		RemoteAbstract(const RemoteAbstract& obj) { m_num = obj.m_num; }

	public:
		int m_num;
	};

	class LocalAbstract
	{
	public:
		LocalAbstract() { m_num = 0; }
		explicit LocalAbstract(int num) { m_num = num; }
		explicit LocalAbstract(const LocalAbstract& obj) { m_num = obj.m_num; }

	public:
		int m_num;
	};

	void show_remote_abstract(const RemoteAbstract& obj)
	{
		cout << obj.m_num << endl;
	}

	void show_local_abstrct(const LocalAbstract& obj)
	{
		cout << obj.m_num << endl;
	}

	void function_explicit()
	{
		RemoteAbstract a = 100;
		RemoteAbstract b = a;

		// 成功：调用了单参数构造函数
		show_remote_abstract(a);
		show_remote_abstract(b);
		show_remote_abstract(300);

		// 报错：禁止隐式调用单参数构造函数
		//LocalAbstract la = 100;
		//LocalAbstract lb = la;
		//show_local_abstrct(300);
	}
}