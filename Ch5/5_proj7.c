/* finds the largest & smallest of four integers inputted by the user */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max1, max2, min1, min2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // first if
    if (n1 > n2)
    {
        max1 = n1;
        min1 = n2;
    }
    else
    {
        max1 = n2;
        min1 = n1;
    }

    // second if
    if (n3 > n4)
    {
        max2 = n3;
        min2 = n4;
    }
    else
    {
        max2 = n4;
        min2 = n3;
    }

    // third if
    if (max1 > max2)
    {
        largest = max1;
    }
    else
    {
        largest = max2;
    }

    // fourth if
    if (min1 < min2)
    {
        smallest = min1;
    }
    else
    {
        smallest = min2;
    }

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}