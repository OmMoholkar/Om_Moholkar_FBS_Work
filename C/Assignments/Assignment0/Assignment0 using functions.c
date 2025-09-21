#include<stdio.h>

int add(int, int);
double circleArea(int);
double CtoF(int);
void swap(int, int);
int avg(int, int, int, int ,int);
int squ(int);
int cube(int);
void toHrs(int);
int perm(int, int);
double areaTri(int, int);
void result(int, int, int, int ,int);

void main(){
     int a = 50;
     int b = 10;
     int res = add(a,b);
     printf("\nAddition: %d", res);
     double area = circleArea(a);
     printf("\narea of circle: %f", area);
     double temp = CtoF(a);
     printf("\nCelcius to Farhenite: %f", temp);
     swap(a,b);
     printf("\nSwapped values A: %d, B: %d", a,b);
     int av = avg(a,b,22,43,54);
     printf("\nAvg of 5 num: %d", av);
     int square = squ(a);
     printf("\nSquare: %d", square);
     int cub = cube(a);
     printf("\nCube: %d", cub);
     toHrs(120);
     int rect = perm(a,b);
     printf("\nPerimeer of rectangle: %d", rect);
     double tri = areaTri(a,b);
     printf("\nArea of triangle: %f", tri);
     result(10,50,38,42,60);
     getch();
}

int add(int x, int y){
    return x+y;
} 

double circleArea(int x){
    return 3.14*x*x;
}

double CtoF(int x){
       return (x *9/5) + 32;
}

void swap(int x, int y){
    int temp;
     temp = x;
     x = y;
     y = temp;
}

int avg(int a, int b, int c, int d, int e){
    return (a+b+c+d+e)/5;
}

int squ(int x){
    return x*x;    
}

int cube(int x){
    return x*x*x;    
}

void toHrs(int x){
    int hrs = x/60;
    int mins = x%60;
    printf("\n%d hours %d mins", hrs,mins);
}

int perm(int x, int y){
    return 2*x+2*y;    
}

double areaTri(int x, int y){
    return 0.5*x*y;  
}

void result(int a, int b, int c, int d, int e){
    int total = a+b+c+d+e;
    int per = total/500*100;
    printf("\nTotal = %d", total);
    printf("\nPercentage = %d", per);
}


