// Take two array and add sum in third array
// Example-
// arr[5]= {1,2, 3, 4,5}
// brr[5]={10,20,30, 40, 50}
// crr[5]={11,22,33,44,55}

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void sumArray(int[], int[]);

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

    sumArray(arr,brr);

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

void sumArray(int arr[], int brr[]){
    int crr[5];
    for(int i=0; i<5;i++)
        crr[i] = arr[i]+brr[i];
    
    printf("\nAdded Array 3 -> ");
    displayArray(crr);
}