#include <stdio.h>

#define MAX_CHARS 128

int main(void)
{
    char input_array[MAX_CHARS] = {};
    int counter = 0;

    printf("Enter a message: ");
    for (char buffer; (buffer = getchar()) != '\n'; counter++)
    {
        input_array[counter] = buffer; 
    }

    printf("Reversal is: ");
    for (; input_array + counter >= input_array; counter--)
    {
        printf("%c", input_array[counter]);
    }

    return 0;
}