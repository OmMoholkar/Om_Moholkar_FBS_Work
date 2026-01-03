#include<stdio.h>

#include<stdio.h>

int evenOdd(int);
int palindrome(int);
int leapYear(int);
int vowelCheck(char);
int eligibleAge(int);
char caseSensitivity(int);
int totalSalary(int);

void main(){
    printf("\nEvenOdd: %d", evenOdd(100));
    printf("\nPalindrome: %d", palindrome(112));
    printf("\nLeap year: %d", leapYear(1999));
    printf("\nVowel: %d",vowelCheck('A'));
    printf("\nEligible: %d", eligibleAge(123));
    printf("\nCase: %c", caseSensitivity('f'));
    printf("\nTotal salary %d", totalSalary(3000));
}

int evenOdd(int num){
    if (num%2==0)
        return 1;
    else
        return 0;
}

int palindrome(int num){
    if (num/100 == num%10)
        return 1;
    else 
        return 0;
}
int leapYear(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}
int vowelCheck(char alp){
    char lower = tolower(alp);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        return 1;
    else 
        return 0;
}
int eligibleAge(int age){
     if (age >= 18)
        return 1;
     else 
          return 0;
}
char caseSensitivity(int ch){
    if (ch >= 'A' && ch <='Z')
        return 'U';
    else 
        return 'L';
}
int totalSalary(int basic){
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