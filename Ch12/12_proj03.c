#include <stdio.h>

#define MAX_CHARS 128

int main(void)
{
    char input_array[MAX_CHARS] = {}, *p;
    p = input_array;

    printf("Enter a message: ");
    for (char buffer; (buffer = getchar()) != '\n';)
    {
        *(p++) = buffer; 
    }

    printf("Reversal is: ");
    for (; p >= input_array; p--)
    {
        printf("%c", *p);
    }

    return 0;
}