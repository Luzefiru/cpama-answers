/**
 * @brief counts the digits of a number
 * 
 * @param n {long long int} - the number to count the digits
 * @return {int} - the number's amount of digits
 */
int num_digits(long long n)
{
    int digits = 0;

    while (n > 0)
        digits++, n /= 10;

    return digits;
}

#include <stdio.h>

int main(void)
{
    printf("%d", num_digits(1234567891234567891234567));
    return 0;
}