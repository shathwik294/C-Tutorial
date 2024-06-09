#include <stdio.h>
#include <math.h>

int main()
{
    int num, square;
    printf("Enter the number\n");
    scanf("%d", &num);

    // square = pow(num, 2);
    printf("The square of %d is %f", num, pow(num, 2));
    return 0;
}