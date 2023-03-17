#include<stdio.h>

int main(){
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    // SYNTAX: Condition? Do something if TRUE : Do Something if FALSE

    age >= 18 ? printf("Adult"):printf("Young");

    return 0;
}