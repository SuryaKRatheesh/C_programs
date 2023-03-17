#include<stdio.h>
#include<math.h>

int main(){

    int a = 7;
    int b = 6;

    a += b;  // a = a + b
    printf("%d \n", a);

    a -= b;  // a = a - b
    printf ("%d \n", a);

    a *= b;  // a = a * b
    printf ("%d \n", a);

    a /= b;  // a = a / b
    printf ("%d \n", a);

    a %= b;  // a = a % b
    printf ("%d \n", a);


    return 0;
}