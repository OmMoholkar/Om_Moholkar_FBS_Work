// Print alternate elements in array.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);

void main(){

    int arr[7];
    inputArray(arr,7);

    printf("\nFull array -> ");
    displayArray(arr,7);

    printf("\nAlternate elements -> [ ");
    for(int i=0; i<7; i=i+2)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");
}

void inputArray(int arr[], int len){
    for(int i=0; i<len; i++){
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int len){
    printf("[ ");
    for(int i=0; i<len; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b ]");
}