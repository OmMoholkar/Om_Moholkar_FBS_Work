#include<stdio.h>

void main(){
     int b,h;
     printf("Enter base of triangle: ");
     scanf("%d", &b);
     printf("\nEnter height of triangle: ");
     scanf("%d", &h);
     int area = 0.5*b*h;
     printf("\nArea =  %d", area);
     getch();
}
