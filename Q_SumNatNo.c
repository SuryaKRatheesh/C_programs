#include<stdio.h>

int main (){
    int n;
    int sum = 0;

    printf("Enter a No.: ");
    scanf("%d", &n);

    // for(int i=1; i <= n; i++){
    //     sum = sum + i; // sum += 1
    //     printf("Sum is %d \n", sum);
    // }

    // for(int i=n; i<=n && i>0; i--){
    //     printf("%d \n", i);
    // }


    for(int i=1, j=n; i<=n && j>=0; i++, j--){
        sum = sum + i;
        printf("%d \n", j);
    }
    printf("Sum is %d \n", sum);

    
    return 0;
}