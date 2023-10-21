#include<stdio.h>

int main() {

    printf("==== program_start ====\n");

    //array init
    int arr[] = {1,2,4,4,1,4,2,6,2,9};
    int i,j,k,array_length=sizeof(arr)/sizeof(int);

    //array print
    printf("original array: ");
    for(i=0;i<array_length;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("original array length: %d\n",array_length);

    //remove duplicate
    for(i=0;i<array_length;i++){
        for(j=i+1;j<array_length;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<array_length;k++){
                    arr[k] = arr[k+1];
                }
                array_length--; j--;
            }
        }
    }

    //array print
    printf("removed duplicate elements array: ");
    for(i=0;i<array_length;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("removed duplicate elements array length: %d\n",array_length);

    printf("==== program_end ====\n");
    return 0;
}