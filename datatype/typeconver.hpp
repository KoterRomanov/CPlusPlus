#pragma once
/**
 * @brief   对 C++ 数据类型转换的练习
 * @author  koterromanov
 * @date    2022-09-15
 */


void function_type_convert()
{
	/* const_cast 解除常指针 & 常引用的 const 属性 */
	const unsigned char cpbuffer[] = {"hello"};
	unsigned char* pbuffer = const_cast<unsigned char*>(cpbuffer);

	/* static_cast */

	/* dynamic_cast */

	/* reinterpret_cast */
}