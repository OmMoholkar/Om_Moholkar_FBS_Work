// Merge two arrays

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

    int crr[10];
    int j = 0;
    for(int i=0; i<5; i++){
        crr[j] = arr[i];
        j++;
    }
    for(int i=0; i<5; i++){
        crr[j] = brr[i];
        j++;
    }    
    
    printf("\nMerged Array 3 -> [ ");
    for(int i=0; i<10; i++)
        printf("%d, ", crr[i]);
    printf("\b\b ]\n");
}