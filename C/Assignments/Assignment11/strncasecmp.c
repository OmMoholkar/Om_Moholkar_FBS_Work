#include<stdio.h>
#include<string.h>

int mystrncasecmp(char*, char*, int);

void main(){
    char s1[] = "India";
    char s2[] = "inDonasia";
    printf("%d", mystrncasecmp(s1,s2,3));
}

int mystrncasecmp(char* s1, char* s2, int n) {
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 > c2)
            return 1;
        else if (c1 < c2)
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