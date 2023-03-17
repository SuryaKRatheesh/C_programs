#include<stdio.h>

//WAP to print Factorial of a number n.

int main(){
    int n;
    int fac = 1;

    printf("Enter a no: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        fac = fac*i;
    }
    printf("Factorial is %d \n", fac);
}