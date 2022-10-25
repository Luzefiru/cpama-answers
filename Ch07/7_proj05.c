/* a program that calculates a scrabble word's value based on letter rarity */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int sum = 0;

    printf("Enter a word: ");
    
    // reads each character entered until the '\n'
    while (c = getchar(), c != '\n')
    {
        switch (toupper(c)) // converts to uppercase for compatibility, then adds the value to the total sum according to the rarity
        {
            case 'D': case 'G':
                sum += 2; break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4; break;
            case 'K':
                sum += 5; break;
            case 'J': case 'X':
                sum += 8; break;
            case 'Q': case 'Z':
                sum += 10; break;
            default:
                sum += 1;
        }
    }

    printf("Scrabble value: %d", sum); // prints out the scrabble value

    return 0;
}