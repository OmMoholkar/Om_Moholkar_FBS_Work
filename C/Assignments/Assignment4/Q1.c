#include<stdio.h>

void main(){
    int n,num,rem;
    printf("Enter the range: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        num = i;
        int ams = 0;
        while(num>0){
            rem = num%10;
            ams = ams+rem*rem*rem;
            num/=10;
        }
        if(i==ams)
            printf("%d ", i);
    }
}