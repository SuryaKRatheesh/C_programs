#include<stdio.h>

// WAP to print the sum of no. b/w 5 and 50

int main(){
    int sum = 0;

    for(int i=5; i<=50; i++){
        sum = sum + i; // sum += i
    }
    printf("Sum is %d \n", sum);

    return 0;
} 