/* calculates the factorial of a positive integer 'n' */

#include <stdio.h>

/**
 * @brief A function that calculates the factorial of a positive integer.
 * 
 * @param x {int} : a number to get the factorial from = (x!)
 * @return {int} : the factorial of 'x'
 */
int factorial(int x)
{
    if (x == 0) return 1;

    return x * factorial(x-1);
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d: %d", n, factorial(n));
}