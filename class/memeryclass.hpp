#pragma once
// 类对象的内存布局

// 空类的大小 = 1字节
namespace MEMERY_CLASS
{
	class Empty
	{};

	class OneByte
	{
		char tmp;
	};

	class DerivedClass : public Empty
	{
		virtual void show();
	};

	class Local
	{
	public:

		int m_a;
		int m_b;
	};
}

// 全局变量：分配在栈区
MEMERY_CLASS::Local g_local;

// 全局变量：分配在堆区
MEMERY_CLASS::Local* g_plocal = new MEMERY_CLASS::Local();

#pragma warning(disable : 4700)

void function_memery_class()
{
	printf("The empty object size: %d\n", sizeof(MEMERY_CLASS::Empty));
	printf("The OneByte object size: %d\n", sizeof(MEMERY_CLASS::OneByte));
	printf("The DerivedClass object size: %d\n", sizeof(MEMERY_CLASS::DerivedClass));

	printf("The g_local.m_a = %d, g_local.m_b = %d\n", g_local.m_a, g_local.m_b);
	printf("The g_plocal.m_a = %d, g_plocal.m_b = %d\n", g_plocal->m_a, g_plocal->m_b);


	MEMERY_CLASS::Local local;
	printf("The local.m_a = %d, local.m_b = %d\n", local.m_a, local.m_b);

	MEMERY_CLASS::Local* p_local = new MEMERY_CLASS::Local;
	printf("The p_local.m_a = %d, p_local.m_b = %d\n", p_local->m_a, p_local->m_b);
}
