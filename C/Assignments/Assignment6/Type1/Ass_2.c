#include<stdio.h>

void calculator();
void triangle();
void greatest();
void grade();
void discount();
void divisibility();
void ageClass();

void main(){
    calculator();
    triangle();
    greatest();
    grade();
    discount();
    divisibility();
    ageClass();
    getch();
}

void calculator(){
    int a,b,res;
    char op;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter operation(+, -, *, /, %%): ");
    scanf(" %c", &op);

    if(op == '+')
        res = a+b;
    else if (op == '-')
        res = a-b;
    else if (op == '*')
        res = a*b;
    else if (op == '/')
        res = a/b;
    else if (op == '%')
        res = a%b;
    else{
        printf("\nInvalid operation\n");
        return;
    }
    
    printf("\nThe result is: %d", res);
}
void triangle(){
    int a,b,c;
    printf("\nEnter side A: ");
    scanf("%d", &a);
    printf("\nEnter side B: ");
    scanf("%d", &b);
    printf("\nEnter side C: ");
    scanf("%d", &c);

    if(a==b && b==c)
        printf("\nThe triangle is Equilateral\n");
    else if(a==b || b==c || a==c)
        printf("\nThe triangle is Isosceles\n");
    else
        printf("\nThe triangle is Scalene\n");
}
void greatest(){
    int a,b,c;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter third number: ");
    scanf("%d", &c);

    if(a>b){
        if(a>c)
            printf("\n%d is largest.", a);
        else
            printf("\n%d is largest.", c);
    }
    else{ 
        if(b>c)
            printf("\n%d is largest.", b);
        else
            printf("\n%d is largest.", c);
    }
}
void grade(){
    int mks;
    printf("\nEnter marks ?/100: ");
    scanf("%d", &mks);

    if(mks<=100 && mks>=75)
        printf("\nDistinction");
    else if (mks<75 && mks >=65)
        printf("\nFirst Class");
    else if (mks<65 && mks >=55)
        printf("\nSecond Class");
    else if (mks<55 && mks >=40)
        printf("\nPass");
    else if (mks<40 && mks >=0)
        printf("\nFail");
    else
        printf("\nInvalid Marks");
}
void discount(){
    int price;
    char stu;
    printf("\nEnter the price: ");
    scanf("%d", &price);
    printf("\nAre you a student? (y/n): ");
    scanf(" %c", &stu);

    if(stu == 'y'){
        if(price >= 500){
            printf("\nYou get 20%% discount.");
            price -= price * 20/100;
        }
        else{
            printf("\nYou get 10%% discount.");
            price -= price*10/100;
        }
    }
    else {
        if(price >= 600){
            printf("\nYou get 15%% discount.");
            price -= price*15/100;
        }
        else
            printf("\nNo discount.");
    }

    printf("\nGrand Total: %d", price);
}
void divisibility(){
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0){
        if(num % 5 == 0)
            printf("\nDivisible by both 3 and 5.");
        else
            printf("\nDivisible by 3 but not by 5.");
    }
    else if(num % 5 == 0)
        printf("\nDivisible by 5 but not 3.");
    else
        printf("\nDivisible by none.");
}
void ageClass(){
    int age;
    printf("\nEnter age: ");
    if (scanf("%d", &age) != 1) {
        printf("\nInvalid input! Please enter a number.\n");
        return;
    }

    if(age>=0 && age<12)
        printf("\nChild");
    else if(age >= 12 && age <= 19)
        printf("\nTeenager");
    else if (age > 19 && age <= 59)
        printf("\nAdult");
    else
        printf("\nSenior");
}