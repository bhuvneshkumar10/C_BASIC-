#include <stdio.h>
int main()
{
    int product = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
   while(n>=1)
    {
        product *= n;
        n--;
    }
    printf("Factorial of %d is %d", n, product);
    return 0;
}