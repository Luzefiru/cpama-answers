/* recursive GCD function */

#include <stdio.h>

/**
 * @brief finds the greatest common divisor of two inputted numbers using Euclid's algorithm
 * 
 * @param n {int} - a number
 * @param m {int} - another number
 * @return {int} - the GCD of both numbers
 */
int gcd(int n, int m)
{
    if (n == 0) return m;
    gcd(m % n, n);
}

int main(void)
{
    printf("%d", gcd(8,4));
}