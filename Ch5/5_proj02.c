/* converts 24-hour time to 12-hour time */

#include <stdio.h>

int main(void)
{
    int hour, minutes; char time_of_day;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minutes);

    // sets the time of day
    time_of_day = (hour < 12) ? 'A' : 'P';

    // converts the 24-hour time to 12-hour time.
    hour = (hour > 12) ? hour - 12 : hour;
    
    printf("Equivalent 12-hour time: %d:%.2d %cM", hour, minutes, time_of_day);

    return 0;
}