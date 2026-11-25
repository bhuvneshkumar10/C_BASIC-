#include <stdio.h>
int main()
{
    int i, found = 0;
    char str[100], ch;
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    printf("Enter the searched character:");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Character is founded");
    }
    else
    {
        printf("character is not founded");
    }
    return 0;
}