//Find minimum and maximum number in array.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void minMax(int[]);

void main(){

    int arr[7];
    inputArray(arr,7);
    displayArray(arr,7);
    minMax(arr);

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

void minMax(int arr[]){
    int max = arr[0], min = arr[0];
    for(int i=1; i<7; i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    printf("\nMaximum Number in array: %d", max);
    printf("\nMinimum Number in array: %d", min);
}