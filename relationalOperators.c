#include <stdio.h>

int main()
{
    // 1 >>> True
    // 0 >>> False
    printf("%d\n", 3 >= 3);
    printf("%d\n", 3 < 3);
    printf("%d\n", 3 != 3);
    printf("%d\n", 3 == 3);
    printf("%d\n", 3 != 2);

    // Logical Operators
    // && >>> AND
    // || >>> OR
    // ! >>> NOT
    printf("%d\n", 3 > 4 && 5 < 6);
    printf("%d\n", 3 > 4 || 5 < 6);
    printf("%d\n", !(3 > 4));
    printf("%d\n", !(3 > 4 && 5 < 6));
    return 0;
}