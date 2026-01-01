#include<stdio.h>

#include<stdio.h>

int evenOdd();
int palindrome();
int leapYear();
int vowelCheck();
int eligibleAge();
char caseSensitivity();
int totalSalary();

void main(){
    printf("\nEvenOdd: %d", evenOdd());
    printf("\nPalindrome: %d", palindrome());
    printf("\nLeap year: %d", leapYear());
    printf("\nVowel: %d",vowelCheck());
    printf("\nEligible: %d", eligibleAge());
    printf("\nCase: %c", caseSensitivity());
    printf("\nTotal salary %d", totalSalary());
}

int evenOdd(){
    int num = 100;
    if (num%2==0)
        return 1;
    else
        return 0;
}

int palindrome(){
    int num = 112;
    if (num/100 == num%10)
        return 1;
    else 
        return 0;
}
int leapYear(){
    int year = 1999;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
int vowelCheck(){
    char alp = 'A';
    char lower = tolower(alp);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        return 1;
    else 
        return 0;
}
int eligibleAge(){
    int age = 121;
     if (age >= 18)
        return 1;
     else 
          return 0;
}
char caseSensitivity(){
    int ch = 'f';
    if (ch >= 'A' && ch <='Z')
        return 'U';
    else 
        return 'L';
}
int totalSalary(){
    int basic = 3000;
    int da,ta,hra,total;
     
    if (basic <= 5000){
        da = basic*10/100;
        ta = basic*20/100;
        hra = basic*25/100;
        total = basic+da+ta+hra;
        return total;
    }
    else {
        da = basic*15/100;
        ta = basic*25/100;
        hra = basic*30/100;
        total = basic+da+ta+hra;
        return total;
    }
}