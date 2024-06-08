#include <stdio.h>

int main()
{
    int n;
    for (int i = 1;; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            break;
        }
    }
    return 0;
}