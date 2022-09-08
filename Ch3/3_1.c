/*
Part I

My Predictions (_ = space):

1) ____86, 1040 [✓]
2) _0.30253e+02 [X]
3) 83.1620 [✓]
4) 1e-06 [✓]

*/



/*
Part II
*/
#include <stdio.h>

int main(void)
{
    float x = 123.45f;

    printf("%-8.1e|\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);

    return 0;
}