// Find sum of all numbers.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);

void main(){

    int arr[7];
    inputArray(arr);
    displayArray(arr);
    printf("\n\nSum of all array elements is: %d", sum(arr));
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

int sum(int arr[]){
    int sum=0;
    for(int i=0; i<7; i++)
        sum += arr[i];
    return sum;
}  