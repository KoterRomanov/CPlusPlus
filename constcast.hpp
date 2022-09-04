#pragma once
/**
 * @brief   对 C++ const_cast 关键字的练习
 * @author  koterromanov
 * @date    2022-09-04
 */

#pragma warning(disable : 4819 4477 4313)

void func_const_cast()
{
	const int Local = 100;
	const int& rfLocal = Local;
	const int* pLocal = &Local;

	//*cLocal = 300; // 报错，不允许通过常指针修改变量的值

	// 移除常指针的 const 属性，使可以通过指针修改变量值
	int* npLocal = const_cast<int*>(&Local);
	*npLocal = 200;
	//pri
	// ntf("cLocal = %d\n", npLocal);
	//printf("cLocal = %d\n", pLocal);
	printf("cLocal = %d\n", *npLocal);

	int& nrLocal = const_cast<int&>(Local);
	nrLocal = 300;
	printf("nrLocal = %d\n", nrLocal);
	printf("Local = %d\n", Local);	// Local 始终输出 100, 编译器优化的原因将 Local 替换成了文字常量100,所以 printf 输出的是 100,实际 Local变量的值已经修改成300了


	printf("nrLocal = 0x%x\n", &nrLocal);
	printf("npLocal = 0x%x\n", npLocal);
	printf("Local = 0x%x\n", &Local);
}