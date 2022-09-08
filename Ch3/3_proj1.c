/**
 * program that asks date from the user in the
 * mm/dd/yyyy format then displays it in yyyymmdd
 */

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d", year, month, day);

    return 0;
}
