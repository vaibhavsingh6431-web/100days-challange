//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to num/2
        i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
