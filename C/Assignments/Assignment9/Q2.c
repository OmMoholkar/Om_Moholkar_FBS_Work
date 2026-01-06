// Search the given number in array.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void search(int[]);

void main(){
    int arr[7];
    inputArray(arr,7);
    displayArray(arr,7);
    search(arr);
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

void search(int arr[]){
    int num;
    printf("\n\nEnter the number to search: ");
    scanf("%d", &num);
    int index = -1;
    for(int i=0; i<7; i++){
        if(num==arr[i])
            index = i;
    }
    if(index!=-1)
        printf("Number found at index %d.", index);
    else
        printf("Number not found in array.");
}