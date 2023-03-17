#include<stdio.h>
#include<math.h>

int main(){

    /* 
    '&&' Operator - When we give two statements -- For the whole statement to be true, Both the sub statements 
    should be true
    */
   printf("%d \n", 3>2 && 5>4);
   printf("%d \n", 10>6 && 7<3);


    /*
    '||' operator - If any one of the given statements are true then, Final answer will also be true.     
    */
   printf("%d \n", 10>6 || 7<3);
   printf("%d \n", 5>6 || 7<3);


    /*
    '!' operator - If a statement is true, it will show false 
    */
    printf("%d \n", !(3<4 && 3<5));
    printf("%d \n", !(4<3 || 5<3));

   return 0;
}