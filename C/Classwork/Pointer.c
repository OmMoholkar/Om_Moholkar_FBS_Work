#include<stdio.h>

void swap(int*, int*);
int getCount(int*);
void ptrSize();
void ptrAri();
void ptrIncr();

void main(){
    int a = 10;
    int b = 12345;
    int* x = &a;
    printf("a-> %d \nz-> %d \nx-> %d", &a, &b, x);
    swap(&a,&b);
    printf("\na = %d\nb = %d", a,b);
    printf("\ncount = %d", getCount(&a));
    ptrSize();
    ptrAri();
    ptrIncr();
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getCount(int* num){
    int count = 0;
    while(*num!=0){
        *num = *num/10;
        count++;
    }
    return count;
}

void ptrSize(){
    printf("\nSize of int %d\n", sizeof(int));
    printf("Size of float %d\n", sizeof(float));
    printf("Size of char %d\n", sizeof(char));
    printf("Size of double %d\n", sizeof(double));
    printf("Size of void %d\n\n", sizeof(void));

    printf("Size of int %d\n", sizeof(int*));
    printf("Size of char %d\n", sizeof(char*));
    printf("Size of float %d\n", sizeof(float*));
    printf("Size of double %d\n", sizeof(double*));
    printf("Size of void %d\n\n", sizeof(void*));
}

void ptrAri(){
    int a = 10;
    printf("Addres of A = %u\n\n", &a);

    printf("Int ptr increments by 4\n");
    int* ptr = &a;
    printf("ptr+0 = %u\n",ptr+0);
    printf("ptr+1 = %u\n",ptr+1);
    printf("ptr+2 = %u\n",ptr+2);
    printf("ptr+3 = %u\n",ptr+3);
    printf("ptr+4 = %u\n",ptr+4);
    printf("ptr+5 = %u\n\n",ptr+5);

    printf("char ptr increments by 1\n");
    char* cptr = &a;
    printf("ptr+0 = %u\n",cptr+0);
    printf("ptr+1 = %u\n",cptr+1);
    printf("ptr+2 = %u\n",cptr+2);
    printf("ptr+3 = %u\n",cptr+3);
    printf("ptr+4 = %u\n",cptr+4);
    printf("ptr+5 = %u\n\n",cptr+5);

    printf("float ptr increments by 4\n");
    float* fptr = &a;
    printf("ptr+0 = %u\n",fptr+0);
    printf("ptr+1 = %u\n",fptr+1);
    printf("ptr+2 = %u\n",fptr+2);
    printf("ptr+3 = %u\n",fptr+3);
    printf("ptr+4 = %u\n",fptr+4);
    printf("ptr+5 = %u\n\n",fptr+5);

    printf("double ptr increments by 8\n");
    double* dptr = &a;
    printf("ptr+0 = %u\n",dptr+0);
    printf("ptr+1 = %u\n",dptr+1);
    printf("ptr+2 = %u\n",dptr+2);
    printf("ptr+3 = %u\n",dptr+3);
    printf("ptr+4 = %u\n",dptr+4);
    printf("ptr+5 = %u\n\n",dptr+5);
}

void ptrIncr(){
    int a = 10;
    printf("A before incr = %d\n", a);
    int* ptr = &a;
    (*ptr)++;    //increment
    printf("A after incr = %d\n", a);
}