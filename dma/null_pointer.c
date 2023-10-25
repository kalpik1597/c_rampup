#include<stdio.h>
#include<stdlib.h>

void main() {
    int *a,*b,*c,*d;

    a = malloc(sizeof(int));
    *a = 10;
    printf("a: %d\n", a);
    printf("*a: %d\n", *a);

    b = malloc(sizeof(int[10]));
    printf("b: %d\n", b);
    printf("*b: %d\n", *b);

    c = malloc(sizeof(int[4]));
    printf("c: %d\n", c);
    printf("*c: %d\n", *c);

    printf("b-a: %d\n", b-a);
    printf("c-b: %d\n", c-b);

    d = malloc(sizeof(int));
    *d = 10;
    printf("d: %d\n", d);
    printf("*d: %d\n", *d);
    d = NULL;
    printf("d: %d\n", d);
    printf("*d: %d\n", *d);

}