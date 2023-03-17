#include<stdio.h>

/*
Initialisation
do {
    perform task
    updation
} while(condition)
*/

int main(){
    int i = 1;
    int j = 4;

    do {
        printf("%d \n", i);
        i++;
    } while(i<=5);

    do {
        printf("%d \n", j);
        j--;
    } while (j >= 1);

    return 0;
}