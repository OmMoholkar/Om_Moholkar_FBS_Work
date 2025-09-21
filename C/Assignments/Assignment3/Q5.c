#include<stdio.h>

void main(){
    int rem,num,ams = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;
    
    while(temp > 0){
        rem = temp%10;
        ams = ams+rem*rem*rem;
        temp /= 10;
    }

    if(ams == num)
        printf("Armstrong");
    else
        printf("Not armstrong");
        
}