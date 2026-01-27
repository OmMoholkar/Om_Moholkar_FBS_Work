#include<stdio.h>
#include<string.h>

char* strRotate(char*, int);

void main(){
    char str[] = "Hello";
    printf("%s", strRotate(str,4));
}

char* strRotate(char* str, int num){
    int temp;
    for(int i=0; i<num; i++){
        temp = str[strlen(str)-1];
        for(int j=strlen(str)-1; j>=0; j--){
            str[j] = str[j-1];
        }
        str[0] = temp;
    }
    return str;
}
