#include<stdio.h>

void main() {
    int n, flag;

    printf("Enter the range: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++){  
        flag = 1;              
        for(int j=2; j<=i/2; j++){
            if(i % j == 0){
                flag = 0;      
                break;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
}
