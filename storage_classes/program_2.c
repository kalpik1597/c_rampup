#include<stdio.h>

int int_in_another_file = 108;
int int_in_another_file_two = 111;
static int static_int_in_another_file = -110;

void function_in_another_file() {

    int int_in_another_file_in_fuction;
    printf("int_in_another_file = %d\n",int_in_another_file);
    printf("int_in_another_file_in_fuction = %d\n",int_in_another_file_in_fuction);

}