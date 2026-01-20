#include<stdio.h>

char* mystrstr(char*, char*);

void main(){
    char str[] = "Hello World";
    char sub[] = "World";
    printf("strstr: %s", mystrstr(str, sub));

}

char* mystrstr(char* str, char* substr) {
    int i, j;

    if (*substr == '\0')
        return str;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (str[i + j] == substr[j] && substr[j] != '\0') {
            j++;
        }

        if (substr[j] == '\0') {
            return &str[i];
        }
    }

    return NULL;
}