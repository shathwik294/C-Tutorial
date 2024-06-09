#include <stdio.h>

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int number;
    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error: Input must be non-negative.\n");
    }
    else
    {
        int result = sum_of_digits(number);
        printf("Sum of digits: %d\n", result);
    }

    return 0;
}