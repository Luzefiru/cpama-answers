/*

Write the following function:

double inner_product(const double *a, const double *b, int n);

a and b both point to arrays of length n.
The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
Use pointer arithmethic - not subscripting - to visit array elements.

*/

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void) // test program
{
    double arr1[3] = {1.0,2.0,3.0};
    double arr2[3] = {2.0,2.0,2.0};

    printf("%f", inner_product(arr1, arr2, 3));

    return 0;
}

double inner_product(const double *a, const double *b, int n) // answer
{
    double sum;

    for (const double *p = a, *q = b; p < a + n; p++, q++)
        sum += (*p) * (*q);

    return sum;
}