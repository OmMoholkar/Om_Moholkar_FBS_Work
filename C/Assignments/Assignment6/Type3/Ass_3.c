#include<stdio.h>

void range(int);  
void table(int);
void sumRange(int, int);
void primeCheck(int);
void armCheck(int);
void perfectCheck(int);
void factorial(int);
void strongCheck(int);
void palindromeCheck(int);
void firstLastSum();

void main(){
    range(10);
    table(5);
    sumRange(1,5);
    primeCheck(67);
    armCheck(153);
    perfectCheck(28);
    factorial(5);
    strongCheck(145);
    palindromeCheck(1221);
    firstLastSum(12345);
}

void range(int num){
    for(int i=1; i<=num;i++)
        printf("\n%d", i);
}
void table(int num){
    for(int i=1;i<=10;i++)
        printf("\n%d", i*num);
}
void sumRange(int start, int end){
    int sum = 0;
    for(int i=start; i<=end; i++)
        sum = sum+i;
    printf("\n%d", sum);
}
void primeCheck(int num){
    int flag = 0;
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
void armCheck(int num){
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
void perfectCheck(int num){
    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum += i;
    }
    if (sum==num)
        printf("\nPerfect Number");
    else
        printf("\nNot Perfect");
}
void factorial(int num){
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact*=i;
    }
    printf("\n%d", fact);
}
void strongCheck(int num){
    int rem, sum = 0, fact = 1;
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
void palindromeCheck(int num){
    int rem, rev = 0;
    int num1 = num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    (num1==rev)?printf("\nPalindrome"):printf("\nNot Palindrome");
}
void firstLastSum(int num){
    int count=0, first;
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