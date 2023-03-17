#include<stdio.h>

// float convertTemp(float cel);
void convertTemp(float cel);

int main(){
    float cel;

    printf("Enter degree in  CELCIUS: ");
    scanf("%f", &cel);

    convertTemp(cel);
    // float fah = convertTemp(cel);
    // printf("Temp is Fahrenheit is: %f \n", fah);

    return 0;
}

// float convertTemp(float cel){
//     float fah = cel * (9/5) + 32;
//     return fah;
// }

void convertTemp(float cel){
    float fah = cel * (9.0/5.0)  + 32;
    printf("Temp in Fahrenheit is: %f \n", fah);
}