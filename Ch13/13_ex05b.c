/*
Rewrite the capitalize function, this time using pointer arithmetic to access the characters in the string.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char *str);

int main(void)
{
    char str[] = "Hello, world!";
    capitalize(str);
    puts(str);
}

void capitalize(char *str)
{
    for (char *p = str; *p != '\0';)
        *p++ = toupper(*p);
    
    return;
}