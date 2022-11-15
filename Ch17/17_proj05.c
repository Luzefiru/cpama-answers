#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 20
#define MAX_ARR_LEN 10

void *read_line(void);
int compareWords(const void *, const void *);

int main(void)
{
    char *str_array[MAX_ARR_LEN], *inp;

    /* reads input until the user enters a sole newline */
    int i;
    for(i = 0; i < MAX_ARR_LEN; i++)
    {
        printf("Enter a word: ");
        str_array[i] = read_line();

        if (strlen(str_array[i]) == 0)
            break;
    }
    int max = i;

    /* sorts the array using qsort() */
    qsort(str_array, max, sizeof(char *), compareWords);

    /* prints the array starting from index 0 */
    for (int j = 0; j < max; j++)
    {
        printf("%s\n", str_array[j]);
    }
}

void *read_line(void)
{
    char str[MAX_STR_LEN];
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
      if (i < MAX_STR_LEN)
        str[i++] = ch;
    str[i] = '\0';

    char *out = malloc(sizeof(char) * i);
    strcpy(out, str);

    return out;
}

int compareWords(const void *str1, const void *str2)
{
    return strcmp(*(char **) str1, *(char **) str2);
}
