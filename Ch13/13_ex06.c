/*
Write a function named censor that modifies a string by replacing every occurrence of foo by xxx.
For example, the string "food fool" would become "xxxd xxxl".
Make the function as short as possible without sacrificing clarity.
*/

#include <stdio.h>

void censor(char *str);

int main(void) // test program
{
    char str[] = "food fool";
    censor(str);
    puts(str);
}

void censor(char *str) // my answer
{
    for (char *p = str; *p; p++)
    {
        if (*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o')
            *p = *(p+1) = *(p+2) = 'x';
    }
}