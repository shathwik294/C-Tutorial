#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 7)
        {
            break;
        }
    }
    return 0;
}