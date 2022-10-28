/* program that reads a message, then checks whether it's a palindrome (excluding special characters) */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_CHARS 128

int main(void)
{
    bool is_palindrome = 1;
    char input_array[MAX_CHARS] = {}, *p = &input_array[0];

    /* stores all letters into the {input_array} */
    printf("Enter a message: ");
    for (char buffer; (buffer = getchar()) != '\n';)
        if (isalpha(buffer))
            *p++ = tolower(buffer);
    
    /* checks if each character from the end matches the start until they overlap */
    for (char *q = input_array; --p >= input_array; q++)
    {
        if (*q != *p)
            is_palindrome = 0;
    }

    (is_palindrome) ? printf("Palindrome") : printf("Not a palindrome");
    
    return 0;
}