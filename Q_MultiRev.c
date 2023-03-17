#include<stdio.h>

//WAP to print reverse of the table for a number n.

int main(){
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Reverse Table is \n");

    for(int i = 10; i>=1; i--){
        printf("%d \n", n*i);
    }
    printf("Thank You");

    return 0;
}