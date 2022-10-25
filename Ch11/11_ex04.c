/* create a function that modifies & swaps the values of 2 variables */

#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 0, j = 1, *p = &i, *q = &j;

    swap(&i, &j);

    printf("%d %d", i, j);
}

void swap(int *p, int *q)
{
    int temp = *p;

    *p = *q;
    *q = temp;
}