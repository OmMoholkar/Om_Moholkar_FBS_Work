// Find sum of all numbers.

#include<stdio.h>

void main(){

    int arr[7];
    for(int i=0; i<7; i++){
        printf("Enter element in array ar %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n[ ");
    for(int i=0; i<7; i++)
        printf("%d, ", arr[i]);
    printf("\b\b ]");

    int sum=0;
    for(int i=0; i<7; i++)
        sum += arr[i];
    printf("\n\nSum of all array elements is: %d", sum);
}