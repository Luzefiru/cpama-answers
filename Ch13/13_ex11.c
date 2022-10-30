/*
The Q&A section at the end of this chapter shows how the strcmp function might be written using array subscripting.
Modify the function to use pointer arithmetic instead.
*/

#include <stdio.h>

int mystrcmp(char *, char *);

int main(void)
{
    char *s1 = "Hello Worl", *s2 = "Hello World";
    printf("%d", mystrcmp(s1, s2) < 0);
}

int mystrcmp(char *s, char *t)
{
    char *p = s, *q = t;

    for (; *p == *t; p++, t++)
        if (*p == '\0')
            return 0;
    return *p - *q;
}