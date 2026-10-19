#include <stdio.h>

//a program to input two integers and print their sum.
int main() {
    int a, b, sum;
    
    printf("Enter two integers: ");
    scanf("%d" , &a);  // Missing: read value of a
    scanf("%d", &b);  // Missing: read value of b

    sum = a + b;  // Missing: compute sum
    
    printf("Sum = %d\n", sum);  // Missing: print sum
    
    return 0;
}

