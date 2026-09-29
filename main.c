#include <stdio.h>

int main(void) {
    int total_seconds;
    int hours, minutes, seconds;

    printf("Input the second : ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("The time for %d second is %d : %d : %d\n", total_seconds, hours, minutes, seconds);

    return 0;
}
