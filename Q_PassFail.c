#include<stdio.h>

int main(){
    int marks;
    int rno;

    printf("Enter Rollno ");
    scanf("%d", &rno);

    printf("Enter Marks (Out of 100): ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100) {
        printf("PASSED");
    }

    else if (marks <= 30) {
        printf("FAILED");
    }

    else {
        printf("Enter marks out of 100");
    }

    // marks <=30 ? printf("FAIL") : printf("PASSED");

    return 0;
}