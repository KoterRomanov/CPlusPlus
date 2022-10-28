#pragma once

#include "define.h"

/* c/c++ ��׼��������Լ�� */
void __stdcall test_stdcall(int a, int b)
{
    printf("a = %d, b = %d\n", a, b);
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


void function_call()
{
    test_stdcall(1, 2);
    test_cdecl(1, 2);
    test_fast(1, 2);

    int local = 0;
    int remote = 0;
    //test_stdcall(local++, ++remote);

    /* ������룺1, 1*/
    //test_stdcall(local++, ++local);

    /* ������룺0��0 */ /* ���ü���������ѹջ������� */
    //test_stdcall(local++, local++);

    /* ������룺2��2 */ /* ǰ�ü������������㣬��ѹջ */
    test_stdcall(++local, ++local);
}