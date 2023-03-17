#include<stdio.h>
#include<math.h>

// WAP to print the AVERAGE of three no.

int main(){
    int a;
    int b;
    int c;

    printf("Enter Three no. \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("Sum: %d \n", a+b+c);
    printf("Average: %d \n", (a+b+c)/3);

    return 0;

}