//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, count = 0, power = 1, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;  // get last digit

    // find first digit and count digits using for loop
    for (; temp >= 10; temp /= 10) {
        count++;
        power *= 10;   // find 10^(count)
    }
    firstDigit = temp;  // remaining number is first digit

    // swap first and last digits
    swappedNum = lastDigit * power + (num % power) / 10 * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
