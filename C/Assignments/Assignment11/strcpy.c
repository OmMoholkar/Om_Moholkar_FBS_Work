#include<stdio.h>

char* myStrCpy(char*, char*);

void main(){
    char s1[] = "Hello World";
    char s2[20];
    printf("S1: %s\nS2: %s", s1, myStrCpy(s2,s1)); 
}

char* myStrCpy(char* s2, char* s1){
    int i = 0;
    while(s1[i]!='\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return s2;
}