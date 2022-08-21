#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

// alignas // 作用：指定某一个自定义的数据类型的字节对齐长度，有最小长度限制
struct alignas(4) MYSTRUCT
{
	char member;
	int a;
};

// #pragma pack(push, n) // 作用：把原来的对齐方式设置压栈，并设置新的对齐字节为 n
// 
// 自定义结构体
// 
// #pragma pack(pop)	// 作用：恢复原来压栈的对齐方式
#pragma pack(push, 1)
struct MYSTRUCT_
{
	char member;
	int a;
};
#pragma pack(pop)

// #pragma pack(n)	// 作用：编译器将对以下结构体按照自定义 n 个字节对齐
// 
// 自定义结构体
// 
// #pragma pack()	// 作用：取消自定义字节对齐方式
#pragma pack(1)
struct MYSTRUCT__
{
	char member;
	int a;
};
#pragma pack()


int main(int argc, char** argv)
{
	// MYSTRUCT 的内存占用
	cout << "MYSTRUCT sizeof: " << sizeof(MYSTRUCT) << endl;

	// MYSTRUCT 的字节对齐
	cout << "MYSTRUCT alignof: " << alignof(MYSTRUCT) << endl;

	struct MYSTRUCT myStruct;
	myStruct.member = 'A';
	myStruct.a = 100;

	cout << "MYSTRUCT.member = " << myStruct.member << endl;
	cout << "MYSTRUCT.a = " << myStruct.a << endl;

	// 分割线
	cout << "-----------------------------------------" << endl;

	// MYSTRUCT_ 的内存占用
	cout << "MYSTRUCT_ sizeof: " << sizeof(MYSTRUCT_) << endl;

	// MYSTRUCT_ 的字节对齐
	cout << "MYSTRUCT_ alignof: " << alignof(MYSTRUCT_) << endl;

	struct MYSTRUCT_ myStruct_;
	myStruct_.member = 'B';
	myStruct_.a = 200;

	cout << "MYSTRUCT_.member = " << myStruct_.member << endl;
	cout << "MYSTRUCT_.a = " << myStruct_.a << endl;


	system("pause");
	return 0;
}