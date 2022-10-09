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

	/* static_cast 用于强制类型转换*/
	int type = 100;
	unsigned char ch_type = static_cast<unsigned char>(type);

	/* static_cast 用于存在继承关系的类类型之间的转换 */

	/* dynamic_cast */

	/* reinterpret_cast */
}