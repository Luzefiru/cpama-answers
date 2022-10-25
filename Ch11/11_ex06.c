/*
Create the ff function:

void find_two_largest(int a[], int n, int *largest, int *second_largest);

When passed an array a of length n,
the function will search a for its largest and second largest elements,
storing them in the variables pointed to by largest and second largest, respectively.
*/

#include <stdio.h>
#define ARR_LEN 4

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int arr[ARR_LEN] = {1,3,4,2}, largest, second_largest;

    find_two_largest(arr, ARR_LEN, &largest, &second_largest);

    printf("1st: %d\n2nd: %d", largest, second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{   
    *largest = (*second_largest = a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
            *second_largest = *largest, *largest = a[i];
        else if (a[i] != *largest && a[i] > *second_largest)
            *second_largest = a[i];
    }
}