/* program that lets the user input multiple numbers and determines if there's a repeating number until the user inputs 0 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long input, n;
    bool repeat_flag;
    
    do
    {
        printf("Enter a number: ");
        scanf("%ld", &input);

        n = input;

        while (n > 0)
        {
            digit = n % 10;

            if (digit_seen[digit])
            {
                repeat_flag = 1; goto result;
            }
            else digit_seen[digit] = true;

            n /= 10;
        }

    } while (input > 0);

    result:
    (repeat_flag) ? printf("Repeated.")
                  : printf("Not repeated.");

    return 0;
}