#include<stdio.h>
#include<string.h>

int myStrCmp(char*, char*);

void main(){
    char s1[] = "Ingia";
    char s2[] = "India";
    printf("%d", myStrCmp(s1,s2));
}

int myStrCmp(char* s1, char* s2){
    int i=0;
    if(strlen(s1)>strlen(s2))
        return 1;
    else if(strlen(s1)<strlen(s2))
        return -1;
    else{
        while(s1[i]!='\0'){
            if(s1[i]>s2[i])
                return 1;
            else if(s1[i]<s2[i])
                return -1;
            i++;
        }
        return 0;
    }
}