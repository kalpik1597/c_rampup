// Swap bits of a char like below
// Input --> D7 D6 D5 D4 D3 D2 D1 D0
// Output --> D0 D1 D2 D3 D4 D5 D6 D7 
// 0xA3 --> 8 bit  -->   1  0  1  0  0  0  1  1 --> 1 1 0 0 0 1 0 1 --> 0xC5
//                       D7 D6 D5 D4 D3 D2 D1 D0
 
#include <stdio.h>
 
char func(char a) {
    
}
 
int main() {
 
    char ch = 'a'; //
    //printf("%d\n",ch);
    //printf("%d\n",sizeof(ch));
    for(int i=7;i>=0;i--){
        if((ch>>i)&1)
            printf("1  ");
        else
            printf("0  ");
    }

    printf("\n");
    for(int i=7;i>=4;i--){
        int j = 7-i;
        if(((ch>>i)&1) != ((ch>>j)&1)) {
            ch = (1<<i)^ch;
            ch = (1<<j)^ch;
        }
    }

    for(int i=7;i>=0;i--){
        if((ch>>i)&1)
            printf("1  ");
        else
            printf("0  ");
    }

    return 0;
}