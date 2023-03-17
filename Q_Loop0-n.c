#include<stdio.h>

int main(){
    int j=0;
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    //WHILE LOOP
    while(j <= n){
        printf("%d \n", j);
        j++;
    }

    // FOR LOOP
    for(int k=0; k<=n; k++){
        printf("%d \n", k);
    }

    return 0;
}