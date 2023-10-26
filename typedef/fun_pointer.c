#include<stdio.h>

//can not be used in other file
typedef int (*fp)(int, int);

int sum(int i, int j){
    return i+j;
}

void main(){
    fp p;
    p=sum;
    printf("%d\n",p(10,20));
}