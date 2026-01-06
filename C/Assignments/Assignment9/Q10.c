// Sort the array.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void sort(int arr[]);
void swap(int* , int*);

void main(){
    int arr[7];
    inputArray(arr);
    printf("\nOriginal array -> ");
    displayArray(arr);
    sort(arr);
    printf("\nSorted array -> ");
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

void sort(int arr[]){
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}