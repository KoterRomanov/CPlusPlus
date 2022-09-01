#pragma once
/**
 * @brief   对 C++ const关键字的练习
 * @author  koterromanov
 * @date    2022-08-23
 */
void func_const()
{
	const int Remote = 100;
	int const Local = 100;

	// Remote = 200; （错误：不允许修改常量）
	
	// const & int p3 （错误：const 和被修饰类型之间不能有其他标识符。 ps：& 符不是类型）
}