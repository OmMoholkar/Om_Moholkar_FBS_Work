// Reverse the given array.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void swap(int* , int*);
void reverse(int[]);

void main(){
    int arr[7];
    inputArray(arr);
    printf("\nOriginal array -> ");
    displayArray(arr);
    reverse(arr);
    printf("\nReversed array -> ");
    displayArray(arr);
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

void reverse(int arr[]){
    int j=6;
    for(int i=0; i<7/2; i++){
        swap(&arr[i],&arr[j]);
        j--;
    }
}

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}