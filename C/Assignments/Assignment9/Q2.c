// Search the given number in array.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void search(int[]);

void main(){
    int arr[7];
    inputArray(arr);
    displayArray(arr);
    search(arr);
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