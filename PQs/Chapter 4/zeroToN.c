#include <stdio.h>

int main()
{
    // int n;
    // printf("Enter the number\n");
    // scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    int n, i = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}