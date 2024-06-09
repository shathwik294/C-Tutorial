#include <stdio.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float side = 10;
    float rad = 3.2;
    float a = 2, b = 3;

    printf("The area of square is %f\n", squareArea(side));
    printf("The area of circle is %f\n", circleArea(rad));
    printf("The area of rectangle is %f\n", rectangleArea(a, b));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}