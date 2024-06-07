#include <stdio.h>

int main()
{
    // *,/,% >>> top preference
    // +,- >>> next preference
    // = >>> least preference
    int a = 4 + 9 * 10;
    printf("%d\n", a);
    float b = 4 * 3 / 6 * 2;
    printf("%f", b);
    return 0;
}