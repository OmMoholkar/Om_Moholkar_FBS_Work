#include<stdio.h>

void main(){
    int num,fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = num; i>0; i--)
        fact*=i;

    printf("%d ", fact);
}