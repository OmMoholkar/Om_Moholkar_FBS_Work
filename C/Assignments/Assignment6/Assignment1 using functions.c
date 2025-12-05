#include<stdio.h>

int iseven(int);
int ispalindrome(int);
int isleapyear(int);
int isVowel(char);
int isLegal(int);
int isUppercase(char);
int increment(int);

void main(){
    int choice;
     do{
        printf("\n--------MENU--------");
        printf("\n1. isEven");
        printf("\n2. isPalindrome");
        printf("\n3. Leap Year");
        printf("\n4. isVovel");
        printf("\n5. is Legal Age");
        printf("\n6. is Uppercase");
        printf("\n7. Increment");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice==1){
            int temp;
            printf("Enter Number: ");
            scanf("%d", &temp);
            iseven(temp)?printf("Even"):printf("Odd");
        }
        else if(choice==2){
            int temp;
            printf("Enter Number: ");
            scanf("%d", &temp);
            ispalindrome(temp)?printf("Palindrome"):printf("Not Palindrome");
        }
        else if(choice==3){
            int temp;
            printf("Enter year: ");
            scanf("%d", &temp);
            isleapyear(temp)?printf("Leap Year"):printf("Not Leap Year");
        }
        else if(choice==4){
            char temp;
            printf("Enter Aplhabet: ");
            scanf(" %c", &temp);
            isVowel(temp)?printf("Vowel"):printf("Consonant");
        }
        else if(choice==5){
            int temp;
            printf("Enter Age: ");
            scanf("%d", &temp);
            isLegal(temp)?printf("Legal Age"):printf("Not Legal Age");
        }
        else if(choice==6){
            char temp;
            printf("Enter Char: ");
            scanf(" %c", &temp);
            isUppercase(temp)?printf("Uppercase"):printf("Lowercase");
        }
        else if(choice==7){
            int temp;
            printf("Enter Basic Salary: ");
            scanf("%d", &temp);
            printf("Total salary after increment %d", increment(temp));
        }
        else if(choice == 8)
            break;
        else
            printf("\nEnter valid choice.\n");
    } while(1);
    getch();
}

int iseven(int num){
    return num%2==0;
}

int ispalindrome(int num){
    return num/100 == num%10;
}

int isleapyear(int year){
    return ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) );
}

int isVowel(char alp){
    char lower = tolower(alp);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

int isLegal(int age){
     return age >= 18;
}

int isUppercase(char ch){
    return (ch >= 'A' && ch <='Z');
}

int increment(int basic){
    int da,ta,hra,total;
    
    if (basic <= 5000){
        da = basic*10/100;
        ta = basic*20/100;
        hra = basic*25/100;
        total = basic+da+ta+hra;
        return total;
    }
    else {
        da = basic*15/100;
        ta = basic*25/100;
        hra = basic*30/100;
        total = basic+da+ta+hra;
        return total;
    }
}