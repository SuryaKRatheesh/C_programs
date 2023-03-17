#include<stdio.h>

int main(){

    int A,B;
    char p[] = "GHOST";

    printf("Enter a value for A \n");
    scanf("%d", &A);

    printf("Enter a Value for B \n");
    scanf("%d", &B);


    printf("The Value of A is %d \n",A);
    printf("The Value of B is %d \n",B);

    printf("Name is %s \n", p);

    int sum = A+B;
    printf("Sum of A and B is %d \n", sum);

    int dif = A-B;
    printf("Difference between A and B is %d \n", dif);

    int pro = A*B;
    printf("Product of A and B is %d \n", pro);

    float quo = A/B;
    printf("Quotient of A and B is %f \n", quo);

    return 0; 
}