#pragma once

#include <iostream>

/* c/c++ ��׼��������Լ�� */
void __stdcall test_stdcall(int a, int b)
{

}

/* c��c++ Ĭ�Ϻ�������Լ�� */
void __cdecl test_cdecl(int a, int b)
{

}

/* _fastcallͨ���涨��ǰ�����������ɸ��������ɼĴ�������, �ٶȱȶ�ջ�����ٶȿ� */
void __fastcall test_fast(int a, int b)
{

}

/* thiscall ������c++��Ա������ */
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