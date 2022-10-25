/*
Write the ff function;

void split_time(long total_sec, int *hr, int *min, int *sec);

total_sec is a time represented as the number of seconds since midnight.
hr, min, and sec are pointers to variables in which the function will store the equivalent time in;
hours (0-23), minutes (0–59), and seconds (0–59), respectively.
*/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long int raw_seconds;
    int hours = 0, minutes = 0, seconds = 0;

    printf("Enter an amount of seconds to separate the hours, minutes, and seconds: ");
    scanf("%ld", &raw_seconds);

    split_time(raw_seconds, &hours, &minutes, &seconds);

    printf("Hours: %d\nMinutes: %d\nSeconds: %d", hours, minutes, seconds);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{   
    *hr = total_sec / 3600;
    total_sec = total_sec % 3600;

    *min = total_sec / 60;
    total_sec = total_sec % 60;

    *sec = total_sec;
}