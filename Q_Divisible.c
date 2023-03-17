#include<stdio.h>
#include<math.h>

// Write a program to check if a no is divisible by 2 or not

int main(){
    int a; 

    printf("Enter a no.");
    scanf("%d", &a);

    printf("%d", a % 2 == 0);

    return 0;
}