#pragma once
/**
 * @brief   �� C++ ��������ת������ϰ
 * @author  koterromanov
 * @date    2022-09-15
 */


void function_type_convert()
{
	/* const_cast �����ָ�� & �����õ� const ���� */
	const unsigned char cpbuffer[] = {"hello"};
	unsigned char* pbuffer = const_cast<unsigned char*>(cpbuffer);

	/* static_cast ����ǿ������ת��*/
	int type = 100;
	unsigned char ch_type = static_cast<unsigned char>(type);

	/* static_cast ���ڴ��ڼ̳й�ϵ��������֮���ת�� */

	/* dynamic_cast */

	/* reinterpret_cast */
}