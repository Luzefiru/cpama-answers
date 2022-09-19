/* a program that prints a one-month calendar where the user specifies how many days & what the starting day of the month is */

#include <stdio.h>

int main(void)
{
    int num, start;

    printf("Enter number of a days in a month: ");
    scanf("%d", &num);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    // iterates through every day of the month while keeping track of the current_day of the week
    for (int i = 1, current_day = start; i <= num; i++, current_day++)
    {
        // prints the starting gaps for the calendar based on the starting day of the week
        while (start - 1)
        {
            printf("   ");
            start -= 1;
        }
        
        // format prints the day of the month
        printf("%2d ", i);

        // prints a new line if the current_day is sunday (divisible by 7)
        if (current_day % 7 == 0) printf("\n");
    }
}