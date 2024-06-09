#include <stdio.h>

float marks(int math, int sci, int san);
int main()
{
    printf("Your percentage is %f", marks(97, 45, 69));

    return 0;
}
float marks(int math, int sci, int san)
{
    return (math + sci + san) / 3;
}