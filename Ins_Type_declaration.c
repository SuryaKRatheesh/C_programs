#include<stdio.h>

int main(){

    // Assigning value for a
    int a = 22;

    // Assigning value of a into b
    int b = a;

    // Assigning value for c and overwriting value of b
    int c = b = 6;

    // Assigning a value for d and entering a new variable
    int d = 1, e;


    int OldAge = 22;
    int years = 2;
    int NewAge = OldAge + years;
    printf("NewAge is: %d \n", NewAge);

    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d \n", d);
    
    return 0;

}