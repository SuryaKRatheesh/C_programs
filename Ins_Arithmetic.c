#include<stdio.h>
#include<math.h>

int main(){
    int a =7, b=2;
    int sum = a + b;
    int pro = a * b;
    int dif = a - b;
    int quo = a / b;
    int power = pow(a,b); 
    int mod = a % b;

    /* 
    Associativity rule - When operations of same precedence comes together, operations are caried  from left to right.
    In this case 4*3 is done 1st and then it is divided by 6    
    */
    int as = 4*3/6*2;

    printf("%f \n", 2.0/3);
    printf("%f \n", 4.0 + 3);


    
    printf("Sum is : %d \n", sum);
    printf("Difference is : %d \n", dif);
    printf("Product is : %d \n", pro);
    printf("Quotient is : %d \n", quo);
    printf("Power is : %d \n", power);
    printf("Modular operator is : %d \n", mod);
    printf("Associative rule is: %d \n",as);


    // Questions

    int c = 5*2 - 2*3;
    int d = 5*2 / 2*3;
    int e = 5*(2/2)*3;
    int f = 5+2 / 2*3;

    printf("%d \n",c);
    printf("%d \n",d);
    printf("%d \n",e);
    printf("%d \n",f);


    return 0;
}