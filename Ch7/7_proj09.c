/* converts 12-hour time to 24-hour time, assumes NN to be PM */

#include <stdio.h>

int main(void)
{
    int hr, min;
    char time_of_day;

    printf("Etner a 12-hour time (HH:MM XX): ");
    scanf("%d:%d %cM", &hr, &min, &time_of_day);

    printf("Equivalent 24-hour time: %.2d:%.2d",
    (time_of_day == 'P' && hr != 12) ? hr + 12 : hr, min); // adds 12 if it's PM beyond 12, else keep it as is
}