#include<stdio.h>

void main(){
     int year = 1900;
     if (year % 4 == 0 && year % 400 == 0 || year % 100 != 0 )
        printf("Leap Year");
     else 
          printf("Not Leap Year");
     getch();
}
