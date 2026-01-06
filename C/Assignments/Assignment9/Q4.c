// Find odd and even among the numbers.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void evenOdd(int[]);

void main(){

    int arr[7];
    inputArray(arr,7);
    displayArray(arr,7);
    evenOdd(arr);
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

    printf("\n\nEven -> ");
    displayArray(even,j);

    printf("\n\nOdd -> ");
    displayArray(odd,k);
}