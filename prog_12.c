#include <stdio.h>

// a program to read a character and print its ASCII value.

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Missing: input character

    printf("ASCII value of %c is %d\n", ch, (int)ch);

    return 0;
}

