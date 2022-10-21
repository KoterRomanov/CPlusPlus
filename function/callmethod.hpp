#pragma once

#include <iostream>

/* c/c++ 标准函数调用约定 */
void __stdcall test_stdcall(int a, int b)
{

}

/* c、c++ 默认函数调用约定 */
void __cdecl test_cdecl(int a, int b)
{

}

void function_call()
{
}