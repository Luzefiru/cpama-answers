/* prompts the user to input two dates & indicates which comes earlier in the calendar, assumes valid dates */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int m1, d1, y1, m2, d2, y2;
    bool first_date_after;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    first_date_after = (y1 > y2 && y1 != y2) ? 1 : (m1 > m2 && m1 != m2) ? 1 : (d1 > d2);

    if (!first_date_after)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
    }
    else
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);
    }

    return 0;
}