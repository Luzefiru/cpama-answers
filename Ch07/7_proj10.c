/* counts the number of vowels in a sentence */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowels = 0;
    char ch;

    printf("Enter a sentence: ");
    while (ch = getchar(), ch != '\n') // reads each character one-by-one, until the '\n'
        switch (toupper(ch)) // standardizes each character for cases
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            vowels += 1; // counts each vowel
        }

    printf("Your sentence contains %d vowels.", vowels);

    return 0;
}