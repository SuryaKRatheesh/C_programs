#include<stdio.h>

int main(){

    int age;
    printf("Enter Age: \n");
    scanf("%d", &age);

    if (age >= 18){
        printf("Adult \n");
        printf("They can vote \n");
        printf("They can drive \n");
    }

    else if (age > 13 && age <18) {
        printf("Teenager \n");
    }

    else {
        printf("Child \n");
    }

    printf("Thank You \n");

    return 0;
}