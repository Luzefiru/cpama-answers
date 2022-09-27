/* calculates the average word length of an inputted sentence */

#include <stdio.h>

int main(void)
{
    char ch = '\0';
    int letters = 0, word = 1; // word is 1 because input has to be at least 1 word

    printf("Enter a sentence: ");
    
    for (ch = getchar(); ch != '\n'; ch = getchar())
    {
        if (ch != ' ') letters++; // increments 'letters' for each character that is not a space
        else word ++; // increments 'words' for each space
    }

    printf("Average word length: %.1f", (float) letters / word);
        
    return 0;
}