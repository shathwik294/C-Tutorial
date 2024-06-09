#include <stdio.h>

int sum(int num1, int num2);
void printTable(int n);

int main()
{
    int num1, num2;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("%d", sum(num1, num2));
    printTable(17);
    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
void printTable(int n)
{
    for (int i; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}