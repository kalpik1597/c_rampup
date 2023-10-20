#include<stdio.h>

int main() {

    //ctrl+k and ctrl+x to remove trailing whitespaces from the file
    printf("==== program_start ====\n");

    //arrays initialization
    int int_arr_1[] = {7,5,9,6,8,4,3,1,2,0};
    char char_arr_1[] = {'c','h','a','r'};
    char string_1[] = {"char"};

    //sizeof arrays
    //printf("sizeof int_arr_1: %lu\n",sizeof(int_arr_1));
    //printf("sizeof char_arr_1: %lu\n",sizeof(char_arr_1));
    //printf("sizeof string_1: %lu\n",sizeof(string_1));

    //print original int_arr_1
    printf("original int_arr_1[]: ");
    for(int i=0; i<(sizeof(int_arr_1)/sizeof(int)); i++) {
        printf("%d ", int_arr_1[i]);
    }
    printf("\n");

    //sort int_arr_1
    for(int i=0; i<(sizeof(int_arr_1)/sizeof(int)); i++) {
        for(int j=0; j<((sizeof(int_arr_1)/sizeof(int))-i); j++) {
            if(int_arr_1[j]>int_arr_1[j+1]) {
                int_arr_1[j] = (int_arr_1[j] + int_arr_1[j+1]) - (int_arr_1[j+1] = int_arr_1[j]);
            }
        }
    }

    //print int_arr_1 after sort
    printf("ascending sorted int_arr_1[]: ");
    for(int i=0; i<(sizeof(int_arr_1)/sizeof(int)); i++) {
        printf("%d ", int_arr_1[i]);
    }
    printf("\n");

    printf("==== program_end ====\n");
    return 0;
}