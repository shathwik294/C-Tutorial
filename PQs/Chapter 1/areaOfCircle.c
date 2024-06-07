#include <stdio.h>

int main()
{
    float pi = 3.14, radius, area;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);

    area = pi * radius * radius;
    printf("The area of circle is %f", area);
    return 0;
}