#include <stdio.h>

int main()
{
    int year;

    printf("input the year : ");
    scanf("%d", &year);

    printf("Is the year %d a leap year? : %d\n", year, ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));

    return 0;

}
        