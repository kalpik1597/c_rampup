#include<stdio.h>

int main(int argc, char **argv) {
    printf("=== program_start ===\n");

    //printf("argc: %d\n",argc);
    int i;
    if(argc!=2){
        printf("Usage: ./len <string>\n");
        return -1;
    }
    for(i=0;argv[1][i];i++);
    printf("Length of %s: %d\n",argv[1],i);

    printf("=== program_end ===\n");
    return 0;
}