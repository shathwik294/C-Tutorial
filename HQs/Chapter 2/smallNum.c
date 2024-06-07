#include <stdio.h>

int main()
{
    int num1, num2, sol;
    printf("Enter the number\n");
    scanf("%d", &num1);
    printf("Enter the number\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        sol = num1;
    }
    else if (num1 < num2)
    {
        sol = num2;
    }
    printf("The greatest number is %d", sol);

    return 0;
}