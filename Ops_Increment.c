#include<stdio.h>

int main(){

    // ++1 - Pre increment - Add 1st and then use
    // 1++ - Post increment - Use 1st then add


    // --1 - Pre decrement - Subtract 1st and then use
    // 1-- - Post decrement - Use 1st then subtract

    int i = 1;
    printf("%d \n", i++);
    printf("%d \n", i);

    printf("%d \n", ++i);

    printf("%d \n", i--);
    printf("%d \n", i);

    printf("%d \n", --i);

    return 0;
}