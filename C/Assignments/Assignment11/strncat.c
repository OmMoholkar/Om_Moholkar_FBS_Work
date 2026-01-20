#include<stdio.h>
#include<string.h>

char* mystrncat(char* , char*, int);

void main(){
    char s1[20] = "Hello ";
    char s2[] = "World";
    printf("strcat: %s", mystrncat(s1,s2,3));
}

char* mystrncat(char* s1, char* s2, int num){
    int i=0, j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(j<num && s2[j]!='\0'){
        s1[i++]=s2[j++];
    }
    s1[i]='\0';
    return s1;
}