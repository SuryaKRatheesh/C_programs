#include<stdio.h>
#include<math.h>

//WAP to print the area of a square, rectangle and circle.

void areaSq(int a, int area);
void areaRec(int ar, int l, int b);
float areaCir(int are, int r);

int main(){
    int area, ar, are;
    int a, l, b, r;
    char ch;

    printf("Circle(C), Square(S), Rectangle(R): ");
    scanf("%c", &ch);

    if(ch == 'C'){
        printf("Enter Radius");
        scanf("%d", &r);
        printf("Area is %f \n",areaCir(are, r));
    }

    else if(ch == 'S'){
        printf("Enter Side\n");
        scanf("%d", &a);
        areaSq(a, area);
    }

    else if(ch == 'R'){
        printf("Enter length \n");
        scanf("%d", &l);
        printf("Enter Breadth \n");
        scanf("%d", &b);
        areaRec(ar, l, b);
    }

    else{
        printf("Enter Valid selection");
    }

    return 0;

}

void areaSq(int a, int area){
    area = pow(a,2);
    printf("Area is %d \n", area);
}

void areaRec(int ar, int l, int b){
    ar = l * b;
    printf("Area is %d \n", ar);
}

float areaCir(int are, int r){
    return 3.14*r*r;
}