#pragma once
/**
 * @brief   �� C++ sizeof �ؼ��ֵ���ϰ
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

		// �������г���Ϊ 0 �����ݽṹ����ʹ��û���κε����ݳ�Ա������Ҳ�� 1
		cout << sizeof(Local) << endl;

		// �漰���ֽڶ��룬���Ȳ��Ǽ򵥵� sizeof(int) + sizeof(char)
		cout << sizeof(Remote) << endl;

		// �����麯�����࣬����һ�������麯�����ָ�룬32λϵͳ������4��64λ����ϵͳ������8
		cout << sizeof(Abstract) << endl;

		// 64λ����ϵͳָ�볤����8��32λ����ϵͳָ�볤����4
		cout << sizeof(double*) << endl;


		// sizeof ���������������Ԫ�صĳ���
		int _data_arry[10] = { 0 };
		cout << sizeof(_data_arry) << endl;

		// sizeof ������д��
		int tmp = 100;
		cout << sizeof(tmp) << endl;
		cout << sizeof tmp << endl;
	}

}