/* function that finds the median of three numbers */

#include <stdio.h>

double median(double x, double y, double z)
{
    return (x <= y && y <= z) ? y : (y <= x && x <= z) ? x : z;
}

int main(void)
{
    printf("%lf", median(1.0, 3.0, 2.0));
}
