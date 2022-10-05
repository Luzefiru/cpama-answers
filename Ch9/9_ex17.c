/* write a non-recursive factorial function */

#include <stdio.h>

int fact(int n)
{
    int product = 1;

    for (int i = 1; i <= n; i++)
        product *= i;

    return product;
}

int main(void)
{
    printf("%d", fact(4));
}