#include<stdio.h>

int main(){

    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks < 30 ){
        printf("C Grade");
    }

    else if (marks >= 30 && marks < 70) {
        printf("B grade");
    }

    else if (marks >= 70 && marks < 90) {
        printf("A Grade");
    }

    else if (marks >= 90 && marks <= 100) {
        printf("A+ Grade");
    }

    else{
        printf ("Enter marks from 0-100");
    }

    return 0;
}