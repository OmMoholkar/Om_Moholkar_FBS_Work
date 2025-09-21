#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,res;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operation(+, -, *, /, %%): ");
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
        printf("Invalid operation\n");
        return;
    }
    
    printf("The result is: %d", res);
    getch();
    
}