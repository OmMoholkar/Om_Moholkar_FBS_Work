// Accept array and print only prime numbers of array.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
int isPrime(int);
void primeArray(int[]);

void main(){
    int arr[7];
    inputArray(arr);
    printf("\nFull array -> ");
    displayArray(arr);
    primeArray(arr);
}

void inputArray(int arr[]){
    for(int i=0; i<7; i++){
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[]){
    printf("[ ");
    for(int i=0; i<7; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b ]");
}

void primeArray(int arr[]){
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