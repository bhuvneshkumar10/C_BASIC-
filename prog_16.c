#include <stdio.h>

// a program to input your name and age, then print in a formatted sentence.

int main() {
    char name[30];
    int age;

    printf("Enter your name and age: ");
    scanf("%29s %d", name, &age);  // Missing: input name and age

    printf("Hello, my name is %s and I am %d years old.\n", name, age);  // Missing: output formatted sentence

    return 0;
}

