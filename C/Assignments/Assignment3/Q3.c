#include<stdio.h>

void main(){
    int start = 1, end = 5, sum = 0;
    for(int i = start; i<=end;i++)
        sum += i;
    printf("%d", sum);
}