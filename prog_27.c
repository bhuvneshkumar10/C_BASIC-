#include <stdio.h>

//Right-Angled Triangle of Stars

/*
    Title: ______________________
    Filename:____________________
    Run Command:_____________________
    Author: _____________________
    Description: __________________________
    Date: _______________________
*/

int main() {
    int i, j, rows;


    printf("Enter number of rows: ");
    scanf("%d", &rows);     // Missing: Ask user for number of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* "); // Missing: Print a star followed by a space
        }
        printf("\n");
    }

    return 0;
}

