// Sort the array.

#include<stdio.h>

void swap(int* , int*);

void main(){
    int arr[7];
    for(int i=0; i<7; i++){
        printf("Enter element in array ar %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array -> [ ");
    for(int i=0; i<7; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");

    // {1, 2, 3, 4, 5, 6, 7} {3}
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }

    printf("\nSorted array -> [ ");
    for(int i=0; i<7; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");
}

void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}