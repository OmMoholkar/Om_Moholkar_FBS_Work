#include<stdio.h>

typedef struct Employee{
    int id;
    char name[20];
}Employee;

void storeEmp(Employee[], int);
void displayEmp(Employee[], int);

void main(){
    Employee earr[3];
    storeEmp(earr,3);
    displayEmp(earr,3);
}

void storeEmp(Employee *earr, int size){
    for(int i=0; i<size; i++){
        printf("\nEnter name of emp %d: ", i+1);
        scanf("%s", earr[i].name);
        printf("Enter id Number: ");
        scanf("%d", &earr[i].id);
    }
}
void displayEmp(Employee *earr, int size){
    for(int i=0; i<size; i++){
        printf("\nId = %d, Name = %s", earr[i].id, earr[i].name);
    }
}