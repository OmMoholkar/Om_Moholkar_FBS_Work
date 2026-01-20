#include<stdio.h>
#include<string.h>

int mystrcasecmp(char*, char*);

void main(){
    char s1[] = "Ingia";
    char s2[] = "indiA";
    printf("%d", mystrcasecmp(s1,s2));
}

int mystrcasecmp(char* s1, char* s2){
    int i=0;
    if(strlen(s1)>strlen(s2))
        return 1;
    else if(strlen(s1)<strlen(s2))
        return -1;
    else{
        while(s1[i]!='\0'){
            char c1 = tolower(s1[i]);
            char c2 = tolower(s2[i]);
            if(c1>c2)
                return 1;
            else if(c1<c2)
                return -1;
            i++;
        }
        return 0;
    }
}