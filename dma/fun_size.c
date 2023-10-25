#include<stdio.h>

void fun_1();
void fun_2();

int main(int argc, char **argv) {
    printf("=== program_start ===\n");

    fun_1();
    fun_2();

    int a = fun_2 - fun_1;
    printf("fun_1 size: %d\n", a);

    printf("=== program_end ===\n");
    return 0;
}

void fun_1(){
    printf("this is fun_1\n");
    printf("inside fun_1 (1)\n");
    printf("inside fun_1 (2)\n");
    printf("inside fun_1 (3)\n");
}

void fun_2(){
    printf("this is fun_2\n");   
}