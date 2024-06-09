#include <stdio.h>

void temp(int num)
{
    if (num > 40)
    {
        printf("It is hot.");
    }
    else if (num < 15)
    {
        printf("It is cold.");
    }
    else
    {
        printf("It is normal.");
    }
}

int main()
{
    temp(43);
    return 0;
}