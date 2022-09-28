#pragma once
/**
 * @brief   对 C++ 链式操作的练习
 * @author  koterromanov
 * @date    2022-09-08
 */

void func_link_operate()
{
	// 链式赋值操作满足右结合律
	int a, b, c, d;
	a = b = c = d = 100;
	a = (b = (c = (d = 100)));

	// 链式输出操作满足左结合率
	a = 100, b = 200, c = 300, d = 400;
	cout << a << b << c << d << endl;
	((((cout << a) << b) << c) << d) << endl;

	// 思考
	// 操作符重载函数一定不能返回 void 类型
	// 重载操作符必须返回引用，否则链式操作无法完成
}