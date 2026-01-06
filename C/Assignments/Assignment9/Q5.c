// Print alternate elements in array.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);

void main(){

    int arr[7];
    inputArray(arr);

    printf("\nFull array -> ");
    displayArray(arr);

    printf("\nAlternate elements -> [ ");
    for(int i=0; i<7; i=i+2)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");
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