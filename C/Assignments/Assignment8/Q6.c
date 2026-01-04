// Accept array and print only prime numbers of array.

#include<stdio.h>

int isPrime(int);

void main(){
    int arr[7];
    for(int i=0; i<7; i++){
        printf("Enter element in array ar %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nFull array -> [ ");
    for(int i=0; i<7; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");

    int flag;
    printf("\nPrime array -> [ ");
    for(int i=0; i<7; i++){
        if(isPrime(arr[i])){
            printf("%d, ",arr[i]);
        }
    }
    printf("\b\b ]\n");
}

int isPrime(int num){
        int flag = 1;
        if(num<=1)
            flag = 0;
        for(int i=2; i<num; i++){
            if(num%i==0){
                flag = 0;
                break;
            }
        }
        return flag;
    }