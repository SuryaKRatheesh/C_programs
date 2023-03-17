#include<stdio.h>

// WAP that prints "Namaste" if user is Indian & "Bonjour" if user is French.

void namaste();
void bonjour();

int main(){

    char nam;
    printf("Enter Nationality - I(Indian) or  F(French): ");
    scanf("%c", &nam);

    if (nam == 'I'){
        namaste();
    }

    else if (nam == 'F'){
        bonjour();
    }

    else {
        printf("Enter Valid Nationality");
    }

    return 0;
}

void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("Bonjour \n");
}