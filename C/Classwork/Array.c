#include<stdio.h>

void main(){
    int arr[7];
    int key;
    for(int i=0; i<7; i++){
        printf("enter array element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<7; i++)
        printf(" %d ", arr[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    int found=-1;
    for(int i=0; i<7; i++){
        if(arr[i]==key){
            found = i;
            break;
        }
    }
    if(found!=-1)
        printf("\nNumber found at index %d", found);
    else
        printf("\nNumber not found.");
}