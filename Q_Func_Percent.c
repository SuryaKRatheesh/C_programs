#include<stdio.h>

// WAP to calculate percentage of a student using function.

float percent(float m, float s, float sc);

int main(){
    float s, m, sc;
    char nam[100];

    printf("Enter Name of student: ");
    scanf("%s", &nam);

    printf("Enter marks of Maths: \n");
    scanf("%f", &m);
    printf("Enter marks of Sanskrit: \n");
    scanf("%f", &s);
    printf("Enter marks of Science: \n");
    scanf("%f", &sc);
    
    float perc = percent(m, s, sc);
    
    printf("Name of Student: %s \n", nam);
    printf("Marks in Maths: %f \n", m);
    printf("Marks in Science: %f \n", sc);
    printf("Marks in Sanskrit: %f \n", s);

    printf("Percentage: %f \n", perc);

    return 0;
}

float percent(float m, float s, float sc){
    float per = ((m + s + sc)/300) * 100;
    return per;
}
