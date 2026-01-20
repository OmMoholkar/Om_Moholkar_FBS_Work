#include<stdio.h>
#include<string.h>

int mystrncasecmp(char*, char*, int);

void main(){
    char s1[] = "InDia";
    char s2[] = "India";
    printf("%d", mystrncasecmp(s1,s2,3));
}

int mystrncasecmp(char* s1, char* s2, int n) {
    int i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
        i++;
    }
    if (i == n)
        return 0;

    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else if (s1[i] == '\0')
        return -1;
    else
        return 1;
}