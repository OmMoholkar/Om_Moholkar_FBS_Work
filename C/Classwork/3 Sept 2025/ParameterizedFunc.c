#include<stdio.h>
#include<conio.h>

void fun1(int, int, int, char, double, int);
void fun2(char, int, double, char, char);
void fun3(int, double, int, double);

void main(){
     int a = 10,b = 20,c;
     char ch = 'x';
     double d = 10.25;
     
     fun1(a,b,c+2,ch,d,10+20);
     fun2('a',b+3,c+d,ch,'y');
     fun3(a+b+c,d+10,3*5,5.2);   
     
     getch();
}

void fun1(int a, int b, int c, char ch, double d, int z){}
void fun2(char a, int b, double c, char d, char e){}
void fun3(int a, double b, int c, double d){}
