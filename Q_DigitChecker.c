#include <stdio.h>
#include <ctype.h>

/* C program that checks if a given character is a digit or not using the isdigit() function from the ctype.h 
library:
*/


int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }

    return 0;
}
