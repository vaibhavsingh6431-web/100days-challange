//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);
       temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
