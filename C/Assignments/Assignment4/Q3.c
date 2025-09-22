#include<stdio.h>

void main() {
    int n,sum=0;

    printf("Enter the range: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d ",i);
    }
}
