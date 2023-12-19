
//WAP to print prime and non-prime numbers in a given array


#include <stdio.h>

int main() {
    int array[] = {1,2,4,3,5,6,7,9,11,0,10,22,21,23,24};
    int mod;
    for(int i = 0; i<(sizeof(array)/sizeof(int)); i++){
        mod = 1;
        for(int j = 2;j < array[i]; j++){
            mod = array[i] % j;
            if(mod == 0)
                break;
        }
        if(mod == 0 || array[i] == 0 || array[i] == 1)
            printf("%d is non-prime number\n",array[i]);
        else
            printf("%d is prime number\n",array[i]);
    }
    return 0;
}
