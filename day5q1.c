// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include<math.h>
int main() {
    float p, r, t, si, ci;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100), t)) - p;

    printf("Simple Interest = %.f\n", si);
    printf("Compound Interest = %.f\n", ci);

    return 0;
}
