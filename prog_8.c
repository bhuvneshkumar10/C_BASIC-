#include <stdio.h>

// a program to input two integers and swap their values.

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);  // Missing: input a and b

    temp = a;
    a = b;   // Missing: assign b to a
    b = temp;   // Missing: assign temp to b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

