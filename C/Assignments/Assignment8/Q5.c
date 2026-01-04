// Print alternate elements in array.

#include<stdio.h>
void main(){

    int arr[7];
    for(int i=0; i<7; i++){
        printf("Enter element in array ar %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nFull array -> [ ");
    for(int i=0; i<7; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");

    printf("\nAlternate elements -> [ ");
    for(int i=0; i<7; i=i+2)
        printf("%d, ", arr[i]);
    printf("\b\b ]\n");
}