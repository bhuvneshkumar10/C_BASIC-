#include <stdio.h>

// a program to read a character and print it 5 times in a row.

int main() {
    char symbol;

    printf("Enter a character: ");
    scanf(" %c", &symbol);  // Missing: input character

    printf("Pattern: ");
    printf("%c %c %c %c %c\n", symbol, symbol, symbol, symbol, symbol);  // Missing: correct variable and format

    return 0;
}

