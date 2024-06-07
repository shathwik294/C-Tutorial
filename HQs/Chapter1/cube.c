#include <stdio.h>

int main()
{
    int num, cube;
    printf("Enter the number\n");
    scanf("%d", &num);

    cube = num * num * num; // Will calculate the cube of given number
    printf("The cube of %d is %d", num, cube);
    return 0;
}