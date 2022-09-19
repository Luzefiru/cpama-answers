/* program that gets a 3 digit integer & reverses it */

#include <stdio.h>

int main(void)
{
    int before, ones, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &before);

    // get the individual digits for each place
    ones = before % 10;
    tens = (before / 10) % 10;
    hundreds = before / 100;

    printf("The reversal is: %d", ones * 100 + tens * 10 + hundreds);

    return 0;
}