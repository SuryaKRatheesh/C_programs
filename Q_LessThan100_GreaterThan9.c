#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Enter a no:");
    scanf("%d", &x);

    printf("%d", x>9 && x<100);

    return 0;
}