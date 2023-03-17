#include<stdio.h>

int sum(int a, int b);
void printTable(int n);

int main(){
    int a, b;
    int n;
    printf("Enter 1st no: ");
    scanf("%d", &a);
    printf("Enter 2nd no: ");
    scanf("%d", &b);

    printf("Enter no for multiplication table: ");
    scanf("%d", &n);

    int s = sum(a,b);
    printf("Sum is %d \n", s);

    printTable(n); // argument/ actual parameter

    return 0;
}

int sum(int a, int b){
    return a + b;
}

void printTable(int n){ // parameter/ formal parameter
    printf("Table is \n");
    for(int i = 1; i <= 10; i++){
        printf("%d \n", n*i);
    }
}