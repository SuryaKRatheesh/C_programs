#include<stdio.h>

int main(){

    // For a single character we have to use char and single quotes
    char constant = 'G';

    // For adding a string we have to use [] after the variable name and use double quotes
    char string[] = "Ghost";

    // Integer value can be added using int function and no need of using quotes
    int integer = 07;

    // Decimal values can be inserted using float function and no need of quotes
    float pi = 3.14;


    // A Single Character can be printed using %c 
    printf("Single Character constant = %c \n", constant);

    // For Printing a string %s has to be used
    printf("String is %s \n", string);

    // For Printing an integer %d has to be used
    printf("Integer is %d \n", integer);

    //For printing a Decimal Value %f - Float has to be used
    printf("Value of pi is %f \n", pi);


    return 0;
}