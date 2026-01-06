// Merge two arrays

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void merge(int[] , int[]);

void main(){
    int arr[5];
    int brr[5];

    inputArray(arr,5);
    printf("\n");
    inputArray(brr,5);

    printf("\nArray 1 -> ");
    displayArray(arr,5);

    printf("\nArray 2 -> ");
    displayArray(brr,5);

    merge(arr,brr);
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

void merge(int arr[], int brr[]){
    int crr[10];
    int j = 0;
    for(int i=0; i<5; i++){
        crr[j] = arr[i];
        j++;
    }
    for(int i=0; i<5; i++){
        crr[j] = brr[i];
        j++;
    }    
    
    printf("\nMerged Array 3 -> ");
    displayArray(crr,10);
}