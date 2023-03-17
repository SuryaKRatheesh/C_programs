#include<stdio.h>

// WAP to write 2 funcs - one to print "Hello" & second to print "Good Bye"

void printHello();
void printBye();

int main(){
    printHello();
    printBye();

    return 0;
}

void printHello(){
    printf("Hello \n");
}

void printBye(){
    printf("Good Bye \n");
}