#include<stdio.h>

void swap(int*, int*);

void main(){
    int a = 10;
    int b = 1000;
    int* x = &a;
    printf("a-> %d \nz-> %d \nx-> %d", &a, &b, x);
    swap(&a,&b);
    printf("\na = %d\nb = %d", a,b);
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}