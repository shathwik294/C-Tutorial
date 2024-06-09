#include <stdio.h>
void greet(char a);

int main()
{
    char country;
    printf("Input your country(India-I/French-F)\n");
    scanf("%c", &country);

    greet(country);

    return 0;
}

void greet(char a)
{
    if (a == 'I')
    {
        printf("Namaste");
    }
    else if (a == 'F')
    {
        printf("Bonjour");
    }
    else
    {
        printf("Try again");
    }
}