// Replace all x in the array to y.

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void replace(int[], int, int, int);

void main(){
    int arr[10];
    inputArray(arr,10);
    displayArray(arr,10);
    replace(arr,10,3,7);
    displayArray(arr,10);

}

void inputArray(int arr[], int len){
    for(int i=0; i<len; i++){
        printf("Enter array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int len){
    printf("\n[ ");
    for(int i=0; i<len; i++){
        printf("%d, ", arr[i]);
    }
    printf("\b\b ]\n");
}

void replace(int arr[], int len, int x, int y){
    for (int i = 0; i < len; i++){
        if(arr[i]==x)
            arr[i]=y;
    }
}

