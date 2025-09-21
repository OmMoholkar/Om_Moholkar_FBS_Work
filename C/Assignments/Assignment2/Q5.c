#include<stdio.h>

void main(){
    int price;
    char stu;
    printf("Enter the price: ");
    scanf("%d", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &stu);

    if(stu == 'y'){
        if(price >= 500){
            printf("You get 20%% discount.");
            price -= price * 20/100;
        }
        else{
            printf("You get 10%% discount.");
            price -= price*10/100;
        }
    }
    else {
        if(price >= 600){
            printf("You get 15%% discount.");
            price -= price*15/100;
        }
        else
            printf("No discount.");
    }

    printf("\nGrand Total: %d", price);
}