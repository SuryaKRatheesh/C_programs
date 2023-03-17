#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Table is \n");

    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }

    return 0;
}