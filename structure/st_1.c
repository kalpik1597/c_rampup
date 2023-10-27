#include<stdio.h>

struct st_1{
    int i;
    char ch[5];
    float f;
};

void main(){
    struct st_1 st_1_var_1;
    st_1_var_1.i = 10;
    st_1_var_1.ch[0] = 'k';
    st_1_var_1.f = 25.5;
    printf("st_1_var_1.i: %d\n",st_1_var_1.i);
    printf("st_1_var_1.ch[0]: %c\n",st_1_var_1.ch[0]);
    printf("st_1_var_1.f: %f\n",st_1_var_1.f);
    
}