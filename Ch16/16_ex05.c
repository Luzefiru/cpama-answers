#include <stdio.h>

#define DAYS_IN_A_MONTH 31

struct date {
    int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void) // test program
{
    struct date d1 = {5, 5, 2022};
    struct date d2 = {12, 25, 2022};

    printf("%d\n", day_of_year(d2));
    printf("%d\n", compare_dates(d1, d2));
    printf("%d\n", compare_dates(d2, d1));
}

int day_of_year(struct date d)
{
    return ((d.month-1) * DAYS_IN_A_MONTH- + d.day);
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;
    else if (d2.year < d1.year)
        return 1;

    if (d1.month < d2.month)
        return -1;
    else if (d2.month < d1.month)
        return 1;

    if (d1.day < d2.day)
        return -1;
    else if (d2.day < d1.day)
        return 1;

    else
        return 0;
}