#include<stdio.h>

int int_outside_main;
void function_in_another_file();
void function_in_same_file();
extern int int_in_another_file_two;

int main() {

    printf("==== program_start ====\n");

    int int_in_main;
    static int static_int_in_main;
    printf("int_in_main = %d\n",int_in_main);
    printf("int_outside_main = %d\n",int_outside_main);
    printf("static_int_in_main = %d\n",static_int_in_main);
    function_in_another_file();
    extern int int_in_another_file;
    int_in_another_file = -55;
    printf("extern_int_from_another_file = %d\n",int_in_another_file);
    function_in_same_file();

    printf("==== program_end ====\n");
    return 0;
}

void function_in_same_file(){
    register int register_int;
    printf("int_from_another_file_two = %d\n",int_in_another_file_two);
    printf("register_int = %d\n",register_int);
}