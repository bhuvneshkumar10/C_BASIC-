#include <stdio.h>
char *slice(char str[], int m, int n)
{
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    *ptr2 = '\0';
    return ptr1;
}

int main()
{
    char str[] = "Hello world";
    printf("The slice string is: %s\n", slice(str, 1, 6));
    return 0;
}