#include <stdio.h>

// a program to convert temperature from Celsius to Fahrenheit.
// Formula: F = C × 9/5 + 32

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);  // Missing: read input

    fahrenheit = celsius * 9/5 + 32;  // Missing: formula

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

