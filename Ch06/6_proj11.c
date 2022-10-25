/* program that approximates the mathematical constant e */ 

#include <stdio.h>

int main(void)
{
    int n, factorial, current;
    float sum_e = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

    // for each number until n
    for (int i = 1; i <= n; i++)
    {

        // calculate the factorial of the number
        for (current = i, factorial = i; current > 1; current--)
        {
            factorial *= (current-1);
        }

        // add it to the sum of mathematical constant e
        sum_e += 1.0f/factorial;
    }

    // prints out the value of e according to n
    printf("The value for the mathematical constant e is: %f", sum_e);
}