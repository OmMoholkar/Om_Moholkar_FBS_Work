#include<stdio.h>

int calculator(int, int, char);
void triangle(int, int, int);
int greatest(int, int, int);
void grade(int);
void discount(int, char);
void divisibility(int);
void ageClass(int);

void main(){
    int a,b;
    char op;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter operation(+, -, *, /, %%): ");
    scanf(" %c", &op);
    int res = calculator(a,b,op);
    printf("\nThe result is: %d", res);

    int x,y,z;
    printf("\nEnter side A: ");
    scanf("%d", &x);
    printf("\nEnter side B: ");
    scanf("%d", &y);
    printf("\nEnter side C: ");
    scanf("%d", &z);
    triangle(x,y,z);

    int p,q,r;
    printf("\nEnter first number: ");
    scanf("%d", &p);
    printf("\nEnter second number: ");
    scanf("%d", &q);
    printf("\nEnter third number: ");
    scanf("%d", &r);
    int grt = greatest(p,q,r);
    printf("\nThe greatest is: %d", grt);

    int mks;
    printf("\nEnter marks ?/100: ");
    scanf("%d", &mks);
    grade(mks);

    int price;
    char stu;
    printf("\nEnter the price: ");
    scanf("%d", &price);
    printf("\nAre you a student? (y/n): ");
    scanf(" %c", &stu);
    discount(price, stu);

    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    divisibility(num);

    int age;
    printf("\nEnter age: ");
    if (scanf("%d", &age) != 1) {
        printf("\nInvalid input! Please enter a number.\n");
        return;
    }
    ageClass(age);

    getch();
}

int calculator(int a, int b, char op){
    int res;
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
    
    return res;
}
void triangle(int a, int b, int c){
    if(a==b && b==c)
        printf("\nThe triangle is Equilateral\n");
    else if(a==b || b==c || a==c)
        printf("\nThe triangle is Isosceles\n");
    else
        printf("\nThe triangle is Scalene\n");
}

int greatest(int a, int b, int c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else{ 
        if(b>c)
            return b;
        else
            return c;
    }
}
void grade(int mks){
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
void discount(int price, char stu){
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
void divisibility(int num){
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
void ageClass(int age){
    if(age>=0 && age<12)
        printf("\nChild");
    else if(age >= 12 && age <= 19)
        printf("\nTeenager");
    else if (age > 19 && age <= 59)
        printf("\nAdult");
    else
        printf("\nSenior");
}