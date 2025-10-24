// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result = %d", (int)num1 % (int)num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}
