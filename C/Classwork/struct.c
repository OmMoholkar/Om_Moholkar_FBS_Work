#include<stdio.h>
struct Student
{
    int rollNo;
    char name[20];
};

typedef struct Employee
{
    int id;
    char name[20];
}Employee;

struct Student storeStudent();
void displayStudent(struct Student);

Employee storeEmp();
void displayEmp(Employee);

void main(){
    struct Student s1,s2;
    s1 = storeStudent();
    s2 = storeStudent();

    displayStudent(s1);
    displayStudent(s2);

    Employee e1;
    e1 = storeEmp();
    displayEmp(e1);
}

struct Student storeStudent(){
    struct Student s;
    printf("\nEnter name of student: ");
    scanf("%s", &s.name);
    printf("Enter roll Number: ");
    scanf("%d", &s.rollNo);
    return s;
}

void displayStudent(struct Student s){
    printf("\nName: %s", s.name);
    printf("\nRoll No: %d\n", s.rollNo);
}

Employee storeEmp(){
    Employee e;
    printf("\nEnter name of emp: ");
    scanf("%s", &e.name);
    printf("Enter id Number: ");
    scanf("%d", &e.id);
    return e;
}
void displayEmp(Employee e){
    printf("\nName: %s", e.name);
    printf("\nId No: %d\n", e.id);
}