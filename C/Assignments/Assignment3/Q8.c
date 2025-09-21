#include<stdio.h>

void main(){
    int num, fact = 1, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while(temp>0){
        rem = temp%10;
        // printf("rem: %d\n", rem);
        for(int i = rem; i>0; i--)
            fact*=i;
        // printf("fact: %d\n", fact);
        sum += fact;
        fact = 1;
        temp /= 10;
    }

    if(sum == num)
        printf("Strong");
    else
        printf("Not strong");
}