#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The given input is upper case");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The given input is lower case");
    }
    else
    {
        printf("Enter valid input");
    }
    return 0;
}