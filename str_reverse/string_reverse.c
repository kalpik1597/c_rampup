#include<stdio.h>

int main() {

    printf("==== program_start ====\n");

    //string init
    char string_1[] = {"this is a string"};
    int i,j;

    //string print
    printf("string original print: ");
    for(i=0;string_1[i];i++){
        printf("%c",string_1[i]);
    }
    printf("\n");
    for(i=0; string_1[i]; i++);
    printf("string length: %d\n",i);

    //reverse print
    printf("string after reverse print: ");
    for(;i>=0;i--){
        printf("%c",string_1[i]);
    }
    printf("\n");

    //reverse mem
    printf("string after reverse in mem: ");
    for(i=0,j=(sizeof(string_1)-2);i<j;i++,j--){
        string_1[i] = (string_1[i] + string_1[j]) - (string_1[j] = string_1[i]);
    }
    for(i=0;string_1[i];i++){
        printf("%c",string_1[i]);
    }
    printf("\n");

    printf("==== program_end ====\n");
    return 0;
}