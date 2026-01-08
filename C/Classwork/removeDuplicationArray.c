// Remove Duplicates in array

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
void removeDuplicate(int[], int*);

void main(){

    int arr[10];
    int len = sizeof(arr)/sizeof(arr[0]);
    inputArray(arr, len);
    displayArray(arr, len);
    removeDuplicate(arr, &len);
    displayArray(arr, len);
    
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

void removeDuplicate(int arr[], int *len) {
    for (int i = 0; i < *len; i++) {
        for (int j = i + 1; j < *len; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *len - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                (*len)--;
                j--;
            }
        }
    }
}

