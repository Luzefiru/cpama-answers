/*

Modify the find_largest function so it uses pointer arithmetic - not subscripting - to visit array elements.

*/

#include <stdio.h>

int find_largest(int *a, int n);

int main(void) // test program
{
    int arr[5] = {1,2,3,5,4};
    printf("%d", find_largest(arr, 5));
    return 0;
}

int find_largest(int *a, int n) // answer
{
    int largest = *a;

    for (int *p = a+1; p < a + n; p++)
        if (*p > largest)
            largest = *p;

    return largest;
}