#include<stdio.h>
#include<string.h>

char* myStrCat(char* , char*);

void main(){
    char s1[] = "Hello ";
    char s2[] = "World";
    printf("strcat: %s", myStrCat(s1,s2));
}

char* myStrCat(char* s1, char* s2){
    int i=0, j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i++]=s2[j++];
    }
    s1[i]='\0';
    return s1;
}