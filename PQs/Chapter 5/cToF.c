#include <stdio.h>

float cToF(float c);
int main()
{
    printf("Temperature is %f F", cToF(37));
    return 0;
}
float cToF(float c)
{
    return c * 1.8 + 32;
}