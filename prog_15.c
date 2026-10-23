#include <stdio.h>

// a program to read exactly the first 5 characters of a string.

int main() {
    char name[10];

    printf("Enter your name: ");
    scanf("%5s", name);  // Missing: use field width

    printf("First 5 characters: %5s\n", name);

    return 0;
}

