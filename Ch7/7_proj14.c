/* uses Newton-Raphson algorithm to find the square root of a number */

#include <stdio.h>
#include <math.h>

int main(void)
{
    // y is initial guess for the square root, epsilon is the allowable treshold
    double x, y = 1, avg, epsilon = 0.00001;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (1)
    {
        avg = (y + x/y)/2;
        if (fabs(y - avg) < 0.00001*y) break;
        y = avg;
    }

    printf("Square root: %lf", avg);

    return 0;
}