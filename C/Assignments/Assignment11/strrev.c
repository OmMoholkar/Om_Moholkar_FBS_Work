#include<stdio.h>
#include<string.h>

char* mystrrev(char*);
void swap(char*,char*);

void main(){
    char str[] = "Hello";
    printf("strrev: %s", mystrrev(str));
}

char* mystrrev(char* str){
    int last = strlen(str);
    for(int i=0; i<last/2;i++){
        swap(&str[i],&str[last-i-1]);
    }
    return str;
}

void swap(char* a, char* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}