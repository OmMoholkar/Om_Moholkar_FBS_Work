#include<stdio.h>
#include<ctype.h>

void main(){
     char alp = 'A';
     //converting to lowercase to handle capital inputs as well.
     char lower = tolower(alp);
     if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        printf("Vowel");
     else 
          printf("Consonant");
     getch();
}
