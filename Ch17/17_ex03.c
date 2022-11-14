/*
Write the following function:
int *create_array (int n, int initial_value);

The function should return a pointer to a dynamically allocated int array with n members,
each of which is initialized to initial value.
The return value should be NULL if the array can't be allocated.
*/

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void) // test program
{
    int *arr;
    arr = create_array(3, 7);
    printf("%d %d %d", arr[0], arr[1], arr[2]);
}

int *create_array(int n, int initial_value)
{
    int *out_arr = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        out_arr[i] = initial_value;

    return out_arr;
}