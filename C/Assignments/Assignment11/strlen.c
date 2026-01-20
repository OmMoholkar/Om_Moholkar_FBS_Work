#include<stdio.h>

int myStrLen(char*);

void main(){
    char str[] = "I love my India";
    printf("Length = %d", myStrLen(str));
}

int myStrLen(char* str){
    int i = 0;
    while(str[i]!='\0')
        i++;
    return i;
}

