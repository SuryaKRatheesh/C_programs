#include<stdio.h>
#include<math.h>

// WAP to print recursive func of sum of n terms.

int sum(int n);

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    
    printf("Sum is %d \n",sum(n));
    return 0;
}

// sum of n natural no = sum(n-1) + n
int sum(int n){
    if (n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sum(n-1) + n;
    return sumN;
}