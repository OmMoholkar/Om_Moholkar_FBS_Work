// Find odd and even among the numbers.

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
    printf("\b\b ]\n");

    for(int i=0; i<7; i++){
        if(arr[i]%2==0){
            printf("\n%d is even", arr[i]);
        }
        else
            printf("\n%d is odd", arr[i]);
    }

       // Logic for splitting array in even or odd
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