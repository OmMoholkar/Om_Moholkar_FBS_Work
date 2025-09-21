#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter side A: ");
    scanf("%d", &a);
    printf("Enter side B: ");
    scanf("%d", &b);
    printf("Enter side C: ");
    scanf("%d", &c);

    if(a==b && b==c)
        printf("The triangle is Equilateral\n");
    else if(a==b || b==c || a==c)
        printf("The triangle is Isosceles\n");
    else
        printf("The triangle is Scalene\n");
}