#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (0 < age && age <= 12)
    {
        printf("You are child");
    }
    else if (13 <= age && age < 18)
    {
        printf("You are teenager");
    }
    else
    {
        printf("You are adult");
    }
    printf("\nThank you");
    return 0;
}