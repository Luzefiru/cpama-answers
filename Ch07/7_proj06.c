/* prints out sizeof; int, short, long, float, double, long double */

#include <stdio.h>

int main(void)
{
    printf("%u\n", sizeof (int));
    printf("%u\n", sizeof (short));
    printf("%u\n", sizeof (long));

    printf("%u\n", sizeof (float));
    printf("%u\n", sizeof (double));
    printf("%u\n", sizeof (long double));

    return 0;
}