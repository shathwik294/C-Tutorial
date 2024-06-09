#include <stdio.h>

int fact(int n);
int main()
{
    printf("%d", fact(3));
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fac;
    fac = fact(n - 1) * n;
    return fac;
}