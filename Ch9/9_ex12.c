#include <stdio.h>

#define ARR_LEN 3

double inner_product(double [*], double [*], int);

int main(void)
{
    double arr1[ARR_LEN] = {1.0, 2.0, 3.0}, arr2[ARR_LEN] = {1.0, 2.0, 3.0}; // arrays to use for the function inner_product

    printf("%.2lf", inner_product(arr1, arr2, ARR_LEN));
}


/**
 * @brief calculates the sum of the products of each same index elements in 2 double arrays
 * 
 * @param a {double array} : first array
 * @param b {double array} : second array
 * @param n {int} : array length
 * @return {double} : the sum of the products of each same index elements in both arrays
 */
double inner_product(double a[], double b[], int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }

    return sum;
}