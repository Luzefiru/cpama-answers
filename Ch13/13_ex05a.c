/*
Write a function named capitalize that capitalizes all letters in its argument.
The argument will be a null-terminated string containing arbitrary characters, not just letters.
Use array subscripting to access the characters in the string.
Hint: Use the toupper function to convert each character to upper-case.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalize(char str[]);

int main(void)
{
    char str[] = "Hello, world!";
    capitalize(str);
    puts(str);
}

void capitalize(char str[])
{
    for (int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
    
    return;
}