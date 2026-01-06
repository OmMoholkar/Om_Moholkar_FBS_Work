// Find sum of all numbers.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);

void main(){

    int arr[7];
    inputArray(arr,7);
    displayArray(arr,7);
    printf("\n\nSum of all array elements is: %d", sum(arr));
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

int sum(int arr[]){
    int sum=0;
    for(int i=0; i<7; i++)
        sum += arr[i];
    return sum;
}  