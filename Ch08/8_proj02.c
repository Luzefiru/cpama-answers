/* program that lets a user enter a digit & creates a table of the amount of occurences corresponding to the digits */

#include <stdio.h>

int main(void)
{   
    int digit_list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int occurences[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10; // extracts the least significant digit
        occurences[digit] += 1; // increments the corresponding digit occurence number
        n /= 10;  // removes the least significant digit
    }

    /* prints out the table of digits & corresponding occurences */
    printf("Digit:        ");
    for (int i = 0; i < sizeof (digit_list) / sizeof (digit_list[0]); i++)
        printf("%d  ", digit_list[i]);
    
    printf("\nOccurences:   ");
    for (int i = 0; i < sizeof (digit_list) / sizeof (digit_list[0]); i++)
        printf("%d  ", occurences[i]);

    return 0;
}