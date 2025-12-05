#include<stdio.h>

void main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1;j<n;j++)
            if(i==1)
                printf("* ");
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<=n-1; i++){
        if(i==n-1){
            for(int j=1;j<=n-1;j++)
                printf("* ");
        }
        for(int j=i;j<=n-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}