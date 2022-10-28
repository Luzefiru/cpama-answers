/*

Rewrite the following function to use pointer arithmetic instead of array subscripting.
(In other words, eliminate the variables i and j and all uses of the Il operator.)
Use a single loop instead of nested loops.

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];

    return sum;
}

*/

#include <stdio.h>
#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void) // test program
{
    int arr[3][LEN] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printf("%d", sum_two_dimensional_array(arr, 3));

    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n) // my answer
{
    int sum = 0;

    for (const int *p = *a; p < *a + n * LEN; p++)
        sum += *p;

    return sum;
}
