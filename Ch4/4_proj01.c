/* program that gets a 2 digit integer & reverses it */

#include <stdio.h>

int main(void)
{
    int before;

    printf("Enter a two-digit number: ");
    scanf("%d", &before);

    printf("The reversal is: %d", (before / 10) + (before % 10 * 10));

    return 0;
}