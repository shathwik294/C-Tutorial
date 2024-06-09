#include <stdio.h>

int my_pow(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exp;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    int powered = my_pow(base, exp);
    printf("%d to the power of %d is %d\n", base, exp, powered);

    return 0;
}