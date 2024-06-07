#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1, b = 2, c = 10;
    int sum = a + b;
    int multiply = a * b;
    int x, y = a * a;

    // Valid Methods
    a = b + c;
    a = b * c;
    a = b / c;
    a = -b % c;

    // Invalid Method
    // b + c = a;
    // a = bc;
    // a = b ^ c;

    return 0;
}