#include<stdio.h>

void main(){
     int len,wid;
     printf("Enter length of rectangle: ");
     scanf("%d", &len);
     printf("\nEnter width of rectangle: ");
     scanf("%d", &wid);
     int perm = 2*len+2*wid;
     printf("\nPerimeter =  %d", perm);
     getch();
}
