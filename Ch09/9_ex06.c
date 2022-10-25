/**
 * @brief returns the kth digit (starting from the right) of a number n
 * 
 * @param n {int} - a number to extract a digit from
 * @param k {int} - the digit's place, starting from the right (1 = ones, 3 = hundreds)
 * @return {int} - the extracted digit, otherwise 0 if the kth place is beyond the number
 */
int digit(int n, int k)
{
    for (int i = 0; i < (k - 1); i++)
    {
        n /= 10;
    }

    return n % 10;
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", digit(123, 3));
    printf("%d", digit(123, 4));
    return 0;
}