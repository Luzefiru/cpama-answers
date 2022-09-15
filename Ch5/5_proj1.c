/* a program that calculates how many digits a number has, assuming max input is no more than 4 digits */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // "if n is greater than 999 then 4 else if n > 99 then 3 else if n > 9 then 2 else 1"
    printf("The number %d has %d digits", n, (n > 999) ? 4 : (n > 99) ? 3 : (n > 9) ? 2 : 1);

    return 0;
}