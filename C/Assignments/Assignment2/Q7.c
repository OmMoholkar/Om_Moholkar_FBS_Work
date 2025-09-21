#include<stdio.h>

void main(){
    int age;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return;
    }

    if(age>=0 && age<12)
        printf("Child");
    else if(age >= 12 && age <= 19)
        printf("Teenager");
    else if (age > 19 && age <= 59)
        printf("Adult");
    else
        printf("Senior");
}