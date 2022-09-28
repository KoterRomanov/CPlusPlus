#pragma once
/**
 * @brief   对 C++ mutable 关键字的练习
 * @author  koterromanov
 * @date    2022-09-04
 */

class Remote
{
public:
	Remote():m_counter(0) {}
	~Remote() {}

public:

	// 常函数修改非常变量
	void counter() const {

		m_counter++;
		printf("count %d\n", m_counter);
	}

private:

	mutable int m_counter;
};

void func_mutable()
{
	// PS: 通过常对象调用常函数，常函数修改 mutable 修饰的普通成员变量
	// mutable 只能用于非静态、非常量的数据成员
	const Remote obj;
	obj.counter();
}
