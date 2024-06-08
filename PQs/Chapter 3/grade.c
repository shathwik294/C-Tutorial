#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100)\n");
    scanf("%d", &marks);
    if (90 <= marks && marks >= 100)
    {
        printf("A+");
    }
    else if (70 <= marks)
    {
        printf("A");
    }
    else if (30 <= marks)
    {
        printf("B");
    }
    else
    {
        printf("C");
    }

    return 0;
}