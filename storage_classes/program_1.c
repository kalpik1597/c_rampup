#include<stdio.h>

int int_outside_main;
void function_in_another_file();

int main() {

    printf("==== program_start ====\n");

    int int_in_main;
    static int static_int_in_main;
    printf("int_in_main = %d\n",int_in_main);
    printf("int_outside_main = %d\n",int_outside_main);
    printf("static_int_in_main = %d\n",static_int_in_main);
    function_in_another_file();
    extern int int_in_another_file;
    printf("extern_int_from_another_file = %d\n",int_in_another_file);
    //extern int int_in_another_file_in_fuction;
    //printf("int_in_another_file = %d\n",int_in_another_file_in_fuction);

    printf("==== program_end ====\n");
    return 0;
}
