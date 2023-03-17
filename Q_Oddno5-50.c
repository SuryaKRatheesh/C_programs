#include<stdio.h>

// WAP to print all odd no. from 5 to 50

int main(){

    for(int i=5; i <=50; i++){
        if (i % 2 == 0){
            continue;
        }
        printf("%d \n", i);
    }
    printf("Over");

    return 0;
}