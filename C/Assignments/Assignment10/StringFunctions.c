#include<stdio.h>
#include<String.h>

void main(){
    char str[10], str2[10];;

    printf("\nEnter the String: ");
    scanf("%s", str);

    // int strlen(char* str) -> Length of string
    int len = strlen(str);
    printf("\nstelen: %d", len);
    
    // char* strcpy(char* destination, char* source) -> copies to destination from source
    strcpy(str2,str);
    printf("\nstrcpy: Str = %s, Str2 = %s", str, str2);

    // char* strupr(char* str) -> to Uppercase
    printf("\nUpper: %s", strupr(str));

    // char* strlwr(char* str) -> to Lowercase
    printf("\nLower: %s", strlwr(str));

    // int strcmp(char* s1, char* s2) -> compare string
    // -1 -> s1 is smaller acc to ascii
    // 0 -> s1,s2 equal
    // 1 -> s2 is larger acc to ascii
    printf("\nstrcmp: %d", strcmp(str,str2));

    //char* strstr(char* str, char* substring) -> Returns index of substring else -1
    char substr[10];
    printf("\nEnter substring: ");
    scanf("%s", substr);
    printf("strstr: %s", strstr(str, substr));

    // char* strchr(char* str, char ch) -> find first occurance of char in str
    char ch;
    printf("\nEnter char: ");
    scanf(" %c", &ch);
    printf("strchr: %s", strchr(str, ch));

    // char* strcat(char* s1, char* s2) -> Concatination of 2 strings
    printf("\nstrcat: %s", strcat(str,str2));

    // char* strtok(char* str) -> tokenizes string
    char sep[10];
    printf("\nEnter seperator: ");
    scanf("%s", &sep);
    char* res = strtok(str2,sep);
    while(res!=NULL){
        printf("%s ", res);
        res = strtok(NULL,sep);
    }

    //char* strncpy(char* destination, char* source, int num) -> copies n chars from src to dest
    char s1[10];
    char s2[10];
    int num;
    printf("\nEnter the String: ");
    scanf("%s", s1);
    printf("\nEnter num: ");
    scanf("%d", &num);
    strncpy(s2,s1,num);
    s2[num] = '\0';
    printf("\nstrncpy: %s",s2);

    // char* strncmp(char* s1, char* s2, int num) -> compares given num of chars
    printf("\nEnter the String1: ");
    scanf("%s", s1);
    printf("\nEnter the String2: ");
    scanf("%s", s2);
    printf("\nEnter num: ");
    scanf("%d", &num);;
    printf("\nstrncmp: %d",strncmp(s2,s1,num));

    // char* strrchr(char* s1, char ch) -> gives first occurance of ch from RHS
    printf("\nEnter char: ");
    scanf(" %c", &ch);
    printf("strchr: %s", strrchr(str, ch));

    // int strcasecmp(char* s1, char* s2) -> compares strings irrespective of case
    printf("\nEnter the String1: ");
    scanf("%s", s1);
    printf("\nEnter the String2: ");
    scanf("%s", s2);
    printf("\nstrncmp: %d",strcasecmp(s2,s1));

    // char* strdup(char* str) -> uses malloc to creat a duplicate string
    char new[] = strdup(s1);
    printf("strdup: %s", new);
}