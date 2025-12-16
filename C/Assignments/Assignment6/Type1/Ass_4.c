#include<stdio.h>

void arms();
void prime();
void perfect();
void strong();
void program();

void main(){
    arms();
    prime();
    perfect();
    strong();
    program();
}

void arms(){
    int n = 1000, num, rem, ams;
    for(int i=1;i<=n;i++){
        num = i;
        ams = 0;
        while(num>0){
            rem = num%10;
            ams = ams + rem*rem*rem;
            num/=10;
        }
        if(i==ams)
            printf("%d ",i);
    }
    printf("\n");
}
void prime(){
    int n=100,flag;
    for(int i=2;i<=n;i++){
        flag = 1;
        for(int j=2; j<=i/2;j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
    printf("\n");
}
void perfect(){
    int n=10000, sum;
    for(int i=1;i<=n;i++){
        sum = 0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i)
            printf("%d ",i);
    }
    printf("\n");
}
void strong(){  
    int n=100000;
    int num,rem,fact,sum;
    for(int i=1;i<=n;i++){
        num = i;
        sum = 0; 
        while(num>0){ //145
            rem = num%10; //1
            fact = 1;
            for(int j=2; j<=rem; j++)
                fact *= j;
            sum = sum + fact; //120+24+1
            num/=10;
        }
        if(sum==i)
            printf("%d ",i);
    }
    printf("\n");
}
void program(){
    int choice,num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    do{
        printf("\n--------MENU--------");
        printf("\n1. Even Odd");
        printf("\n2. Prime");
        printf("\n3. Palindrome");
        printf("\n4. Positive, Negative or 0");
        printf("\n5. Reverse");
        printf("\n6. Sum of digits");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice==1){
            num%2==0 ? printf("\n%d is EVEN\n",num) : printf("\n%d is ODD\n",num);
        }
        else if(choice==2){
            int flag = 1;
            for(int i=2;i<=num/2;i++){
                if(num%i==0){
                    flag = 0;
                    break;
                }
            }
            flag==1 ? printf("\n%d is Prime\n",num) : printf("\n%d is Not Prime\n",num);
        }
        else if(choice==3){
            int rem,rev=0;
            int temp = num;
            while(temp>0){
                rem=temp%10;
                rev = rev*10+rem;
                temp/=10;
            }
            num==rev ? printf("\n%d is Palindrome\n",num) : printf("\n%d is Not Palindrome\n",num);
        }
        else if(choice==4){
            num==0 ? printf("\nNumber is Zero\n") : num>0 ? printf("\nPositive\n") : printf("\nNegative\n");
        }
        else if(choice==5){
            int rem,rev=0;
            int temp = num;
            while(temp>0){
                rem=temp%10;
                rev = rev*10+rem;
                temp/=10;
            }
            printf("\nReverse: %d\n",rev);
        }
        else if(choice==6){
            int rem,sum=0;
            int temp = num;
            while(temp>0){
                rem=temp%10;
                sum = sum+rem;
                temp/=10;
            }
            printf("\nSum of digits is %d\n", sum);
        }
        else if(choice == 7)
            break;
        else
            printf("\nEnter valid choice.\n");

    } while(1);
}
