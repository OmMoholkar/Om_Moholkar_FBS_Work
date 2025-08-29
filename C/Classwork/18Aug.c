// int main(){
//     int a = 10,b,c;
//     b = a++;
//     // b = ++a;
//     c = printf("%d%d\n", a, b);
//     printf("c = %d\n", c);
// }

// int main() {
//     int a = 10;
//     int b = a++;
//     int c = ++a;
//     int d = b++;
//     printf("%d %d %d %d\n", a, b, c, d); // 12 11 12 10
// }

// int main(){
//     int a = 9;
//     int b = a++;
//     int c = a == b;
//     printf("%d %d %d", a, b, c); // 10 9 0
// }

int main() {
    int a = 1;
    int b = printf("%d", a++); // 1
    int c = printf("%d", ++b); // 2
    printf("%d %d", b, c); // 2 1
}
