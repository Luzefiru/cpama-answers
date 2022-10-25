/*
Write the ff function:

int *find_largest(int a[], int n);

When passed an array of length n,
the function will return a pointer to the array's largest element.
*/

#include <stdio.h>

#define ARR_LEN 4

int *find_largest(int a[], int n);

int main(void)
{
    int arr[ARR_LEN] = {1,4,3,2}, largest;

    largest = *find_largest(arr, ARR_LEN);

    printf("%d", largest);
}

int *find_largest(int a[], int n)
{
    int *largest = &a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > *largest)
            largest = &a[i];

    return largest;
}