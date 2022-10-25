/*

correct the function that computes the sum & average of the numbers in an array:

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0;
    for (i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}

*/

#include <stdio.h>
#define ARR_LEN 4

void avg_sum(double [], int, double *, double *);

int main(void)
{
    double arr[ARR_LEN] = {2.0, 2.0, 2.0, 2.0}, average = 0.0, summation = 0.0;

    avg_sum(arr, ARR_LEN, &average, &summation);

    printf("%lf %lf", average, summation);
}

/* MY REVISION */
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}