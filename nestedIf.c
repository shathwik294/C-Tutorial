#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("The number is +ve");
        if (num % 2 == 0)
        {
            printf(" and EVEN.");
        }
        else
        {
            printf(" and ODD.");
        }
    }
    else
    {
        printf("The number is -ve");
    }
    return 0;
}