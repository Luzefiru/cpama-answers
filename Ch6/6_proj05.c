/* program that gets a nonnegative integer of any length & reverses it */

#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    printf("The reversal is: ");
    // prints the ones digit and takes it out until the number becomes 0
    do
    {
        printf("%d", i % 10);
        i /= 10;

    } while (i > 0);

    return 0;
}