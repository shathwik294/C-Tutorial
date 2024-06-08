#include <stdio.h>

int main()
{
    int lower, upper, i, isPrime, num;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    // Print header for the output
    printf("Prime numbers between %d and %d are: ", lower, upper);

    // Loop through numbers in the range
    for (num = lower; num <= upper; num++)
    {
        // Check if the number is prime
        isPrime = 1;
        if (num <= 1)
        {
            isPrime = 0;
        }
        else
        {
            // Check for divisibility by numbers from 2 to sqrt(num)
            for (i = 2; i <= num / i; i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        // Print prime numbers
        if (isPrime == 1)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
