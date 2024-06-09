#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }

        if (n == 1)
        {
            return 1;
        }
    }
    int fib = fibonacci(n - 2) + fibonacci(n - 1);
    return fib;
}

int main()
{
    printf("%d", fibonacci(6));
    return 0;
}