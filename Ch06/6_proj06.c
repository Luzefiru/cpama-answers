/* prints all even squares between 1 and user inputted n */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // iterates through different roots as long as their square is less than the input for early exit
    for (int c = 1; c * c <= n; c++)
    {
        // checks if the square of the current counter is even then prints it
        if ((c * c  % 2) == 0)
            printf("%d\n", c * c);
    }
}