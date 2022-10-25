/* program that lets the user enter a number & prints out which digits repeated, reading from right to left */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit (s): ");
    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
            printf("%d ", digit);
        else
            digit_seen[digit] = true;

        n /= 10;
    }

    return 0;
}