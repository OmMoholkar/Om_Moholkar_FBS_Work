#include<stdio.h>

void main(){

    int n,sum=0,temp,rem,fact;
    printf("Enter the range: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum = 0;
        temp=i;
        while(temp>0){
            fact=1;
            rem = temp%10;
            for(int j=1;j<=rem;j++)
                fact = fact*j;
            sum += fact;
            temp/=10;
        }
        if(sum==i)
            printf("%d ", i);
    }
}