/*
Write the following function:

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

The function searches the array for its largest and second largest elements,
storing them in the variables pointed to by largest and second_largest, respectively.
Use pointer arithmetic - not subscripting - to visit array elements.

*/

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) // test program
{
    int largest, second_largest, arr[5] = {1,2,5,4,3};

    find_two_largest(arr, 5, &largest, &second_largest);

    printf("%d %d", largest, second_largest);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) // my answer
{
    *largest = *a, *second_largest = *a;
    for (const int *p = &a[1]; p < a + n; p++)
    {
        if (*p > *largest)
            *second_largest = *largest, *largest = *p;
        else if (*p > *second_largest)
            *second_largest = *p;
    }
}