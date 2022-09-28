#pragma once
/**
 * @brief   �� C++ explicit �ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-09-12
 */

// explicit����ֹ��ʽ������ĵ������Ĺ��캯�����޲�����������Ĺ��캯��������ʽ���ã��ӹؼ��� explicit û�����壩
// 1����ֹ��ʽ���ÿ������캯��
// 2����ֹ�����֮�����ʽת�����������Ͷ����챾�����

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

		// �ɹ��������˵��������캯��
		show_remote_abstract(a);
		show_remote_abstract(b);
		show_remote_abstract(300);

		// ������ֹ��ʽ���õ��������캯��
		//LocalAbstract la = 100;
		//LocalAbstract lb = la;
		//show_local_abstrct(300);
	}
}