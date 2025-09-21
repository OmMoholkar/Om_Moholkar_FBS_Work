#include<stdio.h>

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0){
        if(num % 5 == 0)
            printf("Divisible by both 3 and 5.");
        else
            printf("Divisible by 3 but not by 5.");
    }
    else if(num % 5 == 0)
        printf("Divisible by 5 but not 3.");
    else
        printf("Divisible by none.");
}