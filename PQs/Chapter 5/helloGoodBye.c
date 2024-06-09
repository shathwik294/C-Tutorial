#include <stdio.h>

void hello();
void goodBye();
int main()
{
    hello();
    goodBye();
    return 0;
}
void hello()
{
    printf("Hello\n");
}
void goodBye()
{
    printf("Good Bye\n");
}