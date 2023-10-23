#include<stdio.h>

int fact(int);

int main() {
    printf("=== program_start ===\n");

    int n = 4;
    printf("Factorial of %d: %d\n",n,fact(n));

    printf("=== program_end ===\n");
    return 0;
}

int fact(int n){
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}