/* translates a message into B1FF-speak where certain letters are translated into numbers */

#include <stdio.h>
#include <ctype.h>

#define MAX_INPUT_LEN 100

int main(void)
{
    char ch, user_input[MAX_INPUT_LEN] = {0};

    /* stores each character of the input into the array 'user_input' */
    printf("Enter message: ");
    for (int i = 0; (ch = getchar()) != '\n'; i++)
    {
        user_input[i] = ch;
    }

    /* prints out each character stored in the input array as translated B1FF-speak */
    printf("In B1FF-speak: ");
    for (int i = 0; i < MAX_INPUT_LEN && user_input[i] != 0; i++)
    {
        switch (toupper(user_input[i])) // changes letter to uppercase for standardized cases
        {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;

            default: putchar(toupper(user_input[i]));
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}