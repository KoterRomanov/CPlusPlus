#pragma once

#include "define.h"

/* c/c++ 标准函数调用约定 */
void __stdcall test_stdcall(int a, int b)
{
    printf("a = %d, b = %d\n", a, b);
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


void function_call()
{
    test_stdcall(1, 2);
    test_cdecl(1, 2);
    test_fast(1, 2);

    int local = 0;
    int remote = 0;
    //test_stdcall(local++, ++remote);

    /* 结果传入：1, 1*/
    //test_stdcall(local++, ++local);

    /* 结果传入：0，0 */ /* 后置加运算是先压栈，后计算 */
    //test_stdcall(local++, local++);

    /* 结果传入：2，2 */ /* 前置加运算是先运算，后压栈 */
    test_stdcall(++local, ++local);
}