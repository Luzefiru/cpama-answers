#include <stdio.h>

struct time
{
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void) // test program
{
    struct time post_split = split_time(4830);

    printf("%d %d %d", post_split.hours, post_split.minutes, post_split.seconds);
}

struct time split_time(long total_seconds)
{
    struct time output = {0, 0, 0};

    while (total_seconds >= 3600)
    {
        total_seconds -= 3600;
        output.hours++;
    }

    while (total_seconds >= 60)
    {
        total_seconds -= 60;
        output.minutes++;
    }

    output.seconds = total_seconds;

    return output;
}