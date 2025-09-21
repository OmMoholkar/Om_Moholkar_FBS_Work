#include<stdio.h>

void main(){
    int mks;
    printf("Enter marks ?/100: ");
    scanf("%d", &mks);

    if(mks<=100 && mks>=75)
        printf("Distinction");
    else if (mks<75 && mks >=65)
        printf("First Class");
    else if (mks<65 && mks >=55)
        printf("Second Class");
    else if (mks<55 && mks >=40)
        printf("Pass");
    else if (mks<40 && mks >=0)
        printf("Fail");
    else
        printf("Invalid Marks");
}