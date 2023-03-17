#include<stdio.h>

int main(){

    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }

    else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }

    else {
        printf("Enter Valid Character");
    }

    return 0;
}
