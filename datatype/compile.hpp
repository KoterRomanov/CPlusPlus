#pragma once

/* 函数可以多次声明 */
void function_test();
void function_test();

/* 函数只能定义一次 */
void function_test() {


    printf("call function test!\n");
}