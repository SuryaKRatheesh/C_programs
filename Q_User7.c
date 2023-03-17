#include<stdio.h>

//WAP to keep taking no as input from user until users enter a no. which is multiple of 7

int main(){
    int n;

    do{
        printf("Enter a no: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if( n % 7 == 0){
            break;
        }
    }while(1);
    printf("Thank You");

    return 0;
}