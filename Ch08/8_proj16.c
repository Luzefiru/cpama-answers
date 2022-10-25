/* program that checks if two words are anagrams */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ARR_LEN 64

int main(void)
{
    char inp;
    int histogram[ARR_LEN] = {0};
    bool is_anagram = 1;

    /* asks for the first word & adds each letter to the histogram */
    printf("Enter first word: ");
    for (;(inp = getchar()) != '\n';)
    {
        if (!isalpha(inp)) continue; // skips non alphabetic characters
        histogram[tolower(inp) - 97] += 1; // adds the letter
    }

    /* asks for the second word & subtracts each letter from the histogram */
    printf("Enter second word: ");
    for (;(inp = getchar()) != '\n';)
    {
        if (!isalpha(inp)) continue; // skips non alphabetic characters
        histogram[tolower(inp) - 97] -= 1; // subtracts the letter
    }

    /* iterates through the histogram to see if everything is balanced out {0} */
    for (int i = 0; i < ARR_LEN; i++)
    {
        if (histogram[i] != 0) is_anagram = 0;
    }

    /* prints according to 'is_anagram' bool flag */
    (is_anagram) ? printf("The words are anagrams.")
                 : printf("The words are NOT anagrams.");

    return 0;
}
