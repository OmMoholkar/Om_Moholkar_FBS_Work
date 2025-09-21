#include<stdio.h>

void main(){
    int num,last,first;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num%10;
    while(num>0){
        // printf("%d ",num);
        num/=10;
        if(num<10){
            first = num;
            break;
        }
    }
    printf("%d (%d + %d)", first+last, first, last);

}