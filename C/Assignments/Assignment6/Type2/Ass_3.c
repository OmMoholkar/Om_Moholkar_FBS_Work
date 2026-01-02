#include<stdio.h>

void print10();  
void table5();
int sumRange();
void primeCheck();
void armCheck();
void perfectCheck();
int factorial();
void strongCheck();
void palindromeCheck();
void firstLastSum();

void main(){
    print10();
    table5();
    int sum = sumRange();
    printf("\n%d", sum);
    primeCheck();
    armCheck();
    perfectCheck();
    int fact = factorial();
    printf("\n%d", fact);
    strongCheck();
    palindromeCheck();
    firstLastSum();
}

void print10(){
    for(int i=1; i<=10;i++)
        printf("\n%d", i);
}
void table5(){
    for(int i=1;i<=10;i++)
        printf("\n%d", i*5);
}
int sumRange(){
    int start = 1, end = 5, sum = 0;
    for(int i=start; i<=end; i++)
        sum = sum+i;
    return sum;
}
void primeCheck(){
    int num = 67, flag = 0;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0)
            printf("\nPrime");
        else   
            printf("\nNot prime");
}
void armCheck(){
    int num = 153;
    int num1 = num;
    int rem,temp = 0;
    while(num>0){
        rem = num%10;
        temp = temp + rem*rem*rem;
        num /= 10;
    }
    if(num1==temp)
        printf("\nArmstrong");
    else
        printf("\nNot Armstrong");
}
void perfectCheck(){
    int num = 28, sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum += i;
    }
    if (sum==num)
        printf("\nPerfect Number");
    else
        printf("\nNot Perfect");
}
int factorial(){
    int num = 5, fact = 1;
    for(int i=2; i<=num; i++){
        fact*=i;
    }
    return fact;
}
void strongCheck(){
    int num = 145, rem, sum = 0, fact = 1;
    int num1 = num;
    while(num>0){
        rem = num%10;
        for(int i=2;i<=rem;i++)
            fact*=i;
        sum += fact;
        fact = 1;
        num/=10;
    }
    if(num1==sum)
        printf("\nStrong");
    else
        printf("\nNot Strong");
}
void palindromeCheck(){
    int num = 1221, rem, rev = 0;
    int num1 = num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    (num1==rev)?printf("\nPalindrome"):printf("\nNot Palindrome");
}
void firstLastSum(){
    int num = 137865, count=0, first;
    int last = num%10;
    while(num>0){
        num/=10;
        if(num<10){
            first = num;
            break;
        }
    }
    printf("\n%d (%d + %d)", first+last, first, last);
}