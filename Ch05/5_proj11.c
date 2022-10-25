/* prompts the user to input a two-digit number, displays the english word for it, assumes input is always 2 digits */

#include <stdio.h>

int main(void)
{
    int num, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    // error handling for out of range.
    if (num < 10 || num > 99)
    {
        printf("Error: you entered an invalid number");
        return 0;
    }

    // breaks the number into ones & tens digits
    ones = num % 10; tens = num / 10;

    // prints the English word of the inputted number
    printf("You entered the number ");
    if (num >= 10 && num <= 19) // switch cases for special numbers from 10-19
    {
        switch (num)
        {   
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
    }
    else // prints the complete English word
    {
        switch (tens)
        {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }
        switch (ones)
        {
            case 0: break;
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }
    }

    return 0;
    
}