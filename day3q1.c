//#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // formula to convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // display result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
