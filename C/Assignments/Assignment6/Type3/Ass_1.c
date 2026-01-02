#include<stdio.h>

void evenOdd(int);
void palindrome(int);
void leapYear(int);
void vowelCheck(char);
void eligibleAge(int);
void caseSensitivity(int);
void totalSalary(int);

void main(){
    evenOdd(100);
    palindrome(122);
    leapYear(1999);
    vowelCheck('A');
    eligibleAge(12);
    caseSensitivity('B');
    totalSalary(3000);
    getch();
}

void evenOdd(int num){
    (num%2==0)?printf("\neven"):printf("\nodd");
}
void palindrome(int num){
    if (num/100 == num%10)
        printf("\nPalindrome");
    else 
        printf("\nNot Palindrome");
}
void leapYear(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("\nLeap Year");
    else
        printf("\nNot leap");
}
void vowelCheck(char alp){
    char lower = tolower(alp);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        printf("\nVowel");
    else 
        printf("\nConsonant");
}
void eligibleAge(int age){
     if (age >= 18)
        printf("\nEligible to vote");
     else 
          printf("\nNot eligible to vote");
}
void caseSensitivity(int ch){
    if (ch >= 'A' && ch <='Z')
        printf("\nUppercase");
    else 
        printf("\nLowercase");
}
void totalSalary(int basic){
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