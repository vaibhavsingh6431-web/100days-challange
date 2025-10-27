// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long int binary, onesComplement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        digit = binary % 10;           // extract last bit
        if(digit == 0)
            digit = 1;                 // flip 0 → 1
        else
            digit = 0;                 // flip 1 → 0

        onesComplement = onesComplement + digit * place;
        place = place * 10;            // move to next position
        binary = binary / 10;          // remove last digit
    }

    printf("1's Complement = %ld", onesComplement);

    return 0;
}
