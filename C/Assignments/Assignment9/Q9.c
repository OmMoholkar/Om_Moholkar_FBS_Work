// Reverse the given array.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void swap(int* , int*);
void reverse(int[]);

void main(){
    int arr[7];
    inputArray(arr,7);
    printf("\nOriginal array -> ");
    displayArray(arr,7);
    reverse(arr);
    printf("\nReversed array -> ");
    displayArray(arr,7);
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