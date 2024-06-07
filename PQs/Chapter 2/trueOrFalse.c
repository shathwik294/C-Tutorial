#include <stdio.h>

int main()
{
    int isSunday = 1, isSnowing = 1;
    printf("%d\n", isSunday && isSnowing);
    int isMonday = 1, isRaining = 0;
    printf("%d\n", isSunday || isSnowing);

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("%d", (num > 9 && num < 100));
    return 0;
}