#include <stdio.h>

//What is the error in this program?

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0/5.0) * celsius + 32.0;
    printf("Temperature in Fahrenheit is: %f\n", fahrenheit);

    return 0;
}

