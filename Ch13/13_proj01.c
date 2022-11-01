#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STR_LEN 64

int main(void)
{
    char smallest_word[MAX_STR_LEN], largest_word[MAX_STR_LEN], current_word[MAX_STR_LEN];
    bool flag_firstInput = 1;

    do
    {
        printf("Enter word: ");
        scanf("%s", current_word);

        if (flag_firstInput)
        {
            flag_firstInput = 0;
            strcpy(largest_word, strcpy(smallest_word, current_word));
        }
        
        if (strcmp(current_word, largest_word) > 0)
            strcpy(largest_word, current_word);
        else if (strcmp(current_word, smallest_word) < 0)
            strcpy(smallest_word, current_word);

    } while (strlen(current_word) != 4);

    putchar('\n');
    printf("Smallest word: %s", smallest_word);
    putchar('\n');
    printf("Largest word: %s", largest_word);

    return 0;
}