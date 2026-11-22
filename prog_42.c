#include <stdio.h>
int main()
{
    int product = 1;
    int n;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("Factorial of %d is %d", n, product);
    return 0;
}