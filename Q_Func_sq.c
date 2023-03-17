#include<stdio.h>
#include<math.h>

//WAP to print the square of no using library func.

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int po = pow(n,2);

    printf("Square is %d \n", po);

    return 0;
}