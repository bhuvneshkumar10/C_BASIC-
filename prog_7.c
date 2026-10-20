#include <stdio.h>

// a program to calculate and print the area of a rectangle.
// Formula: Area = length x width

int main() {
    float length, width, area;
    
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);  // Missing: input length and width

    area = length * width;  // Missing: compute area

    printf("Area = %.2f\n", area);  // Missing: output result
    
    return 0;
}

