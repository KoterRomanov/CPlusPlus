#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

// alignas // ���ã�ָ��ĳһ���Զ�����������͵��ֽڶ��볤�ȣ�����С��������
struct alignas(4) MYSTRUCT
{
	char member;
	int a;
};

// #pragma pack(push, n) // ���ã���ԭ���Ķ��뷽ʽ����ѹջ���������µĶ����ֽ�Ϊ n
// 
// �Զ���ṹ��
// 
// #pragma pack(pop)	// ���ã��ָ�ԭ��ѹջ�Ķ��뷽ʽ
#pragma pack(push, 1)
struct MYSTRUCT_
{
	char member;
	int a;
};
#pragma pack(pop)

// #pragma pack(n)	// ���ã��������������½ṹ�尴���Զ��� n ���ֽڶ���
// 
// �Զ���ṹ��
// 
// #pragma pack()	// ���ã�ȡ���Զ����ֽڶ��뷽ʽ
#pragma pack(1)
struct MYSTRUCT__
{
	char member;
	int a;
};
#pragma pack()


int main(int argc, char** argv)
{
	// MYSTRUCT ���ڴ�ռ��
	cout << "MYSTRUCT sizeof: " << sizeof(MYSTRUCT) << endl;

	// MYSTRUCT ���ֽڶ���
	cout << "MYSTRUCT alignof: " << alignof(MYSTRUCT) << endl;

	struct MYSTRUCT myStruct;
	myStruct.member = 'A';
	myStruct.a = 100;

	cout << "MYSTRUCT.member = " << myStruct.member << endl;
	cout << "MYSTRUCT.a = " << myStruct.a << endl;

	// �ָ���
	cout << "-----------------------------------------" << endl;

	// MYSTRUCT_ ���ڴ�ռ��
	cout << "MYSTRUCT_ sizeof: " << sizeof(MYSTRUCT_) << endl;

	// MYSTRUCT_ ���ֽڶ���
	cout << "MYSTRUCT_ alignof: " << alignof(MYSTRUCT_) << endl;

	struct MYSTRUCT_ myStruct_;
	myStruct_.member = 'B';
	myStruct_.a = 200;

	cout << "MYSTRUCT_.member = " << myStruct_.member << endl;
	cout << "MYSTRUCT_.a = " << myStruct_.a << endl;


	system("pause");
	return 0;
}