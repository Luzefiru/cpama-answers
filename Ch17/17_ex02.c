/*
Write a function named duplicate that uses dynamic storage allocation to create a copy of a string. Example:

p = duplicate(str);

would allocate space for a string of the same length as str, copy the contents into the new string p, then return a pointer to it.
Have duplicate() return NULL if the memory allocation fails.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *);

int main(void) // test program
{
    char *origString = "Hello World!";
    char *copyString = duplicate(origString);
    puts(origString);
    puts(copyString);
}

char *duplicate(char *orig)
{
    char *output;
    if ((output = malloc(strlen(orig) * sizeof(char) + 1)) == NULL)
    {
        puts("malloc() failed, terminating program...");
        exit(EXIT_FAILURE);
    }
    strcpy(output, orig);

    return output;
}