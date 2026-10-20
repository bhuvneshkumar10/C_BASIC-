#include <stdio.h>

// a program that reads a character and prints it.

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Missing: read character

    printf("You entered: %c\n", ch);  // Missing: print character

    return 0;
}

