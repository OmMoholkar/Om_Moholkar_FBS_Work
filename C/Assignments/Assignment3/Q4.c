#include<stdio.h>

void main(){

    int flag = 0, n;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i = 2; i<n;i++){
        if(n%i == 0){
            flag = 0;
            break;
        }   
        else 
            flag = 1;
    }
    if(flag == 1)
        printf("Prime");
    else
        printf("Non Prime");
}