#include <stdio.h>  // Missing: For input/output
#include <math.h>  // Missing: For sqrt()

// A program to calculate the square root of a number.

int main() {
    double x, result;

    printf("Enter a number: ");
    scanf("%lf", &x);

    result = sqrt(x);

    printf("Square root = %.2f\n", result);

    return 0;
}

