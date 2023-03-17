#include<stdio.h>

int main (){

    /* SYNTAX: for(initialisation; condition; updation) {
        perform task;
    }

    If me miss any of the 3 conditions it will go infinite and fill system memory 
    */

   for(int i=1; i<=5; i=i+1){
        printf("%d \n", i );
   }


    for(char ch = 'a'; ch <= 'z'; ch++){
        printf("%c \n", ch);
    }


    for(float f = 1.00; f <= 5.00; f++){
            printf("%f \n", f);
    }
   return 0;
}