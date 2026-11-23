#include<stdio.h>
int main(){
    char str[6];
    printf("Enter a string:");
    // scanf("%s", str);

    for(int i=0; i<6; i++){
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5]='\0';
    printf("The string is: %s", str);
    return 0;
}