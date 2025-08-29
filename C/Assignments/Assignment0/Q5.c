#include<stdio.h>

void main(){
     int a,b,c,d,e;
     float avg;
     printf("Enter 5 numbers");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);
     scanf("%d",&e);
     
     avg = (a+b+c+d+e)/5;
     printf("\nAvg = %f",avg);
     getch();
}
