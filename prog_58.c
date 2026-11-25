#include <stdio.h>

int main()
{
    int i, count;
    char str[30], ch;
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    printf("Enter the a chaacter to count:");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("Occurrence of '%c' = %d\n", ch, count);
    return 0;
}