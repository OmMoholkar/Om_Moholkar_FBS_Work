#include<stdio.h>

void main(){
     int num = 112;
     if (num/100 == num%10)
        printf("Palindrome");
     else 
          printf("Not Palindrome");
     getch();
}
