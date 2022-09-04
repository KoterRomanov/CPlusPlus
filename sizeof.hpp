#pragma once
/**
 * @brief   对 C++ sizeof 关键字的练习
 * @author  koterromanov
 * @date    2022-09-04
 */
#include "define.h"

namespace SIZEOF_NAMESPACE
{
	class Local
	{

	};

#pragma pack(push, 4)
	class Remote
	{
	private:

		int m_data;
		char m_reset;
	};
#pragma pack(pop)

#pragma pack(1)
	class Abstract
	{
	public:

		virtual void interface() {}
	};
#pragma pack()


	void func_sizeof()
	{

		// 不允许有长度为 0 的数据结构，即使类没有任何的数据成员，长度也是 1
		cout << sizeof(Local) << endl;

		// 涉及到字节对齐，长度不是简单的 sizeof(int) + sizeof(char)
		cout << sizeof(Remote) << endl;

		// 存在虚函数的类，会有一个保存虚函数表的指针，32位系统长度是4，64位操作系统长度是8
		cout << sizeof(Abstract) << endl;

		// 64位操作系统指针长度是8，32位操作系统指针长度是4
		cout << sizeof(double*) << endl;


		// sizeof 计算的是数组所有元素的长度
		int _data_arry[10] = { 0 };
		cout << sizeof(_data_arry) << endl;

		// sizeof 的两种写法
		int tmp = 100;
		cout << sizeof(tmp) << endl;
		cout << sizeof tmp << endl;
	}

}