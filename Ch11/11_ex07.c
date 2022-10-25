/*
Write the ff function:

void split_date(int day_of_year, int year, int *month, int *day);

day_of_year is an integer between 1 and 366,
specifying a particular day within the year designated by year.
month and day point to variables in which the function will store;
the equivalent month (1-12) and day within that month (1-31).
*/

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int day_of_year, year, month, day;

    split_date(day_of_year, year, &month, &day);

    printf("Month: %d\nDay: %d", month, day);
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    *month = day_of_year / 31;
    day_of_year %= 31;

    *day = day_of_year;
}