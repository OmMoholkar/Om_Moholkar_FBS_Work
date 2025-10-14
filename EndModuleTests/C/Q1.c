#include<stdio.h>

int factorial(int);

void main(){
    int num,res = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        res = res + factorial(i);
    }
    printf("%d",res);
}

int factorial(int num){
    int rem, fact = 1;
    int temp = num;
    for(int i=num; i>0;i--){
        fact = fact * i;
    }
    return fact;
}