// Merge two arrays

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void merge(int[] , int[]);

void main(){
    int arr[5];
    int brr[5];

    inputArray(arr);
    printf("\n");
    inputArray(brr);

    printf("\nArray 1 -> ");
    displayArray(arr);

    printf("\nArray 2 -> ");
    displayArray(brr);

    merge(arr,brr);
}

void inputArray(int arr[]){
    for(int i=0; i<5; i++){
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[]){
    printf("[ ");
    for(int i=0; i<5; i++){
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
    
    printf("\nMerged Array 3 -> [ ");
    for(int i=0; i<10; i++)
        printf("%d, ", crr[i]);
    printf("\b\b ]\n");
}