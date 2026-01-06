// Find odd and even among the numbers.

#include<stdio.h>

void inputArray(int[]);
void displayArray(int[]);
void evenOdd(int[]);

void main(){

    int arr[7];
    inputArray(arr);
    displayArray(arr);
    evenOdd(arr);
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

// Logic for splitting array in even or odd

void evenOdd(int arr[]){
    int odd[7];
    int even[7];

    int j=0, k=0;
    for(int i=0; i<7; i++){
        if(arr[i]%2 == 0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k] = arr[i];
            k++;
        }
    }

    printf("\n\nEven -> [ ");
    for(int i=0; i<j; i++)
        printf("%d, ", even[i]);
    printf("\b\b ]");

    printf("\n\nOdd -> [ ");
    for(int i=0; i<k; i++)
        printf("%d, ", odd[i]);
    printf("\b\b ]");
}