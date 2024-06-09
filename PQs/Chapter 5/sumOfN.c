#include <stdio.h>

int sum(int n);

int main()
{
    printf("%d", sum(10));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumN = sum(n - 1) + n;
    return sumN;
}