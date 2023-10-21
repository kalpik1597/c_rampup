#include<stdio.h>

int num = 20,i;

void print_binary(int *p){
    printf("num in binary: ");
    for(i=31;i>=0;i--){
        if(*p&1<<i)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int invert_bits(int *p){
    printf("Inverting bits...\n");
    for(i=31;i>=0;i--)
        *p = *p^1<<i;
    return *p;
}

int main() {
    printf("==== program_start ====\n");

    printf("num in decimal: %u\n",num);
    print_binary(&num);
    num = invert_bits(&num);
    printf("num in decimal: %u\n",num);
    print_binary(&num);

    printf("==== program_end ====\n");
    return 0;
}