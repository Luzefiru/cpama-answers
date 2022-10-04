/* reverses the words in a sentence */

#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
    char ch, sentence[MAX_LEN] = {0}, terminating_char;

    /* stores the user input into the array 'sentence' and stores the punctuation mark in 'terminating_char' */
    printf("Enter a sentence: ");
    for (int i = 0; (ch = getchar()) != '\n'; i++)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating_char = ch;
            break;
        }
        
        sentence[i] = ch;
    }

    /* reverses the sentence & appends terminating character to the end */
    printf("Reversal of sentence: ");
    for (int i = MAX_LEN - 1; i > -2; i--) // traverses through the array backwards
    {
        if (sentence[i] == ' ' || i == -1) // triggers on the space ' ' or end of array index
        {
            /* prints the word */
            for (int word_i = i + 1; sentence[word_i] != ' ' && sentence[word_i] != 0; word_i++)
            {
                putchar(sentence[word_i]);
            }
            if (i != -1) printf(" "); // adds a space after if not the last word
        }
    }
    printf("%c", terminating_char);

    return 0;
}