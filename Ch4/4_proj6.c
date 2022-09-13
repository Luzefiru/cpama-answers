/* a program that calculates the Check Number of the first 12-digits of an European Article Number (EAN) */

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    int first_sum, second_sum;

    printf("Enter the first 12 digits of an European Article Number (EAN): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    second_sum = d1 + d3 + d5 + d7 + d9 + d11;

    printf("Check digit: %d", 9 - (((first_sum * 3) + second_sum) - 1) % 10);
}