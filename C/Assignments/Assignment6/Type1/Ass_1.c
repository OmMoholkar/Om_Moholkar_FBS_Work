#include<stdio.h>

void evenOdd();
void palindrome();
void leapYear();
void vowelCheck();
void eligibleAge();
void caseSensitivity();
void totalSalary();

void main(){
    evenOdd();
    palindrome();
    leapYear();
    vowelCheck();
    eligibleAge();
    caseSensitivity();
    totalSalary();
    getch();
}

void evenOdd(){
    int num = 100;
    (num%2==0)?printf("\neven"):printf("\nodd");
}
void palindrome(){
    int num = 112;
    if (num/100 == num%10)
        printf("\nPalindrome");
    else 
        printf("\nNot Palindrome");
}
void leapYear(){
    int year = 1999;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("\nLeap Year");
    else
        printf("\nNot leap");
}
void vowelCheck(){
    char alp = 'A';
    char lower = tolower(alp);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        printf("\nVowel");
    else 
        printf("\nConsonant");
}
void eligibleAge(){
    int age = 121;
     if (age >= 18)
        printf("\nEligible to vote");
     else 
          printf("\nNot eligible to vote");
}
void caseSensitivity(){
    int ch = 'f';
    if (ch >= 'A' && ch <='Z')
        printf("\nUppercase");
    else 
        printf("\nLowercase");
}
void totalSalary(){
    int basic = 3000;
    int da,ta,hra,total;
     
    if (basic <= 5000){
        da = basic*10/100;
        ta = basic*20/100;
        hra = basic*25/100;
        total = basic+da+ta+hra;
        printf("\n%d", total);
    }
    else {
        da = basic*15/100;
        ta = basic*25/100;
        hra = basic*30/100;
        total = basic+da+ta+hra;
        printf("\n%d", total);
    }
}