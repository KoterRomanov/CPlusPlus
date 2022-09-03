#pragma once
/**
 * @brief   对 C++ const关键字的练习
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

	// 效果一样
	const int Remote = 100;
	int const Local = 100;
	int tmpData = 300;
	int tmpLocal = 300;

	// Remote = 200; （错误：不允许修改常量）
	
	// const & int p3 （错误：const 和被修饰类型之间不能有其他标识符。 ps：& 符不是类型）

	
	// 常指针：指针指向一个常量
	// const 修饰 int ，表示指针指向的是一个常量，不可以通过指针修改变量的值
	int const *pConstRemote = &tmpData;
	//*pConstRemote = 200; // 报错，不允许通过指针修改变量的值

	// 没有 const 修饰的指针变量，可以通过指针修改变量的值
	int* pRemote = &tmpData;
	*pRemote = 200;


	// 指针常量：指针是一个常量
	// const 修饰 int*，表示指针是一个常量，不允许修改指针的指向
	int* const pConstLocal = &tmpData;
	//pConstLocal = &Local; // 报错，不允许修改指针的指向

	// 没有 const 修改的指针，可以改变指针的指向
	int* pLocal = &tmpData;
	pLocal = &tmpLocal;


	// 常对象：只能调用 const 修饰的常函数
	const RemoteAbstract obj;
	RemoteAbstract const obj_2;
	obj.print();
	obj_2.print();
	//obj.debug(); // 报错：只能调用常函数

	// 普通对象指定调用常函数
	RemoteAbstract obj_3;
	((const RemoteAbstract&)obj_3).print(); // 通过创建临时常引用去调用常函数
	((const RemoteAbstract*)&obj_3)->print();  // 通过创建临时常指针去调用常函数


}