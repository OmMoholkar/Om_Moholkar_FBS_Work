#include<stdio.h>

typedef struct Student{
    int rollNo;
    char name[10];
}Student;

void store(Student*);
void display(Student*);

void main(){
    Student s1,s2,s3;
    store(&s1);
    store(&s2);
    store(&s3);

    display(&s1);
    display(&s2);
    display(&s3);
}

void store(Student *s){
    printf("\nEnter Student roll num and name: ");
    scanf("%d", &s->rollNo);
    scanf("%s", &s->name);
}

void display(Student *s){
    printf("\nRoll Num = %d, Name = %s", s->rollNo, s->name);
}