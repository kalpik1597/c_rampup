#include<stdio.h>

int main() {

    printf("==== program_start ====\n");

    goto label_2;
    printf("after goto label_1\n");

    label_1:
        printf("label_1\n");
    label_2:
        printf("label_2\n");
    label_3:
        printf("label_3\n");
        return 0;

    printf("==== program_end ====\n");
    return 0;
}