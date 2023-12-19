//WAP to print a repeating character in a string


#include <stdio.h>

int main() {
    
    char str[] = "somethingsome";
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i] == str[j]) {
                printf("%c is repeating\n",str[i]);
                break;
            }
        }
    }

    return 0;
}