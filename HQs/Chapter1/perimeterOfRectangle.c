#include <stdio.h>

int main()
{
    float length, width, perimeter;
    printf("Enter the length of rectangle\n");
    scanf("%f", &length);

    printf("Enter the width of rectangle\n");
    scanf("%f", &width);

    perimeter = 2 * (length + width); // Will calculate the perimeter of the rectangle
    printf("The perimeter of rectangle is %f", perimeter);
    return 0;
}