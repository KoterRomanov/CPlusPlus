#pragma once
/**
 * @brief   �� C++ const�ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-08-23
 */

class RemoteAbstract
{
public:

	RemoteAbstract() { _data = 50; };
	~RemoteAbstract() {};

	void print() { printf("_data = %d\n", _data); };
	void print() const { printf("const _data = %d\n", _data); }

	void debug() { printf("_data = %d\n", _data); };

private:

	int _data;
};



void func_const()
{

	// Ч��һ��
	const int Remote = 100;
	int const Local = 100;
	int tmpData = 300;
	int tmpLocal = 300;

	// Remote = 200; �����󣺲������޸ĳ�����
	
	// const & int p3 ������const �ͱ���������֮�䲻����������ʶ���� ps��& ���������ͣ�

	
	// ��ָ�룺ָ��ָ��һ������
	// const ���� int ����ʾָ��ָ�����һ��������������ͨ��ָ���޸ı�����ֵ
	int const *pConstRemote = &tmpData;
	//*pConstRemote = 200; // ����������ͨ��ָ���޸ı�����ֵ

	// û�� const ���ε�ָ�����������ͨ��ָ���޸ı�����ֵ
	int* pRemote = &tmpData;
	*pRemote = 200;


	// ָ�볣����ָ����һ������
	// const ���� int*����ʾָ����һ���������������޸�ָ���ָ��
	int* const pConstLocal = &tmpData;
	//pConstLocal = &Local; // �����������޸�ָ���ָ��

	// û�� const �޸ĵ�ָ�룬���Ըı�ָ���ָ��
	int* pLocal = &tmpData;
	pLocal = &tmpLocal;


	// ������ֻ�ܵ��� const ���εĳ�����
	const RemoteAbstract obj;
	RemoteAbstract const obj_2;
	obj.print();
	obj_2.print();
	//obj.debug(); // ����ֻ�ܵ��ó�����

	// ��ͨ����ָ�����ó�����
	RemoteAbstract obj_3;
	((const RemoteAbstract&)obj_3).print(); // ͨ��������ʱ������ȥ���ó�����
	((const RemoteAbstract*)&obj_3)->print();  // ͨ��������ʱ��ָ��ȥ���ó�����


}