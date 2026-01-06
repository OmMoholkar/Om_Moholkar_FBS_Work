// Take two array and add sum in third array
// Example-
// arr[5]= {1,2, 3, 4,5}
// brr[5]={10,20,30, 40, 50}
// crr[5]={11,22,33,44,55}

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void sumArray(int[], int[]);

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

    sumArray(arr,brr);

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

void sumArray(int arr[], int brr[]){
    int crr[5];
    for(int i=0; i<5;i++)
        crr[i] = arr[i]+brr[i];
    
    printf("\nAdded Array 3 -> ");
    displayArray(crr,5);
}