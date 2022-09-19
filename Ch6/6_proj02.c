/* finds GCD using Euclid's Algorithm */

#include <stdio.h>

int main(void)
{
    int n, m, r;

    printf("Input 2 integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Greatest common divisor: %d", m);

}