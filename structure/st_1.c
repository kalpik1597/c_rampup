#include<stdio.h>

struct st_2
{
    char ch[20];
};


struct st_1{
    int i;
    char ch[5];
    float f;
    struct st_2 a;
};

void main(){
    struct st_1 st_1_var_1;
    st_1_var_1.i = 10;
    st_1_var_1.ch[0] = 'k';
    st_1_var_1.f = 25.5;
    st_1_var_1.a.ch[0] = 'p';
    printf("st_1_var_1.i: %d\n",st_1_var_1.i);
    printf("st_1_var_1.ch[0]: %c\n",st_1_var_1.ch[0]);
    printf("st_1_var_1.f: %f\n",st_1_var_1.f);
    printf("%c from st_2\n",st_1_var_1.a.ch[0]);
    
}