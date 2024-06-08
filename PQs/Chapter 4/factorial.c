#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    printf("Factorial is %d", fac);
    return 0;
}