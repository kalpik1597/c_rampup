#include<stdio.h>

int main() {
    static int i=0;
    printf("==== program_start ====  ");
    printf("i: %d\n",i++);
    if(i<=5)
        main();

    printf("==== program_end ====\n");
    return 0;
}

