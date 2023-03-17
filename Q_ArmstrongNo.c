#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // calculate result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if num is Armstrong number or not
    if ((int)result == num) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;

    /*
    The program first prompts the user to input an integer.

    The number of digits of the input integer is then calculated and stored in n using a loop that divides the 
    integer by 10 until it becomes 0.

    The original input integer is stored in originalNum to be used later.

    A while loop is used to calculate the sum of each digit raised to the power of n.

    The pow function is used to raise the digit to the power of n.

    If the calculated result is equal to the original input integer, it is an Armstrong number, and the program 
    prints that out. Otherwise, it is not an Armstrong number, and the program prints that out.
    
    Note: An Armstrong number is a number that is equal to the sum of its own digits raised to the power of the 
    number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
    */
}
