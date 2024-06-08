#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("It is natural number\n");
    }
    else
    {
        printf("It is not natural number\n");
    }
    return 0;
}