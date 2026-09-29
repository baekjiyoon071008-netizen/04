#include <stdio.h>

int main()
{
    int time;
    int minute, second;

    printf("input the second : ");
    scanf("%d", &time);

    minute = time / 60;
    second = time % 60;

    printf("the time is %d : %d\n", minute, second);

    return 0;
}