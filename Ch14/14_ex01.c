/*
Write parameterized macros that compute the following values:
(a) The cube of x.
(b) The remainder when n is divided by 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.
*/

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER_BY_4(n) ((n) % 4)
#define PRODUCT_LESS_THAN_100(x, y) (((x) * (y) < 100) ? 1 : 0)

int main(void) // test program
{
    printf("%d\n", CUBE((30/5)/3));
    printf("%d\n", REMAINDER_BY_4((10/2)));
    printf("%d", PRODUCT_LESS_THAN_100(CUBE(2), 10/1));
}