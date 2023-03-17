#include<stdio.h>

// WAP to print all no. from 1 to 10 except 6

int main(){

    for(int i=1; i<=10; i++){
        if (i == 6){
            continue;
        }
        printf("%d \n", i);
    }
    printf("Thank You");

    return 0;
}