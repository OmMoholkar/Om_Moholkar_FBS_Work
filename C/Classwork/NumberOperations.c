#include<stdio.h>

void main(){
     
     int num,rem;
     int sum = 0, rev = 0, ams = 0;
     printf("Enter Number: ");
     scanf("%d", &num);
     int temp = num;
     
     while (num>0){
           
           rem = num%10; //peeking the last digit
           sum = sum + rem; //Sum of all digits
           rev = rev*10+rem; //reverse of given num
           ams = ams+rem*rem*rem; //Amstrong check
           num = num/10; //popping the last digit
           
     }
     
     printf("Sum of all digits: %d\n", sum);
     printf("Reversed Number: %d\n", rev);
     (temp==rev)? printf("Palindrome\n") : printf("Not palindrome\n");
     (temp==ams)? printf("Amstrong\n") : printf("Not Amstrong\n");
     
     getch();
}
