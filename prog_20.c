#include <stdio.h>  // Missing: For input/output
#include <ctype.h>  // Missing: For character handling

// A program to convert an uppercase letter to lowercase.

int main() {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);

    printf("Lowercase: %c\n", tolower(ch));

    return 0;
}

