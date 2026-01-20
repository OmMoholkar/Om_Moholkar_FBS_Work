#include<stdio.h>

char* mystrupr(char* );

void main(){
    char str[] = "Hello World";
    printf("strupr: %s", mystrupr(str));
}

char* mystrupr(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i]-32;
        i++;
    }
    return str;
}