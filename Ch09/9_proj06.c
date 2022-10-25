/* a function that computes the value of a polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>
#include <math.h>

double
polynomial(double x);

int main(void)
{
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Result: %.2lf", polynomial(x));
}

double polynomial(double x)
{
    return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}