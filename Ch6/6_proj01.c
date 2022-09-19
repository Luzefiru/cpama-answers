/* program that displays largest number from a set of inputs from the user that isn't 0 or a negative number */

#include <stdio.h>

int main(void)
{
    float i, largest = 0;

    // keeps asking for input as long as it is not 0 or a negative number, executes at least once to save value
    do
    {
        // asks for float input
        printf("Enter a number (can be a float): ");
        scanf("%f", &i);

        // saves the number if it's the largest, or if there is no largest so far (largest = 0)
        largest = (i > largest || largest == 0) ? i : largest;

    } while (i > 0);

    // displays the largest number rounded to 2 decimal points
    printf("\nThe largest number entered was %.2f\n", largest);

    return 0;
}