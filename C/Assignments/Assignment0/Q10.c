#include<stdio.h>

void main(){
     int a,b,c,d,e;
     float per,total;
     printf("Enter marks of 5 subjects:\n");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);
     scanf("%d",&e);
     
     total = a+b+c+d+e;
     per = total/500*100;
     printf("Total = %f\n", total);
     printf("Percentage = %f", per);
     getch();
}
