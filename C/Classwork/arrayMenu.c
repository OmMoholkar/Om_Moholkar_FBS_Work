// Menu driven code for arrays

#include<stdio.h>

void inputArray(int[], int);
void displayArray(int[], int);
int search(int[], int, int);
void replace(int[], int, int, int);
void removeElement(int[], int*, int);

void main(){
    int arr[10];
    int len = sizeof(arr)/sizeof(arr[0]);
    inputArray(arr,len);
    displayArray(arr, len);
    do{
        printf("\n\n1. Search Element.");
        printf("\n2. Replace element.");
        printf("\n3. Remove element.");
        printf("\n4. Display Array.");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        int choice;
        scanf("%d", &choice);
        if(choice == 1){
            int num;
            printf("\nEnter the number to search: ");
            scanf("%d",&num);
            int index = search(arr, len, num);
            if(index>=0)
                printf("\nElement found at index %d", index);
            else
                printf("\nElement not found.");
        }
        else if(choice==2){
            int x,y;
            printf("\nEnter the number to search: ");
            scanf("%d",&x);
            printf("\nEnter the number to replace: ");
            scanf("%d",&y);
            replace(arr,len,x,y);
            displayArray(arr,len);
        }
        else if(choice==3){
            int num;
            printf("\nEnter the number to delete: ");
            scanf("%d",&num);
            removeElement(arr, &len, num);
            displayArray(arr, len);
        }
        else if (choice==4)
        {
            displayArray(arr, len);
        }
        
        else if (choice == 5)
            break;
        else
            printf("\nInvalid choice.");    
    }while(1);
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

int search(int arr[], int len, int num){
    int index = -1;
    for(int i=0; i<len; i++){
        if(arr[i]==num){
            index = i;
            break;
        }
    }
    return index;
}

void replace(int arr[], int len, int x, int y){
    int index = search(arr,len,x);
    if(index >= 0)
        arr[index] = y;
    else
        printf("\nElement to replace not found.");
}

void removeElement(int arr[], int* len, int num){
    int index = search(arr,*len,num);
    if(index >= 0){
        for(int i=index; i<(*len); i++){
            arr[i]=arr[i+1];
        }
        (*len)--;
    }
}

