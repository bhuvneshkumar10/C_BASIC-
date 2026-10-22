#include <stdio.h>
// A program to input three integers and calculate their sum and average

int main() {
    int x, y, z, sum;
    float avg;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);  // Missing: input three integers

    sum = x + y + z;  // Missing: compute sum

    avg = (float)sum / 3;  // Missing: compute average

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

