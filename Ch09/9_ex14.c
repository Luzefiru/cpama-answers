#include <stdio.h>
#include <stdbool.h>

#define ARR_LEN 8

bool has_zero(int [*], int);

int main(void)
{
    int a[ARR_LEN] = {1, 1, 1, 1, 1, 1, 0, 1};

    printf("%d", has_zero(a, ARR_LEN));
}

bool has_zero(int a[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return true;
    }
    return false;
}