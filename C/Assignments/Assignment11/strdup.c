#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mystrdup(char*);

void main(){
    char s1[] = "Hello World";
    // char s2[20];
    printf("S1: %s\nS2: %s", s1, mystrdup(s1)); 
}

char* mystrdup(char* s1){
    int len = strlen(s1)+1;
    char* s2 = (char*)malloc(sizeof(char)*len);
    int i = 0;
    while(s1[i]!='\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return s2;
}