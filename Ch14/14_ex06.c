/*
Write a macro DISP(f,x) that expands into a call of printf that displays the value
of the function f when called with the argument x.

Example:
DISP(sqrt, 3.0);
should be:
printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));

Write a macro DISP2(f,x,y) that's similar to DISP but works for functions with two arguments.
*/

#include <stdio.h>
#include <math.h>

#define DISP(f,x) (printf(#f "(%g) = %g\n", (x), (f(x))))
#define DISP2(f,x,y) (printf(#f "(%g, %g) = %g\n", (x), (y), (f((x), (y)))))

double product(double a, double b);

int main(void) // test program
{
    DISP(sqrt, 4.0);
    DISP2(product, 2.0, 2.0);
}

double product(double a, double b)
{
    return a * b;
}
