// Write a program to check if a number is an Armstrong number.

 #include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the sum of nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
