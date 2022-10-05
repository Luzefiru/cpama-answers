/* encrypts a message using a user inputted Caesar Cipher shift key */

#include <stdio.h>
#include <ctype.h>

#define ARR_LEN 128

int main(void)
{
    char inp, shifted_inp, input_message[ARR_LEN] = {}, output_message[ARR_LEN] = {};
    int shift;

    /* stores each char of input message into an arary */
    printf("Enter a message to be encrypted: ");
    for (int i = 0; (inp = getchar()) != '\n'; i++)
    {
        input_message[i] = inp;
    }

    /* asks user to enter shift key */
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    /* converts & stores the shifted message into output_message array */
    for (int i = 0; i < ARR_LEN; i++)
    {
        shifted_inp = input_message[i] + shift; // initialize shifted input

        if (97 <= input_message[i] &&input_message[i] <= 122) // if the original input is lowercase
        {
            (shifted_inp > 122) ? (output_message[i] = shifted_inp - 26)
                                : (output_message[i] = shifted_inp);
        }
        else if (65 <= input_message[i] &&input_message[i] <= 90) // if the original input is uppercase
        {
            (shifted_inp > 90) ? (output_message[i] = shifted_inp - 26)
                                : (output_message[i] = shifted_inp);
        }
        else
        {
            output_message[i] = input_message[i];
        }
    }

    /* prints the output_message */
    printf("Encrypted message: ");
    for (int i = 0; output_message[i] != 0 && i < ARR_LEN; i++)
    {
        putchar(output_message[i]);
    }

    return 0;
}