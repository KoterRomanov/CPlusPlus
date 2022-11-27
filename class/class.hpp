#pragma once

#include "define.h"

// c++ 不支持在初始化列表中，完成为对象的数组成员进行初始化

class A
{
public:
	A(const char* name) :m_name(name) { printf("call char* construct\n"); }
	A(const std::string name) :m_name(name) { printf("call std::string construct\n"); }


private:
	std::string m_name;
};

class B
{
public:
	B(const char *name):m_stu_a(name) {}
	B(const std::string name):m_stu_a(name) {}

private:
	A m_stu_a;
};


void function_class()
{
	B b(std::string("hello"));
}
