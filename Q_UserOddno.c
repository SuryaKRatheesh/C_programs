#include<stdio.h>

//WAP to keep taking no as input from user until users enter an odd no. 

int main(){
    int n;
    do{
        printf("Enter a no: ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0) {
            break;
        } 
    }while(1);
    printf("Thank You");

    return 0;
}