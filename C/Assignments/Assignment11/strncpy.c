#include<stdio.h>

char* mystrncpy(char* , char*, int);

void main(){
    char s1[] = "HelloWorld";
    char s2[10];
    printf("strcpy: %s", mystrncpy(s2,s1,7));
}

char* mystrncpy(char* s1, char* s2, int num){
    int i=0;
    for(;i<num; i++)
        s1[i]=s2[i];
    s1[i] = '\0';
    return s1;
}