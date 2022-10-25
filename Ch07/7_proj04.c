/* translates alphabetic phone number to numeric form, not accepting Z or lowercase letters, keeps non-alphabet characters as is */

#include <stdio.h>

int main(void)
{
    int c;

    printf("Enter phone number: ");
    while (c = getchar(), c != '\n')
    {
        if (c >= 'A' && c <= 'Z')
        {
            // prints the converted letters by fitting them in a range starting from 2, incrementing every 3 letters
            printf("%d", (c - 'A' - 1) / 3 + 2);
        }
        else
            // prints the normal character if cannot be converted
            printf("%c", c);
    }

    return 0;
}