#include <stdio.h>

int main()
{
    int day; // 1-mon, 2-tue, 3-wed, 4-thu, 5-fri, 6-sat, 7-sun
    printf("Enter day(1-7)\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("None");
    }
    return 0;
}