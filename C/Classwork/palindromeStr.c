#include<stdio.h>
#include<string.h>

void main(){
    char str[10];
    printf("Enter string: ");
    scanf("%s", str);
    char str2[sizeof(str)];
    if(!strcmp(strrev(str),strcpy(str2,str)))
        printf("Palindrome");
    else
        printf("Not palindrome");
}