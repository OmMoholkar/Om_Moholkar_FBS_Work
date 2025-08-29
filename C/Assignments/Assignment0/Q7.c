#include<stdio.h>

void main(){
     int time = 120;
     int hrs = time/60;
     int mins = time%60;
     printf("%d hours %d mins", hrs,mins);
     getch();
}
