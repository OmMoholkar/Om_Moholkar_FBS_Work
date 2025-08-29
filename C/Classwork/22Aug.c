#include<stdio.h>

int main(){
    //Bruteforce method for sum of all digits in a number
    int no = 54321;
    printf("%d\n",no);
    int rem;
    int sum = 0;
    
    rem = no%10;
    sum = sum+rem;
    no = no/10;
    
    rem = no%10;
    sum = sum+rem;
    no = no/10;
    
    rem = no%10;
    sum = sum+rem;
    no = no/10;
    
    rem = no%10;
    sum = sum+rem;
    no = no/10;
    
    rem = no%10;
    sum = sum+rem;
    no = no/10;
    
    printf("%d\n",sum);
    
    //Looping method
    int num = 54321;
    int r;
    int s = 0;
    
    while (num>0){
          r = num%10;
          s = s+r; //calculates sum
          
          num = num/10;
    }
    printf("%d\n", s);
    
    //Even numbers between given i-j
    int i,j;
    printf("Enter start: ");
    scanf("%d",&i);
    printf("Enter end: ");
    scanf("%d",&j);
    
    while (i<=j){
          if(i%2 == 0)
                 printf("%d\n",i);
          i++;
    }
    
    //Reverse Digits
    int n = 12321;
    int temp = n;
    int rev = 0;
    int rim;
    while (n>0){
          rim = n%10;
          rev = rev*10+rim; //reverses logic
          n = n/10;
    }
    printf("%d\n", rev);
    
    //Palindrome check
    if (temp==rev)
       printf("Is palindrome");
    else
        printf("Not palindrome");
    
    getch();
}
