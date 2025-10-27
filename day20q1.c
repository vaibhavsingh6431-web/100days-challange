// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, rem, product = 1;
    int Odd = 0;  // to check if there are any odd digits

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;  // get last digit
        if(rem % 2 != 0) {  // check if odd
            product = product * rem;
            Odd = 1;
        }
        num = num / 10;  // remove last digit
    }

    if(Odd)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits found.");

    return 0;
}
