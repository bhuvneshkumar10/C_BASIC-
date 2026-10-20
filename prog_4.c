#include <stdio.h>

//a program to compute the sum of two numbers

int main() {
    int num, anothernum, sum;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("You entered: %d\n", num);  // Missing: print num
    
    printf("Enter another integer: ");
    scanf("%d", &anothernum); //Missing: enter another number
    
    printf("You entered: %d\n", anothernum);  // Missing: print another number
    
    sum = num + anothernum;  //Missing: compute the sum

    printf("Sum= %d\n", sum);  //Missing: print the sum

    return 0;
}
