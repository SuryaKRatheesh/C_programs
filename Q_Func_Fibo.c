#include<stdio.h>

// WAP to print n terms of the fibonacci series.

int fib(int n);

int main(){
    int n;

    printf("Enter a no.: ");
    scanf("%d", &n);

    int f = fib(n);
    printf("%d", f);

    return 0;
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("Fib of %d is : %d \n", fibN);
    return fibN;

}