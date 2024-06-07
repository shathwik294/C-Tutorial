#include <stdio.h>

int main()
{
    float a, b, c;
    float avg;
    printf("Enter the number\n");
    scanf("%f", &a);
    printf("Enter the number\n");
    scanf("%f", &b);
    printf("Enter the number\n");
    scanf("%f", &c);
    avg = (a + b + c) / 3;
    printf("The average of numbers %f, %f, %f is %f", a, b, c, avg);
    return 0;
}