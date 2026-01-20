#include<stdio.h>

char* mystrlwr(char* );

void main(){
    char str[] = "Hello World";
    printf("strupr: %s", mystrlwr(str));
}

char* mystrlwr(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i]+32;
        i++;
    }
    return str;
}