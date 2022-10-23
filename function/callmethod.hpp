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

/* _fastcall通常规定将前两个（或若干个）参数由寄存器传递, 速度比堆栈传递速度快 */
void __fastcall test_fast(int a, int b)
{

}

/* thiscall 仅用于c++成员函数中 */
/*
void __thiscall CLASS::test_this(int a, int b)
{
    
}
*/

void function_call()
{
    test_stdcall(1, 2);
    test_cdecl(1, 2);
    test_fast(1, 2);
}