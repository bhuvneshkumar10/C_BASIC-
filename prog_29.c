#include <stdio.h>

// Task: Correct the syntax errors and calculate the area of a circle using the formula: pi x r x r.

int main() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    printf("Area is: %f\n", area);

    return 0;
}

