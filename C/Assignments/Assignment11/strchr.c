#include<stdio.h>

char* mystrchr(char*, char);

void main(){
    char str[] = "India";
    printf("strchr: %s", mystrchr(str,'c'));
}

char* mystrchr(char* str, char ch){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch)
            return &str[i];
        i++;
    }
    return NULL;
}