#include <stdio.h>

// a program to input an integer and print it padded to 5 digits with leading zeros.

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);  // Missing: input integer

    printf("Padded number: %05d\n", num);  // Missing: Fill with format specifier

    return 0;
}

