/* write a condensed factorial function */

#include <stdio.h>

int fact(int n)
{
    return (n <= 0) ? 1 : n * fact(n-1);
}

int main(void)
{
    printf("%d", fact(4));
}