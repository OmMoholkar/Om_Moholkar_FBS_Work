// Take two array and add sum in third array
// Example-
// arr[5]= {1,2, 3, 4,5}

// brr[5]={10,20,30, 40, 50}
// crr[5]={11,22,33,44,55}

#include<stdio.h>

void main(){
    int arr[5];
    int brr[5];

    for(int i=0; i<5; i++){
        printf("Enter element in array1 are %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("Enter element in array2 are %d: ", i+1);
        scanf("%d", &brr[i]);
    }

    printf("\nArray 1 -> [ ");
    for(int i=0; i<5; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");

    printf("\nArray 2 -> [ ");
    for(int i=0; i<5; i++)
        printf("%d, ", brr[i]);
    printf("\b\b ]\n");

    int crr[5];
    for(int i=0; i<5;i++)
        crr[i] = arr[i]+brr[i];
    
    printf("\nAdded Array 3 -> [ ");
    for(int i=0; i<5; i++)
        printf("%d, ", crr[i]);
    printf("\b\b ]\n");
}