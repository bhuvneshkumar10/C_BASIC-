#include <stdio.h>

//a C program that takes a float as input and prints it.

int main() {
    float temperature;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("You entered: %.1f\n", temperature);

    return 0;
}

