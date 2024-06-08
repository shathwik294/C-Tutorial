#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle non-positive numbers
    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for divisibility by 2
    if (num % 2 == 0 && num != 2)
    {
        isPrime = 0;
    }
    else
    {
        // Check for divisibility by numbers from 3 to sqrt(num)
        for (i = 3; i <= num / i; i = i + 2)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 0)
    {
        printf("%d is not a prime number.\n", num);
    }
    else
    {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
