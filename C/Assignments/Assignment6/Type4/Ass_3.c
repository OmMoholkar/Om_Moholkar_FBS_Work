#include<stdio.h>

void range(int);  
void table(int);
int sumRange(int, int);
int primeCheck(int);
int armCheck(int);
int perfectCheck(int);
int factorial(int);
int strongCheck(int);
int palindromeCheck(int);
int firstLastSum();

void main(){
    range(10);
    table(5);
    printf("%d",sumRange(1,5));
    printf("IsPrime %d", primeCheck(67));
    printf("IsArmstrong %d", armCheck(153));
    printf("IsPerfect %d", perfectCheck(28));
    printf("%d",factorial(5));
    printf("IsStrong %d", strongCheck(145));
    printf("IsPalindrome %d", palindromeCheck(1221));
    printf("Sum %d", firstLastSum(12345));
}

void range(int num){
    for(int i=1; i<=num;i++)
        printf("\n%d", i);
}
void table(int num){
    for(int i=1;i<=10;i++)
        printf("\n%d", i*num);
}
int sumRange(int start, int end){
    int sum = 0;
    for(int i=start; i<=end; i++)
        sum = sum+i;
    return sum;
}
int primeCheck(int num){
    int flag = 0;
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else   
        return 0;
}
int armCheck(int num){
    int num1 = num;
    int rem,temp = 0;
    while(num>0){
        rem = num%10;
        temp = temp + rem*rem*rem;
        num /= 10;
    }
    if(num1==temp)
        return 1;
    else
        return 0;
}
int perfectCheck(int num){
    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum += i;
    }
    if (sum==num)
        return 1;
    else
        return 0;
}
int factorial(int num){
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact*=i;
    }
    return fact;
}
int strongCheck(int num){
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
        return 1;
    else
        return 0;
}
int palindromeCheck(int num){
    int rem, rev = 0;
    int num1 = num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num/=10;
    }
    if(num1==rev)
        return 1;
    else 
        return 0;
}
int firstLastSum(int num){
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
    return first+last;
}