/*
Write the following function:

bool search(const int a[], int n, int key);

a is an array to be searched, n is the number of elements in the array, and key is the search key.
search should return true if key matches some element of a, and false if it doesn't.
Use pointer arithmetic—not subscripting-to visit array elements.

*/

#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void) // test program
{
    int arr[5] = {1,2,3,4,5};

    printf("%d\n", search(arr, 5, 5));
    printf("%d\n", search(arr, 5, -1));

    return 0;
}

bool search(const int a[], int n, int key) // answer
{
    for (const int *p = &a[0]; p < a + n; p++)
        if (*p == key)
            return true;

    return false; // defaults to false after no match in the entire array
}