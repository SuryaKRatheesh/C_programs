#include<stdio.h>

int main(){

    int no;
    printf("Enter a no: ");
    scanf("%d", &no);

    if (no >= 1){
        printf("Natural No.");
    }

    else {
        printf("Not a natural no.");
    }

    return 0;
}