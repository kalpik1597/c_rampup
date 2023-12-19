//WAP to reverse the integer
//1234 shoule be reveresed to 4321
//contraint: use only two temp variables max


#include <stdio.h>

int main() {
    int i = 123456789;
    int temp1 = 0;
    int temp2 = 0;
    while(i/10 || i!=0) {
        temp1 = i%10; //4,3,2
        temp2 = temp2*10 + temp1;
        i = i/10;
    }
    printf("%d",temp2);
    
    return 0;
}
