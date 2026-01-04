// Search the given number in array.

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

    int num, index = -1;
    printf("\n\nEnter the number to search: ");
    scanf("%d", &num);

    for(int i=0; i<7; i++){
        if(num==arr[i])
            index = i;
    }
    if(index!=-1)
        printf("Number found at index %d.", index);
    else
        printf("Number not found in array.");

}