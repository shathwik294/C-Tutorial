#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100)\n");
    scanf("%d", &marks);

    // if (marks >= 30)
    // {
    //     printf("Pass");
    // }
    // else
    // {
    //     printf("Fail");
    // }
    marks >= 30 ? printf("Pass") : printf("Fail");
    return 0;
}