#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n", 1 - (n % 2));

    return 0;
}
