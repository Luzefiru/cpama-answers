/* program that checks if two words are anagrams */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ARR_LEN 26

void read_word(int arr[*]);
bool equal_array(int arr1[*], int arr2[*]);

int main(void)
{
    int counts1[ARR_LEN] = {0}, counts2[ARR_LEN] = {0};

    /* asks for the first word & counts each letter to counts1 array */
    printf("Enter first word: ");
    read_word(counts1);

    /* asks for the second word & counts each letter to counts2 array */
    printf("Enter second word: ");
    read_word(counts2);

    /* displays whether the words are equal */
    printf("Your words are ");
    (equal_array(counts1, counts2)) ? printf("equal.")
                                    : printf("NOT equal.");

    return 0;
}

/**
 * @brief reads each letter of a word, stores the histogram of the count of letters to an inputted array
 * 
 * @param counts {int array} : the array to store the histogram of each letter of the word
 */
void read_word(int counts[])
{
    char inp;

    for (;(inp = getchar()) != '\n';)
    {
        if (!isalpha(inp)) continue; // skips non alphabetic characters
        counts[tolower(inp) - 97] += 1; // increments the letter scount
    }

    return;
}

/**
 * @brief checks whether ALL the elements of 2 {int} arrays are equal
 * 
 * @param arr1 {int array} : the first array
 * @param arr2 {int array} : the second array
 * @return {bool} : 1 if they are equal, 0 if they are NOT
 */
bool equal_array(int arr1[], int arr2[])
{
    bool is_equal = 1;

    /* iterates through both arrays to check if they are equal */
    for (int i = 0; i < ARR_LEN; i++)
    {
        if (arr1[i] != arr2[i]) is_equal = 0; // raise false flag if mismatch element
    }

    return is_equal;
}