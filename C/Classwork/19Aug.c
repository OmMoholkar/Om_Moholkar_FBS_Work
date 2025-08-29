#include<stdio.h>

int main() {
    
    
    int num = 5;
    if (num % 2 == 0) {
            printf("The number is even.\n");
    } else {
           printf("The number is odd.\n");
    }
    
    int year = 2025;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            printf("The year is leap.\n");
    } else {
           printf("The year is not leap.\n");
    }
    
    int sign = -28;
    if(sign > 0){
            printf("Positive.\n");
    } else {
           printf("Negative.\n");
    }
    
    int age = 15;
	if( age >= 18)
	{
		printf("Eligible for voting.\n");
	}
	else
	{ 
	printf("Not eligible for voting.\n");
	}
	
	int a = 10, b = 20;
	if(a > b){
         printf("A is greater.\n");
     } else {
        printf("B is greater.\n");
     }
	
	int x = 4;
    int y = x;
	x == 2;
	if(x=1)
	printf("%d",y);
	
    getch();
}
