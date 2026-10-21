#include <stdio.h>

// a program to convert temperature from Fahrenheit to Celsius.
// Formula: C = (F - 32) × 5/9

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);  // Missing: read input

    celsius = (fahrenheit - 32) * 5/9;  // Missing: formula

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

