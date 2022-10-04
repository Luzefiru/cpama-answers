/* program that reverses an array of a inputted N amount of {int} elements */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N];

    printf("Enter %d numbers: ", N);
    
    for (int i = 0; i < sizeof (a) / sizeof (a[0]); i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (int i = N - 1; i >= 0; i--)
        printf(" %d", a[i]);
    
    return 0;
}